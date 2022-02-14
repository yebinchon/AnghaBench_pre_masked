
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pps_source_info {char* path; int mode; int * dev; int owner; int name; } ;
struct pps_client_pp {int index; int pardev; int cw; int pps; } ;
struct parport {int name; TYPE_1__* ops; } ;
struct pardev_cb {int flags; int irq_func; struct pps_client_pp* private; } ;
typedef int pps_client_cb ;
struct TYPE_2__ {int (* enable_irq ) (struct parport*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct pps_client_pp*) ;
 struct pps_client_pp* FUNC_4 (int,int ) ;
 int FUNC_5 (struct pardev_cb*,int ,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_12 ;
 int FUNC_7 (struct parport*,int ,struct pardev_cb*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_13 ;
 int FUNC_10 (struct pps_source_info*,int) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (struct parport*) ;

__attribute__((used)) static void FUNC_14(struct parport *VAR_14)
{
 struct pardev_cb VAR_15;
 int VAR_16;
 struct pps_client_pp *VAR_17;
 struct pps_source_info VAR_18 = {
  .name = VAR_1,
  .path = "",
  .mode = VAR_4 | VAR_7 | VAR_8 | VAR_5 | VAR_6 | VAR_3 | VAR_9,



  .owner = VAR_10,
  .dev = ((void*)0)
 };

 VAR_17 = FUNC_4(sizeof(struct pps_client_pp), VAR_0);
 if (!VAR_17) {
  FUNC_11("memory allocation failed, not attaching\n");
  return;
 }

 VAR_16 = FUNC_1(&VAR_13, 0, 0, VAR_0);
 FUNC_5(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.private = VAR_17;
 VAR_15.irq_func = VAR_12;
 VAR_15.flags = VAR_2;
 VAR_17->pardev = FUNC_7(VAR_14,
          VAR_1,
          &VAR_15,
          VAR_16);
 if (!VAR_17->pardev) {
  FUNC_11("couldn't register with %s\n", VAR_14->name);
  goto err_free;
 }

 if (FUNC_6(VAR_17->pardev) < 0) {
  FUNC_11("couldn't claim %s\n", VAR_14->name);
  goto err_unregister_dev;
 }

 VAR_17->pps = FUNC_10(&VAR_18,
   VAR_4 | VAR_7 | VAR_8);
 if (FUNC_0(VAR_17->pps)) {
  FUNC_11("couldn't register PPS source\n");
  goto err_release_dev;
 }

 VAR_17->cw = VAR_11;

 VAR_14->ops->enable_irq(VAR_14);
 VAR_17->index = VAR_16;

 FUNC_12("attached to %s\n", VAR_14->name);

 return;

err_release_dev:
 FUNC_8(VAR_17->pardev);
err_unregister_dev:
 FUNC_9(VAR_17->pardev);
err_free:
 FUNC_2(&VAR_13, VAR_16);
 FUNC_3(VAR_17);
}

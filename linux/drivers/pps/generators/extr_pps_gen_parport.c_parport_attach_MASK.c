
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct parport {int name; } ;
struct pardev_cb {int flags; TYPE_1__* private; } ;
typedef int pps_cb ;
struct TYPE_7__ {int function; } ;
struct TYPE_6__ {int pardev; TYPE_2__ timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (struct pardev_cb*,int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct parport*,int ,struct pardev_cb*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,int ) ;

__attribute__((used)) static void FUNC_10(struct parport *VAR_7)
{
 struct pardev_cb VAR_8;

 if (VAR_4) {

  return;
 }

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.private = &VAR_5;
 VAR_8.flags = VAR_3;
 VAR_5.pardev = FUNC_6(VAR_7, VAR_2,
         &VAR_8, 0);
 if (!VAR_5.pardev) {
  FUNC_8("couldn't register with %s\n", VAR_7->name);
  return;
 }

 if (FUNC_5(VAR_5.pardev) < 0) {
  FUNC_8("couldn't claim %s\n", VAR_7->name);
  goto err_unregister_dev;
 }

 FUNC_9("attached to %s\n", VAR_7->name);
 VAR_4 = 1;

 FUNC_0(&VAR_5);

 FUNC_1(&VAR_5.timer, VAR_0, VAR_1);
 VAR_5.timer.function = VAR_6;
 FUNC_2(&VAR_5.timer, FUNC_4(&VAR_5), VAR_1);

 return;

err_unregister_dev:
 FUNC_7(VAR_5.pardev);
}

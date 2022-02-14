
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct typec_port {scalar_t__ pwr_opmode; size_t port_type; int port_type_lock; TYPE_1__* cap; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* pr_set ) (TYPE_1__*,int) ;int pd_revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,char const*) ;
 struct typec_port* FUNC_5 (struct device*) ;
 int * VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_6,
    struct device_attribute *VAR_7,
    const char *VAR_8, size_t VAR_9)
{
 struct typec_port *VAR_10 = FUNC_5(VAR_6);
 int VAR_11;

 if (!VAR_10->cap->pd_revision) {
  FUNC_0(VAR_6, "USB Power Delivery not supported\n");
  return -VAR_1;
 }

 if (!VAR_10->cap->pr_set) {
  FUNC_0(VAR_6, "power role swapping not supported\n");
  return -VAR_1;
 }

 if (VAR_10->pwr_opmode != VAR_3) {
  FUNC_0(VAR_6, "partner unable to swap power role\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_4(VAR_5, VAR_8);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_1(&VAR_10->port_type_lock);
 if (VAR_10->port_type != VAR_2) {
  FUNC_0(VAR_6, "port type fixed at \"%s\"",
        VAR_4[VAR_10->port_type]);
  VAR_11 = -VAR_1;
  goto unlock_and_ret;
 }

 VAR_11 = VAR_10->cap->pr_set(VAR_10->cap, VAR_11);
 if (VAR_11)
  goto unlock_and_ret;

 VAR_11 = VAR_9;
unlock_and_ret:
 FUNC_2(&VAR_10->port_type_lock);
 return VAR_11;
}

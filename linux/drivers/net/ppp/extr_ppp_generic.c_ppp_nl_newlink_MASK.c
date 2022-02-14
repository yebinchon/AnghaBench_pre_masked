
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppp_config {int unit; int ifname_is_set; struct file* file; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct file {scalar_t__ private_data; int * f_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct file* FUNC_0 (int ) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct net*,struct net_device*,struct ppp_config*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct net *VAR_6, struct net_device *VAR_7,
     struct nlattr *VAR_8[], struct nlattr *VAR_9[],
     struct netlink_ext_ack *VAR_10)
{
 struct ppp_config VAR_11 = {
  .unit = -1,
  .ifname_is_set = 1,
 };
 struct file *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_0(FUNC_4(VAR_9[VAR_3]));
 if (!VAR_12)
  return -VAR_0;






 if (!FUNC_2(&VAR_5)) {
  VAR_13 = -VAR_1;
  goto out;
 }

 if (VAR_12->f_op != &VAR_4 || VAR_12->private_data) {
  VAR_13 = -VAR_0;
  goto out_unlock;
 }

 VAR_11.file = VAR_12;






 if (!VAR_8[VAR_2])
  VAR_11.ifname_is_set = 0;

 VAR_13 = FUNC_5(VAR_6, VAR_7, &VAR_11);

out_unlock:
 FUNC_3(&VAR_5);
out:
 FUNC_1(VAR_12);

 return VAR_13;
}

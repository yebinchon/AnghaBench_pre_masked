
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ppp_config {int unit; int ifname_is_set; struct file* file; } ;
struct TYPE_2__ {int index; } ;
struct ppp {TYPE_1__ file; } ;
struct net_device {int * rtnl_link_ops; } ;
struct net {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (struct net_device*,struct net*) ;
 int FUNC_2 (struct net_device*) ;
 struct ppp* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net*,struct net_device*,struct ppp_config*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct net *VAR_4, struct file *VAR_5, int *VAR_6)
{
 struct ppp_config VAR_7 = {
  .file = VAR_5,
  .unit = *VAR_6,
  .ifname_is_set = 0,
 };
 struct net_device *VAR_8;
 struct ppp *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_0(sizeof(struct ppp), "", VAR_1, VAR_3);
 if (!VAR_8) {
  VAR_10 = -VAR_0;
  goto err;
 }
 FUNC_1(VAR_8, VAR_4);
 VAR_8->rtnl_link_ops = &VAR_2;

 FUNC_5();

 VAR_10 = FUNC_4(VAR_4, VAR_8, &VAR_7);
 if (VAR_10 < 0)
  goto err_dev;
 VAR_9 = FUNC_3(VAR_8);
 *VAR_6 = VAR_9->file.index;

 FUNC_6();

 return 0;

err_dev:
 FUNC_6();
 FUNC_2(VAR_8);
err:
 return VAR_10;
}

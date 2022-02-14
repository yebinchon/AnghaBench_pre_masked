
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int cmd; int * args; } ;
struct qede_dev {TYPE_3__ dump_info; int cdev; TYPE_2__* ops; } ;
struct net_device {int dummy; } ;
struct ethtool_dump {int flag; int len; int version; } ;
struct TYPE_5__ {TYPE_1__* common; } ;
struct TYPE_4__ {int (* dbg_all_data_size ) (int ) ;int (* read_nvm_cfg_len ) (int ,int ) ;} ;


 int FUNC_0 (struct qede_dev*,char*,...) ;
 int FUNC_1 (struct qede_dev*,int ,char*,int ,int,int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct qede_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3,
         struct ethtool_dump *VAR_4)
{
 struct qede_dev *VAR_5 = FUNC_2(VAR_3);

 if (!VAR_5->ops || !VAR_5->ops->common) {
  FUNC_0(VAR_5, "Edev ops not populated\n");
  return -VAR_0;
 }

 VAR_4->version = VAR_1;
 switch (VAR_5->dump_info.cmd) {
 case 128:
  VAR_4->flag = 128;
  VAR_4->len = VAR_5->ops->common->read_nvm_cfg_len(VAR_5->cdev,
      VAR_5->dump_info.args[0]);
  break;
 case 129:
  VAR_4->flag = 129;
  VAR_4->len = VAR_5->ops->common->dbg_all_data_size(VAR_5->cdev);
  break;
 default:
  FUNC_0(VAR_5, "Invalid cmd = %d\n", VAR_5->dump_info.cmd);
  return -VAR_0;
 }

 FUNC_1(VAR_5, VAR_2,
     "dump->version = 0x%x dump->flag = %d dump->len = %d\n",
     VAR_4->version, VAR_4->flag, VAR_4->len);
 return 0;
}

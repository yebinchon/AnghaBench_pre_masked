
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cmd; scalar_t__ num_args; int* args; } ;
struct qede_dev {int cdev; TYPE_3__* ops; TYPE_1__ dump_info; } ;
struct net_device {int dummy; } ;
struct ethtool_dump {int flag; } ;
struct TYPE_6__ {TYPE_2__* common; } ;
struct TYPE_5__ {int (* set_grc_config ) (int ,int,int) ;} ;


 int FUNC_0 (struct qede_dev*,char*,int) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;
 struct qede_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, struct ethtool_dump *VAR_5)
{
 struct qede_dev *VAR_6 = FUNC_1(VAR_4);
 int VAR_7 = 0;

 if (VAR_6->dump_info.cmd == VAR_2) {
  if (VAR_5->flag > VAR_1) {
   FUNC_0(VAR_6, "Invalid command %d\n", VAR_5->flag);
   return -VAR_0;
  }
  VAR_6->dump_info.cmd = VAR_5->flag;
  VAR_6->dump_info.num_args = 0;
  return 0;
 }

 if (VAR_6->dump_info.num_args == VAR_3) {
  FUNC_0(VAR_6, "Arg count = %d\n", VAR_6->dump_info.num_args);
  return -VAR_0;
 }

 switch (VAR_6->dump_info.cmd) {
 case 128:
  VAR_6->dump_info.args[VAR_6->dump_info.num_args] = VAR_5->flag;
  VAR_6->dump_info.num_args++;
  break;
 case 129:
  VAR_7 = VAR_6->ops->common->set_grc_config(VAR_6->cdev,
             VAR_5->flag, 1);
  break;
 default:
  break;
 }

 return VAR_7;
}

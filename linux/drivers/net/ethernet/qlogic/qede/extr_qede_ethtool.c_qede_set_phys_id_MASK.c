
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qede_dev {int cdev; TYPE_2__* ops; } ;
struct net_device {int dummy; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;
struct TYPE_4__ {TYPE_1__* common; } ;
struct TYPE_3__ {int (* set_led ) (int ,int ) ;} ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qede_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
       enum ethtool_phys_id_state VAR_4)
{
 struct qede_dev *VAR_5 = FUNC_0(VAR_3);
 u8 VAR_6 = 0;

 switch (VAR_4) {
 case 131:
  return 1;

 case 128:
  VAR_6 = VAR_1;
  break;

 case 129:
  VAR_6 = VAR_0;
  break;

 case 130:
  VAR_6 = VAR_2;
  break;
 }

 VAR_5->ops->common->set_led(VAR_5->cdev, VAR_6);

 return 0;
}

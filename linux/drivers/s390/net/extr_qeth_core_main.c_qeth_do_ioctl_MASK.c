
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qeth_card {TYPE_2__* discipline; } ;
struct net_device {struct qeth_card* ml_priv; } ;
struct mii_ioctl_data {int reg_num; int phy_id; int val_out; } ;
struct TYPE_3__ {int ifru_data; } ;
struct ifreq {TYPE_1__ ifr_ifru; } ;
struct TYPE_4__ {int (* do_ioctl ) (struct net_device*,struct ifreq*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (struct qeth_card*) ;
 int FUNC_4 (struct qeth_card*,int,char*,int) ;





 struct mii_ioctl_data* FUNC_5 (struct ifreq*) ;
 int FUNC_6 (struct net_device*,int ,int ) ;
 int FUNC_7 (struct qeth_card*,int ) ;
 int FUNC_8 (struct qeth_card*,int ) ;
 int FUNC_9 (struct net_device*,struct ifreq*,int) ;

int FUNC_10(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 struct qeth_card *VAR_6 = VAR_3->ml_priv;
 struct mii_ioctl_data *VAR_7;
 int VAR_8 = 0;

 if (!VAR_6)
  return -VAR_1;

 switch (VAR_5) {
 case 130:
  VAR_8 = FUNC_8(VAR_6, VAR_4->ifr_ifru.ifru_data);
  break;
 case 129:
  if ((FUNC_0(VAR_6) || FUNC_1(VAR_6) || FUNC_2(VAR_6)) &&
      !FUNC_3(VAR_6))
   return 1;
  return 0;
 case 132:
  VAR_7 = FUNC_5(VAR_4);
  VAR_7->phy_id = 0;
  break;
 case 131:
  VAR_7 = FUNC_5(VAR_4);
  if (VAR_7->phy_id != 0)
   VAR_8 = -VAR_0;
  else
   VAR_7->val_out = FUNC_6(VAR_3,
    VAR_7->phy_id, VAR_7->reg_num);
  break;
 case 128:
  VAR_8 = FUNC_7(VAR_6, VAR_4->ifr_ifru.ifru_data);
  break;
 default:
  if (VAR_6->discipline->do_ioctl)
   VAR_8 = VAR_6->discipline->do_ioctl(VAR_3, VAR_4, VAR_5);
  else
   VAR_8 = -VAR_2;
 }
 if (VAR_8)
  FUNC_4(VAR_6, 2, "ioce%x", VAR_8);
 return VAR_8;
}

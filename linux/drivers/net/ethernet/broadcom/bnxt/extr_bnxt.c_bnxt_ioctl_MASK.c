
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {int val_in; int reg_num; int phy_id; int val_out; } ;
struct ifreq {int dummy; } ;
struct TYPE_2__ {int phy_addr; } ;
struct bnxt {TYPE_1__ link_info; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct bnxt*,int ,int ,int *) ;
 int FUNC_1 (struct bnxt*,int ,int ,int ) ;
 struct mii_ioctl_data* FUNC_2 (struct ifreq*) ;
 struct bnxt* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 struct mii_ioctl_data *VAR_5 = FUNC_2(VAR_3);
 struct bnxt *VAR_6 = FUNC_3(VAR_2);
 int VAR_7;

 switch (VAR_4) {
 case 130:
  VAR_5->phy_id = VAR_6->link_info.phy_addr;


 case 129: {
  u16 VAR_8 = 0;

  if (!FUNC_4(VAR_2))
   return -VAR_0;

  VAR_7 = FUNC_0(VAR_6, VAR_5->phy_id, VAR_5->reg_num,
          &VAR_8);
  VAR_5->val_out = VAR_8;
  return VAR_7;
 }

 case 128:
  if (!FUNC_4(VAR_2))
   return -VAR_0;

  return FUNC_1(VAR_6, VAR_5->phy_id, VAR_5->reg_num,
      VAR_5->val_in);

 default:

  break;
 }
 return -VAR_1;
}

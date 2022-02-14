
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mii_ioctl_data {int phy_id; int reg_num; int val_in; int val_out; } ;
struct ifreq {int dummy; } ;
struct gem {int mii_phy_addr; } ;


 int VAR_0 ;



 int FUNC_0 (struct gem*,int,int) ;
 int FUNC_1 (struct gem*,int,int,int ) ;
 struct mii_ioctl_data* FUNC_2 (struct ifreq*) ;
 struct gem* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct gem *VAR_4 = FUNC_3(VAR_1);
 struct mii_ioctl_data *VAR_5 = FUNC_2(VAR_2);
 int VAR_6 = -VAR_0;






 switch (VAR_3) {
 case 130:
  VAR_5->phy_id = VAR_4->mii_phy_addr;


 case 129:
  VAR_5->val_out = FUNC_0(VAR_4, VAR_5->phy_id & 0x1f,
        VAR_5->reg_num & 0x1f);
  VAR_6 = 0;
  break;

 case 128:
  FUNC_1(VAR_4, VAR_5->phy_id & 0x1f, VAR_5->reg_num & 0x1f,
       VAR_5->val_in);
  VAR_6 = 0;
  break;
 }
 return VAR_6;
}

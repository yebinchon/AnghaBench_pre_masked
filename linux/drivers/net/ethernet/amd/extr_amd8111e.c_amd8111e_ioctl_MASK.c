
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {int reg_num; int val_in; int phy_id; int val_out; } ;
struct ifreq {int dummy; } ;
struct amd8111e_priv {int lock; int ext_phy_addr; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct amd8111e_priv*,int ,int,int *) ;
 int FUNC_1 (struct amd8111e_priv*,int ,int,int ) ;
 struct mii_ioctl_data* FUNC_2 (struct ifreq*) ;
 struct amd8111e_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2 , struct ifreq *VAR_3, int VAR_4)
{
 struct mii_ioctl_data *VAR_5 = FUNC_2(VAR_3);
 struct amd8111e_priv *VAR_6 = FUNC_3(VAR_2);
 int VAR_7;
 u32 VAR_8;

 switch(VAR_4) {
 case 130:
  VAR_5->phy_id = VAR_6->ext_phy_addr;


 case 129:

  FUNC_4(&VAR_6->lock);
  VAR_7 = FUNC_0(VAR_6, VAR_5->phy_id,
   VAR_5->reg_num & VAR_1, &VAR_8);
  FUNC_5(&VAR_6->lock);

  VAR_5->val_out = VAR_8;
  return VAR_7;

 case 128:

  FUNC_4(&VAR_6->lock);
  VAR_7 = FUNC_1(VAR_6, VAR_5->phy_id,
   VAR_5->reg_num & VAR_1, VAR_5->val_in);
  FUNC_5(&VAR_6->lock);

  return VAR_7;

 default:

  break;
 }
 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tlan_priv {int* phy; size_t phy_num; int phy_online; } ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {int phy_id; int reg_num; int val_in; int val_out; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 struct mii_ioctl_data* FUNC_0 (struct ifreq*) ;
 struct tlan_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int,int,int *) ;
 int FUNC_3 (struct net_device*,int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 struct tlan_priv *VAR_5 = FUNC_1(VAR_2);
 struct mii_ioctl_data *VAR_6 = FUNC_0(VAR_3);
 u32 VAR_7 = VAR_5->phy[VAR_5->phy_num];

 if (!VAR_5->phy_online)
  return -VAR_0;

 switch (VAR_4) {
 case 130:
  VAR_6->phy_id = VAR_7;



 case 129:
  FUNC_2(VAR_2, VAR_6->phy_id & 0x1f,
      VAR_6->reg_num & 0x1f, &VAR_6->val_out);
  return 0;


 case 128:
  FUNC_3(VAR_2, VAR_6->phy_id & 0x1f,
       VAR_6->reg_num & 0x1f, VAR_6->val_in);
  return 0;
 default:
  return -VAR_1;
 }
}

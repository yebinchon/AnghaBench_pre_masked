
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct skge_port {int port; struct skge_hw* hw; } ;
struct skge_hw {int phy_lock; int phy_addr; } ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {int reg_num; int val_in; int val_out; int phy_id; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct skge_hw*,int ,int,int *) ;
 int FUNC_1 (struct skge_hw*,int ,int,int *) ;
 int FUNC_2 (struct skge_hw*,int ,int,int ) ;
 struct mii_ioctl_data* FUNC_3 (struct ifreq*) ;
 int FUNC_4 (struct skge_hw*) ;
 struct skge_port* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct skge_hw*,int ,int,int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 struct mii_ioctl_data *VAR_5 = FUNC_3(VAR_3);
 struct skge_port *VAR_6 = FUNC_5(VAR_2);
 struct skge_hw *VAR_7 = VAR_6->hw;
 int VAR_8 = -VAR_1;

 if (!FUNC_6(VAR_2))
  return -VAR_0;

 switch (VAR_4) {
 case 130:
  VAR_5->phy_id = VAR_7->phy_addr;


 case 129: {
  u16 VAR_9 = 0;
  FUNC_7(&VAR_7->phy_lock);

  if (FUNC_4(VAR_7))
   VAR_8 = FUNC_1(VAR_7, VAR_6->port, VAR_5->reg_num & 0x1f, &VAR_9);
  else
   VAR_8 = FUNC_0(VAR_7, VAR_6->port, VAR_5->reg_num & 0x1f, &VAR_9);
  FUNC_8(&VAR_7->phy_lock);
  VAR_5->val_out = VAR_9;
  break;
 }

 case 128:
  FUNC_7(&VAR_7->phy_lock);
  if (FUNC_4(VAR_7))
   VAR_8 = FUNC_9(VAR_7, VAR_6->port, VAR_5->reg_num & 0x1f,
       VAR_5->val_in);
  else
   VAR_8 = FUNC_2(VAR_7, VAR_6->port, VAR_5->reg_num & 0x1f,
       VAR_5->val_in);
  FUNC_8(&VAR_7->phy_lock);
  break;
 }
 return VAR_8;
}

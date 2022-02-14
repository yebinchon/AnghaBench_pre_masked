
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mii_ioctl_data {int reg_num; int val_in; int phy_id; int val_out; } ;
struct ksz_port {TYPE_1__* linked; } ;
struct ksz_hw {int dummy; } ;
struct ifreq {int dummy; } ;
struct dev_priv {int proc_sem; int id; struct ksz_port port; struct dev_info* adapter; } ;
struct dev_info {struct ksz_hw hw; } ;
struct TYPE_2__ {int port_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct ksz_hw*,int ,int,int *) ;
 int FUNC_3 (struct ksz_hw*,int ,int,int ) ;
 struct mii_ioctl_data* FUNC_4 (struct ifreq*) ;
 struct dev_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_5, struct ifreq *VAR_6, int VAR_7)
{
 struct dev_priv *VAR_8 = FUNC_5(VAR_5);
 struct dev_info *VAR_9 = VAR_8->adapter;
 struct ksz_hw *VAR_10 = &VAR_9->hw;
 struct ksz_port *VAR_11 = &VAR_8->port;
 int VAR_12 = 0;
 struct mii_ioctl_data *VAR_13 = FUNC_4(VAR_6);

 if (FUNC_1(&VAR_8->proc_sem))
  return -VAR_4;

 switch (VAR_7) {

 case 130:
  VAR_13->phy_id = VAR_8->id;




 case 129:
  if (VAR_13->phy_id != VAR_8->id || VAR_13->reg_num >= 6)
   VAR_12 = -VAR_1;
  else
   FUNC_2(VAR_10, VAR_11->linked->port_id, VAR_13->reg_num,
    &VAR_13->val_out);
  break;


 case 128:
  if (!FUNC_0(VAR_0))
   VAR_12 = -VAR_3;
  else if (VAR_13->phy_id != VAR_8->id || VAR_13->reg_num >= 6)
   VAR_12 = -VAR_1;
  else
   FUNC_3(VAR_10, VAR_11->linked->port_id, VAR_13->reg_num,
    VAR_13->val_in);
  break;

 default:
  VAR_12 = -VAR_2;
 }

 FUNC_6(&VAR_8->proc_sem);

 return VAR_12;
}

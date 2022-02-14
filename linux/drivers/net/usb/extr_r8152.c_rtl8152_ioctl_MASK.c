
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8152 {int intf; int control; int flags; } ;
struct net_device {int dummy; } ;
struct mii_ioctl_data {int val_in; int reg_num; int val_out; int phy_id; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int ) ;
 struct mii_ioctl_data* FUNC_1 (struct ifreq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct r8152* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct r8152*,int ) ;
 int FUNC_6 (struct r8152*,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_6, struct ifreq *VAR_7, int VAR_8)
{
 struct r8152 *VAR_9 = FUNC_4(VAR_6);
 struct mii_ioctl_data *VAR_10 = FUNC_1(VAR_7);
 int VAR_11;

 if (FUNC_7(VAR_5, &VAR_9->flags))
  return -VAR_1;

 VAR_11 = FUNC_8(VAR_9->intf);
 if (VAR_11 < 0)
  goto out;

 switch (VAR_8) {
 case 130:
  VAR_10->phy_id = VAR_4;
  break;

 case 129:
  FUNC_2(&VAR_9->control);
  VAR_10->val_out = FUNC_5(VAR_9, VAR_10->reg_num);
  FUNC_3(&VAR_9->control);
  break;

 case 128:
  if (!FUNC_0(VAR_0)) {
   VAR_11 = -VAR_3;
   break;
  }
  FUNC_2(&VAR_9->control);
  FUNC_6(VAR_9, VAR_10->reg_num, VAR_10->val_in);
  FUNC_3(&VAR_9->control);
  break;

 default:
  VAR_11 = -VAR_2;
 }

 FUNC_9(VAR_9->intf);

out:
 return VAR_11;
}

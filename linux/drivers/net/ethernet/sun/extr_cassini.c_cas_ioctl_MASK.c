
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mii_ioctl_data {int reg_num; int val_in; int val_out; int phy_id; } ;
struct ifreq {int dummy; } ;
struct cas {int pm_mutex; int lock; int phy_addr; } ;


 int VAR_0 ;



 int FUNC_0 (struct cas*,int) ;
 int FUNC_1 (struct cas*,int) ;
 int FUNC_2 (struct cas*,int,int ) ;
 struct mii_ioctl_data* FUNC_3 (struct ifreq*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct cas* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct cas *VAR_4 = FUNC_6(VAR_1);
 struct mii_ioctl_data *VAR_5 = FUNC_3(VAR_2);
 unsigned long VAR_6;
 int VAR_7 = -VAR_0;




 FUNC_4(&VAR_4->pm_mutex);
 switch (VAR_3) {
 case 130:
  VAR_5->phy_id = VAR_4->phy_addr;


 case 129:
  FUNC_7(&VAR_4->lock, VAR_6);
  FUNC_0(VAR_4, 0);
  VAR_5->val_out = FUNC_1(VAR_4, VAR_5->reg_num & 0x1f);
  FUNC_0(VAR_4, 1);
  FUNC_8(&VAR_4->lock, VAR_6);
  VAR_7 = 0;
  break;

 case 128:
  FUNC_7(&VAR_4->lock, VAR_6);
  FUNC_0(VAR_4, 0);
  VAR_7 = FUNC_2(VAR_4, VAR_5->reg_num & 0x1f, VAR_5->val_in);
  FUNC_0(VAR_4, 1);
  FUNC_8(&VAR_4->lock, VAR_6);
  break;
 default:
  break;
 }

 FUNC_5(&VAR_4->pm_mutex);
 return VAR_7;
}

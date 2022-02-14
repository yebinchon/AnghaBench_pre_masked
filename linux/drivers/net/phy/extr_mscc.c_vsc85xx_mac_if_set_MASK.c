
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {int lock; } ;
typedef int phy_interface_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct phy_device*,int ) ;
 int FUNC_4 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct phy_device *VAR_7,
         phy_interface_t VAR_8)
{
 int VAR_9;
 u16 VAR_10;

 FUNC_1(&VAR_7->lock);
 VAR_10 = FUNC_3(VAR_7, VAR_6);
 VAR_10 &= ~(VAR_2);
 switch (VAR_8) {
 case 129:
  VAR_10 |= (VAR_4 << VAR_3);
  break;
 case 128:
  VAR_10 |= (VAR_5 << VAR_3);
  break;
 case 130:
 case 131:
  VAR_10 |= (VAR_1 << VAR_3);
  break;
 default:
  VAR_9 = -VAR_0;
  goto out_unlock;
 }
 VAR_9 = FUNC_4(VAR_7, VAR_6, VAR_10);
 if (VAR_9)
  goto out_unlock;

 VAR_9 = FUNC_0(VAR_7);

out_unlock:
 FUNC_2(&VAR_7->lock);

 return VAR_9;
}

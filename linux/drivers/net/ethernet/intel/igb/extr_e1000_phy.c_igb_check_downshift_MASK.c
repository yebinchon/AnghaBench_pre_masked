
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int (* read_reg ) (struct e1000_hw*,int,int*) ;} ;
struct e1000_phy_info {int type; int speed_downgraded; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (struct e1000_hw*,int,int*) ;

s32 FUNC_1(struct e1000_hw *VAR_4)
{
 struct e1000_phy_info *VAR_5 = &VAR_4->phy;
 s32 VAR_6;
 u16 VAR_7, VAR_8, VAR_9;

 switch (VAR_5->type) {
 case 132:
 case 128:
 case 133:
  VAR_8 = VAR_2;
  VAR_9 = VAR_3;
  break;
 case 130:
 case 131:
 case 129:
  VAR_8 = VAR_0;
  VAR_9 = VAR_1;
  break;
 default:

  VAR_5->speed_downgraded = 0;
  VAR_6 = 0;
  goto out;
 }

 VAR_6 = VAR_5->ops.read_reg(VAR_4, VAR_8, &VAR_7);

 if (!VAR_6)
  VAR_5->speed_downgraded = (VAR_7 & VAR_9) ? 1 : 0;

out:
 return VAR_6;
}

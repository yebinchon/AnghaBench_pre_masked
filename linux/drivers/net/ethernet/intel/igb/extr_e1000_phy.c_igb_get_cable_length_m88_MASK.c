
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct e1000_phy_info {int min_cable_length; int max_cable_length; int cable_length; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef int s32 ;


 int FUNC_0 (void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void** VAR_4 ;
 int FUNC_1 (struct e1000_hw*,int ,int*) ;

s32 FUNC_2(struct e1000_hw *VAR_5)
{
 struct e1000_phy_info *VAR_6 = &VAR_5->phy;
 s32 VAR_7;
 u16 VAR_8, VAR_9;

 VAR_7 = VAR_6->ops.read_reg(VAR_5, VAR_1, &VAR_8);
 if (VAR_7)
  goto out;

 VAR_9 = (VAR_8 & VAR_2) >>
  VAR_3;
 if (VAR_9 >= FUNC_0(VAR_4) - 1) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_6->min_cable_length = VAR_4[VAR_9];
 VAR_6->max_cable_length = VAR_4[VAR_9 + 1];

 VAR_6->cable_length = (VAR_6->min_cable_length + VAR_6->max_cable_length) / 2;

out:
 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int (* check_reset_block ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int ) ;
 int FUNC_2 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_3, bool VAR_4)
{
 s32 VAR_5;
 u16 VAR_6;

 VAR_5 = FUNC_0(VAR_3, VAR_0, &VAR_6);
 if (VAR_5)
  return VAR_5;

 if (VAR_4)
  VAR_6 |= VAR_1;
 else
  VAR_6 &= ~VAR_1;

 if (!VAR_3->phy.ops.check_reset_block(VAR_3))
  VAR_6 |= VAR_2;

 return FUNC_1(VAR_3, VAR_0, VAR_6);
}

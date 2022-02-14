
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int rsts; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;
struct e1000_hw {TYPE_2__ mbx; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_2, u16 VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_1);
 s32 VAR_5 = -VAR_0;

 if (VAR_4 & FUNC_0(VAR_3)) {
  VAR_5 = 0;
  FUNC_2(VAR_1, FUNC_0(VAR_3));
  VAR_2->mbx.stats.rsts++;
 }

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ov5645 {int timing_tc_reg20; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ov5645*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ov5645 *VAR_3, s32 VAR_4)
{
 u8 VAR_5 = VAR_3->timing_tc_reg20;
 int VAR_6;

 if (VAR_4 == 0)
  VAR_5 |= (VAR_1 | VAR_0);
 else
  VAR_5 &= ~(VAR_1 | VAR_0);

 VAR_6 = FUNC_0(VAR_3, VAR_2, VAR_5);
 if (!VAR_6)
  VAR_3->timing_tc_reg20 = VAR_5;

 return VAR_6;
}

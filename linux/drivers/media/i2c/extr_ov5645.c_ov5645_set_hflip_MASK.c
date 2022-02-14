
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ov5645 {int timing_tc_reg21; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ov5645*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ov5645 *VAR_2, s32 VAR_3)
{
 u8 VAR_4 = VAR_2->timing_tc_reg21;
 int VAR_5;

 if (VAR_3 == 0)
  VAR_4 &= ~(VAR_0);
 else
  VAR_4 |= (VAR_0);

 VAR_5 = FUNC_0(VAR_2, VAR_1, VAR_4);
 if (!VAR_5)
  VAR_2->timing_tc_reg21 = VAR_4;

 return VAR_5;
}

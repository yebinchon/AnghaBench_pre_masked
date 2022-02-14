
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlnx_rtc_dev {scalar_t__ reg_base; int calibval; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct xlnx_rtc_dev *VAR_4)
{
 u32 VAR_5;


 VAR_5 = FUNC_0(VAR_4->reg_base + VAR_3);
 VAR_5 |= VAR_0;
 FUNC_1(VAR_5, VAR_4->reg_base + VAR_3);







 VAR_4->calibval &= VAR_1;
 FUNC_1(VAR_4->calibval, (VAR_4->reg_base + VAR_2));
}

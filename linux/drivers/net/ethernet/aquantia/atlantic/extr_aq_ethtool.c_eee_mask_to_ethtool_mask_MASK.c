
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum hw_atl_fw2x_rate { ____Placeholder_hw_atl_fw2x_rate } hw_atl_fw2x_rate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static enum hw_atl_fw2x_rate FUNC_0(u32 VAR_6)
{
 u32 VAR_7 = 0;

 if (VAR_6 & VAR_0)
  VAR_7 |= VAR_3;

 if (VAR_6 & VAR_2)
  VAR_7 |= VAR_5;

 if (VAR_6 & VAR_1)
  VAR_7 |= VAR_4;

 return VAR_7;
}

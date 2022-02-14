
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static enum hw_atl_fw2x_rate FUNC_0(u32 VAR_11)
{
 enum hw_atl_fw2x_rate VAR_12 = 0;

 if (VAR_11 & VAR_1)
  VAR_12 |= VAR_7;

 if (VAR_11 & VAR_4)
  VAR_12 |= VAR_10;

 if (VAR_11 & VAR_5)
  VAR_12 |= VAR_10;

 if (VAR_11 & VAR_3)
  VAR_12 |= VAR_9;

 if (VAR_11 & VAR_2)
  VAR_12 |= VAR_8;

 if (VAR_11 & VAR_0)
  VAR_12 |= VAR_6;

 return VAR_12;
}

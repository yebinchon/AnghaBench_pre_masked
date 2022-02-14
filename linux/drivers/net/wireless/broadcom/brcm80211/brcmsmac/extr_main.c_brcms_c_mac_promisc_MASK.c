
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u32 ;
struct brcms_c_info {int filter_flags; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int,int) ;

void FUNC_1(struct brcms_c_info *VAR_9, uint VAR_10)
{
 u32 VAR_11 = 0;

 VAR_9->filter_flags = VAR_10;

 if (VAR_10 & VAR_3)
  VAR_11 |= VAR_8;

 if (VAR_10 & VAR_0)
  VAR_11 |= VAR_5;

 if (VAR_10 & VAR_2)
  VAR_11 |= VAR_6;

 if (VAR_10 & (VAR_1 | VAR_4))
  VAR_11 |= VAR_7;

 FUNC_0(VAR_9->hw,
  VAR_8 | VAR_5 |
  VAR_7 | VAR_6,
  VAR_11);
}

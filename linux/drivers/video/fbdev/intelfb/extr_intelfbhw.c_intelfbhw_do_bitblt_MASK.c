
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intelfb_info {int fb_start; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int,int,int,int,int,int,int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void
FUNC_4(struct intelfb_info *VAR_11, u32 VAR_12, u32 VAR_13,
      u32 VAR_14, u32 VAR_15, u32 VAR_16, u32 VAR_17, u32 VAR_18, u32 VAR_19)
{
 u32 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;






 VAR_20 = VAR_10;
 VAR_21 = VAR_11->fb_start;
 VAR_22 = (VAR_18 << VAR_4);
 VAR_23 = VAR_11->fb_start;
 VAR_24 = (VAR_6 << VAR_5) | (VAR_18 << VAR_4);
 VAR_25 = (VAR_14 << VAR_7) | (VAR_15 << VAR_3);
 VAR_26 = ((VAR_14 + VAR_16) << VAR_7) |
        ((VAR_15 + VAR_17) << VAR_3);
 VAR_27 = (VAR_12 << VAR_7) | (VAR_13 << VAR_3);

 switch (VAR_19) {
 case 8:
  VAR_24 |= VAR_2;
  break;
 case 16:
  VAR_24 |= VAR_0;
  break;
 case 32:
  VAR_24 |= VAR_1;
  VAR_20 |= VAR_8 | VAR_9;
  break;
 }

 FUNC_3(8);
 FUNC_2(VAR_20);
 FUNC_2(VAR_24);
 FUNC_2(VAR_25);
 FUNC_2(VAR_26);
 FUNC_2(VAR_21);
 FUNC_2(VAR_27);
 FUNC_2(VAR_22);
 FUNC_2(VAR_23);
 FUNC_0();
}

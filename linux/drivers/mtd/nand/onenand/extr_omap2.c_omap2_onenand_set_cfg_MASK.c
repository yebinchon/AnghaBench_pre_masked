
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap2_onenand {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 int VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 int FUNC_0 (struct omap2_onenand*,unsigned short,int ) ;

__attribute__((used)) static int FUNC_1(struct omap2_onenand *VAR_13,
     bool VAR_14, bool VAR_15,
     int VAR_16, int VAR_17)
{
 unsigned short VAR_18 = VAR_9 | VAR_8;

 VAR_18 |= VAR_16 << VAR_6;

 switch (VAR_17) {
 case 0:
  break;
 case 4:
  VAR_18 |= VAR_4;
  break;
 case 8:
  VAR_18 |= VAR_5;
  break;
 case 16:
  VAR_18 |= VAR_2;
  break;
 case 32:
  VAR_18 |= VAR_3;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_16 > 5)
  VAR_18 |= VAR_7;
 if (VAR_16 > 7)
  VAR_18 |= VAR_12;
 if (VAR_14)
  VAR_18 |= VAR_10;
 if (VAR_15)
  VAR_18 |= VAR_11;

 FUNC_0(VAR_13, VAR_18, VAR_1);

 return 0;
}

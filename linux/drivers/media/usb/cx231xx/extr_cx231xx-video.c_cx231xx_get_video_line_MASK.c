
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cx231xx_dmaqueue {int last_sav; } ;
struct cx231xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct cx231xx*,struct cx231xx_dmaqueue*,int*,int,int) ;

u32 FUNC_1(struct cx231xx *VAR_4,
      struct cx231xx_dmaqueue *VAR_5, u8 VAR_6,
      u8 *VAR_7, u32 VAR_8)
{
 u32 VAR_9 = 0;
 int VAR_10 = -1;

 switch (VAR_6) {
 case 129:



  if ((VAR_8 > 3) && (VAR_7[0] == 0xFF) &&
      (VAR_7[1] == 0x00) && (VAR_7[2] == 0x00) &&
      ((VAR_7[3] == VAR_0) ||
       (VAR_7[3] == VAR_1) ||
       (VAR_7[3] == VAR_2) ||
       (VAR_7[3] == VAR_3)))
   return VAR_9;
  VAR_10 = 1;
  break;

 case 128:



  if ((VAR_8 > 3) && (VAR_7[0] == 0xFF) &&
      (VAR_7[1] == 0x00) && (VAR_7[2] == 0x00) &&
      ((VAR_7[3] == VAR_0) ||
       (VAR_7[3] == VAR_1) ||
       (VAR_7[3] == VAR_2) ||
       (VAR_7[3] == VAR_3)))
   return VAR_9;
  VAR_10 = 2;
  break;
 }

 VAR_5->last_sav = VAR_6;

 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_7,
            VAR_8, VAR_10);

 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cx231xx_dmaqueue {int last_sav; } ;
struct cx231xx {int dummy; } ;




 int FUNC_0 (struct cx231xx*,struct cx231xx_dmaqueue*,int*,int ,int) ;

u32 FUNC_1(struct cx231xx *VAR_0, struct cx231xx_dmaqueue *VAR_1,
    u8 VAR_2, u8 *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = 0;
 int VAR_6 = -1;

 switch (VAR_2) {

 case 129:
  VAR_6 = 1;
  break;

 case 128:
  VAR_6 = 2;
  break;
 default:
  break;
 }

 if (VAR_6 < 0)
  return VAR_5;

 VAR_1->last_sav = VAR_2;

 VAR_5 =
     FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4,
      VAR_6);

 return VAR_5;
}

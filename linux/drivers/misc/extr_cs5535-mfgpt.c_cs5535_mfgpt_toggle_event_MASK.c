
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cs5535_mfgpt_timer {int nr; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;

int FUNC_3(struct cs5535_mfgpt_timer *VAR_4, int VAR_5,
  int VAR_6, int VAR_7)
{
 uint32_t VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12 = (VAR_5 == VAR_1) ? 0 : 8;

 if (!VAR_4) {
  FUNC_0(1);
  return -VAR_0;
 }





 switch (VAR_6) {
 case 128:





  VAR_8 = VAR_3;
  VAR_9 = 1 << (VAR_4->nr + 24);
  break;

 case 129:
  VAR_8 = VAR_3;
  VAR_9 = 1 << (VAR_4->nr + VAR_12);
  break;

 case 130:
  VAR_8 = VAR_2;
  VAR_9 = 1 << (VAR_4->nr + VAR_12);
  break;

 default:
  return -VAR_0;
 }

 FUNC_1(VAR_8, VAR_10, VAR_11);

 if (VAR_7)
  VAR_10 |= VAR_9;
 else
  VAR_10 &= ~VAR_9;

 FUNC_2(VAR_8, VAR_10, VAR_11);
 return 0;
}

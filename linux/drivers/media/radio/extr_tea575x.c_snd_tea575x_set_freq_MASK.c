
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_tea575x {int freq; int band; int val; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_tea575x*,int) ;
 int FUNC_1 (struct snd_tea575x*,int) ;

void FUNC_2(struct snd_tea575x *VAR_6)
{
 u32 VAR_7 = VAR_6->freq / 16;
 u32 VAR_8 = 0;

 switch (VAR_6->band) {
 case 129:
  VAR_8 = VAR_1;

  VAR_7 += VAR_5;

  VAR_7 *= 10;
  VAR_7 /= 125;
  break;
 case 128:
  VAR_8 = VAR_1;

  VAR_7 -= VAR_5;

  VAR_7 *= 10;
  VAR_7 /= 125;
  break;
 case 130:
  VAR_8 = VAR_3;

  VAR_7 += VAR_0;
  break;
 }

 VAR_6->val &= ~(VAR_4 | VAR_2);
 VAR_6->val |= VAR_8;
 VAR_6->val |= VAR_7 & VAR_4;
 FUNC_1(VAR_6, VAR_6->val);
 VAR_6->freq = FUNC_0(VAR_6, VAR_6->val);
}

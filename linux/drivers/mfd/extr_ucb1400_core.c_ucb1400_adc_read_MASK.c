
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_ac97 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct snd_ac97*,int ) ;
 int FUNC_2 (struct snd_ac97*,int ,int) ;

unsigned int FUNC_3(struct snd_ac97 *VAR_7, u16 VAR_8,
  int VAR_9)
{
 unsigned int VAR_10;

 if (VAR_9)
  VAR_8 |= VAR_6;

 FUNC_2(VAR_7, VAR_0, VAR_4 | VAR_8);
 FUNC_2(VAR_7, VAR_0, VAR_4 | VAR_8 |
   VAR_5);

 while (!((VAR_10 = FUNC_1(VAR_7, VAR_1))
    & VAR_3))
  FUNC_0(1);

 return VAR_10 & VAR_2;
}

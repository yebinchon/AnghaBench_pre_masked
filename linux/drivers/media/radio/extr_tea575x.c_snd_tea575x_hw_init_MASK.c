
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_tea575x {int mute; int val; int freq; int cannot_read_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_tea575x*) ;
 int FUNC_1 (struct snd_tea575x*) ;
 int FUNC_2 (struct snd_tea575x*,int) ;

int FUNC_3(struct snd_tea575x *VAR_3)
{
 VAR_3->mute = 1;



 if (!VAR_3->cannot_read_data) {
  FUNC_2(VAR_3, 0x55AA);
  if (FUNC_0(VAR_3) != 0x55AA)
   return -VAR_0;
 }

 VAR_3->val = VAR_1 | VAR_2;
 VAR_3->freq = 90500 * 16;
 FUNC_1(VAR_3);

 return 0;
}

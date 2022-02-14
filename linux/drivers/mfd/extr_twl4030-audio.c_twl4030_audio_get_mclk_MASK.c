
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_audio {unsigned int audio_mclk; } ;


 struct twl4030_audio* FUNC_0 (int ) ;
 int VAR_0 ;

unsigned int FUNC_1(void)
{
 struct twl4030_audio *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->audio_mclk;
}

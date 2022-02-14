
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int cmask; int rmask; } ;
struct snd_mask {int dummy; } ;
struct snd_interval {int openmin; int openmax; unsigned int min; unsigned int max; scalar_t__ integer; scalar_t__ empty; } ;
typedef int snd_pcm_hw_param_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 struct snd_interval* FUNC_2 (struct snd_pcm_hw_params*,int) ;
 struct snd_mask* FUNC_3 (struct snd_pcm_hw_params*,int) ;
 int FUNC_4 (struct snd_interval*) ;
 int FUNC_5 (struct snd_interval*,struct snd_interval*) ;
 int FUNC_6 (struct snd_interval*,unsigned int) ;
 int FUNC_7 (struct snd_mask*) ;
 int FUNC_8 (struct snd_mask*,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_hw_params *VAR_1,
     snd_pcm_hw_param_t VAR_2, unsigned int VAR_3,
     int VAR_4)
{
 int VAR_5;
 if (FUNC_1(VAR_2)) {
  struct snd_mask *VAR_6 = FUNC_3(VAR_1, VAR_2);
  if (VAR_3 == 0 && VAR_4 < 0) {
   VAR_5 = -VAR_0;
   FUNC_7(VAR_6);
  } else {
   if (VAR_4 > 0)
    VAR_3++;
   else if (VAR_4 < 0)
    VAR_3--;
   VAR_5 = FUNC_8(
     FUNC_3(VAR_1, VAR_2), VAR_3);
  }
 } else if (FUNC_0(VAR_2)) {
  struct snd_interval *VAR_7 = FUNC_2(VAR_1, VAR_2);
  if (VAR_3 == 0 && VAR_4 < 0) {
   VAR_5 = -VAR_0;
   FUNC_4(VAR_7);
  } else if (VAR_4 == 0)
   VAR_5 = FUNC_6(VAR_7, VAR_3);
  else {
   struct snd_interval VAR_8;
   VAR_8.openmin = 1;
   VAR_8.openmax = 1;
   VAR_8.empty = 0;
   VAR_8.integer = 0;
   if (VAR_4 < 0) {
    VAR_8.min = VAR_3 - 1;
    VAR_8.max = VAR_3;
   } else {
    VAR_8.min = VAR_3;
    VAR_8.max = VAR_3+1;
   }
   VAR_5 = FUNC_5(VAR_7, &VAR_8);
  }
 } else
  return -VAR_0;
 if (VAR_5) {
  VAR_1->cmask |= 1 << VAR_2;
  VAR_1->rmask |= 1 << VAR_2;
 }
 return VAR_5;
}

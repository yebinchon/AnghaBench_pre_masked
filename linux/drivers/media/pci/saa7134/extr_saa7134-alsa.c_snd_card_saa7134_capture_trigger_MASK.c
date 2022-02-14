
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {TYPE_1__* private_data; } ;
struct saa7134_dev {int slock; } ;
struct TYPE_2__ {struct saa7134_dev* dev; } ;
typedef TYPE_1__ snd_card_saa7134_pcm_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct saa7134_dev*) ;
 int FUNC_1 (struct saa7134_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream * VAR_3,
       int VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
 snd_card_saa7134_pcm_t *VAR_6 = VAR_5->private_data;
 struct saa7134_dev *VAR_7=VAR_6->dev;
 int VAR_8 = 0;

 FUNC_2(&VAR_7->slock);
 if (VAR_4 == VAR_1) {

  FUNC_0(VAR_7);
 } else if (VAR_4 == VAR_2) {

  FUNC_1(VAR_7);
 } else {
  VAR_8 = -VAR_0;
 }
 FUNC_3(&VAR_7->slock);

 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int name; struct cx23885_audio_dev* private_data; } ;
struct cx23885_audio_dev {int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int ,int,struct snd_pcm**) ;
 int FUNC_1 (struct snd_pcm*,int ,int *) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct cx23885_audio_dev *VAR_2, int VAR_3,
 char *VAR_4)
{
 int VAR_5;
 struct snd_pcm *VAR_6;

 VAR_5 = FUNC_0(VAR_2->card, VAR_4, VAR_3, 0, 1, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_6->private_data = VAR_2;
 FUNC_2(VAR_6->name, VAR_4, sizeof(VAR_6->name));
 FUNC_1(VAR_6, VAR_0, &VAR_1);

 return 0;
}

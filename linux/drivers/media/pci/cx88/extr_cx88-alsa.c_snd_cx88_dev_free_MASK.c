
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {struct cx88_audio_dev* private_data; } ;
struct cx88_audio_dev {int dummy; } ;


 int FUNC_0 (struct cx88_audio_dev*) ;

__attribute__((used)) static void FUNC_1(struct snd_card *VAR_0)
{
 struct cx88_audio_dev *VAR_1 = VAR_0->private_data;

 FUNC_0(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtv {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_substream*,int ) ;
 struct usbtv* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0,
  struct snd_pcm_hw_params *VAR_1)
{
 int VAR_2;
 struct usbtv *VAR_3 = FUNC_3(VAR_0);

 VAR_2 = FUNC_2(VAR_0,
  FUNC_1(VAR_1));

 if (VAR_2 < 0) {
  FUNC_0(VAR_3->dev, "pcm audio buffer allocation failure %i\n",
   VAR_2);
  return VAR_2;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_snd_pcm {struct solo_dev* solo_dev; } ;
struct solo_dev {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct solo_snd_pcm* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct solo_dev*,int ) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_2(struct snd_pcm_substream *VAR_2)
{
 struct solo_snd_pcm *VAR_3 = FUNC_0(VAR_2);
 struct solo_dev *VAR_4 = VAR_3->solo_dev;
 snd_pcm_uframes_t VAR_5 = FUNC_1(VAR_4, VAR_1) & 0x1f;

 return VAR_5 * VAR_0;
}

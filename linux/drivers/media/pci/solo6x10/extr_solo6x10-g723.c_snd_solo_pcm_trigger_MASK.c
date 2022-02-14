
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_snd_pcm {int on; int lock; struct solo_dev* solo_dev; } ;
struct solo_dev {int snd_users; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct solo_snd_pcm* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct solo_dev*,int ) ;
 int FUNC_4 (struct solo_dev*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_2, int VAR_3)
{
 struct solo_snd_pcm *VAR_4 = FUNC_2(VAR_2);
 struct solo_dev *VAR_5 = VAR_4->solo_dev;
 int VAR_6 = 0;

 FUNC_5(&VAR_4->lock);

 switch (VAR_3) {
 case 129:
  if (VAR_4->on == 0) {

   if (FUNC_1(&VAR_5->snd_users) == 1)
    FUNC_4(VAR_5, VAR_1);
   VAR_4->on = 1;
  }
  break;
 case 128:
  if (VAR_4->on) {

   if (FUNC_0(&VAR_5->snd_users) == 0)
    FUNC_3(VAR_5, VAR_1);
   VAR_4->on = 0;
  }
  break;
 default:
  VAR_6 = -VAR_0;
 }

 FUNC_6(&VAR_4->lock);

 return VAR_6;
}

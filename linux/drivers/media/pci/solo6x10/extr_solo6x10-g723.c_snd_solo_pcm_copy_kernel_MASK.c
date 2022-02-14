
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_snd_pcm {int g723_buf; int g723_dma; struct solo_dev* solo_dev; } ;
struct solo_dev {int dummy; } ;
struct snd_pcm_substream {int number; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct solo_dev*) ;
 int FUNC_1 (void*,int ,int) ;
 struct solo_snd_pcm* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct solo_dev*,int ,int ,scalar_t__,int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_3, int VAR_4,
        unsigned long VAR_5, void *VAR_6,
        unsigned long VAR_7)
{
 struct solo_snd_pcm *VAR_8 = FUNC_2(VAR_3);
 struct solo_dev *VAR_9 = VAR_8->solo_dev;
 int VAR_10, VAR_11;

 for (VAR_11 = 0; VAR_11 < (VAR_7 / VAR_0); VAR_11++) {
  int VAR_12 = (VAR_5 / VAR_0) + VAR_11;

  VAR_10 = FUNC_3(VAR_9, 0, VAR_8->g723_dma,
         FUNC_0(VAR_9) +
         (VAR_12 * VAR_1) +
         (VAR_3->number * VAR_2),
         VAR_2, 0, 0);
  if (VAR_10)
   return VAR_10;

  FUNC_1(VAR_6, VAR_8->g723_buf, VAR_2);
  VAR_6 += VAR_2;
 }

 return 0;
}

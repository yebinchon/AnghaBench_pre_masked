
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct go7007_snd {int lock; struct snd_pcm_substream* substream; } ;
struct go7007 {struct go7007_snd* snd_context; } ;
struct TYPE_2__ {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct go7007* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2)
{
 struct go7007 *VAR_3 = FUNC_0(VAR_2);
 struct go7007_snd *VAR_4 = VAR_3->snd_context;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_1(&VAR_4->lock, VAR_5);
 if (VAR_4->substream == ((void*)0)) {
  VAR_4->substream = VAR_2;
  VAR_2->runtime->hw = VAR_1;
  VAR_6 = 0;
 } else
  VAR_6 = -VAR_0;
 FUNC_2(&VAR_4->lock, VAR_5);
 return VAR_6;
}

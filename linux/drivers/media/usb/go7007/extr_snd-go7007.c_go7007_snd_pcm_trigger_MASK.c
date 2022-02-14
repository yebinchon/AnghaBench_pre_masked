
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct go7007_snd {int capturing; int avail; int w_idx; int hw_ptr; } ;
struct go7007 {struct go7007_snd* snd_context; } ;


 int VAR_0 ;


 struct go7007* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct go7007 *VAR_3 = FUNC_0(VAR_1);
 struct go7007_snd *VAR_4 = VAR_3->snd_context;

 switch (VAR_2) {
 case 129:


  VAR_4->capturing = 1;
  return 0;
 case 128:
  VAR_4->hw_ptr = VAR_4->w_idx = VAR_4->avail = 0;
  VAR_4->capturing = 0;
  return 0;
 default:
  return -VAR_0;
 }
}

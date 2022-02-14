
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct channel* private_data; } ;
struct channel {int buffer_pos; } ;
typedef int snd_pcm_uframes_t ;



__attribute__((used)) static snd_pcm_uframes_t FUNC_0(struct snd_pcm_substream *VAR_0)
{
 struct channel *VAR_1 = VAR_0->private_data;

 return VAR_1->buffer_pos;
}

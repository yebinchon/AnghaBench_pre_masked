
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; struct channel* private_data; } ;
struct snd_pcm_runtime {int format; } ;
struct most_channel_config {scalar_t__ direction; } ;
struct channel {scalar_t__ buffer_pos; scalar_t__ period_pos; int * copy_fn; struct most_channel_config* cfg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_10)
{
 struct channel *VAR_11 = VAR_10->private_data;
 struct snd_pcm_runtime *VAR_12 = VAR_10->runtime;
 struct most_channel_config *VAR_13 = VAR_11->cfg;
 int VAR_14 = FUNC_2(VAR_12->format);

 VAR_11->copy_fn = ((void*)0);

 if (VAR_13->direction == VAR_1) {
  if (FUNC_1(VAR_12->format) || VAR_14 == 8)
   VAR_11->copy_fn = VAR_5;
  else if (VAR_14 == 16)
   VAR_11->copy_fn = VAR_2;
  else if (VAR_14 == 24)
   VAR_11->copy_fn = VAR_3;
  else if (VAR_14 == 32)
   VAR_11->copy_fn = VAR_4;
 } else {
  if (FUNC_1(VAR_12->format) || VAR_14 == 8)
   VAR_11->copy_fn = VAR_9;
  else if (VAR_14 == 16)
   VAR_11->copy_fn = VAR_6;
  else if (VAR_14 == 24)
   VAR_11->copy_fn = VAR_7;
  else if (VAR_14 == 32)
   VAR_11->copy_fn = VAR_8;
 }

 if (!VAR_11->copy_fn) {
  FUNC_0("unsupported format\n");
  return -VAR_0;
 }

 VAR_11->period_pos = 0;
 VAR_11->buffer_pos = 0;

 return 0;
}

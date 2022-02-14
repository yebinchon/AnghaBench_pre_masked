
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cobalt_card {struct snd_card* sc; struct cobalt_stream* s; } ;
struct snd_card {int private_free; struct snd_cobalt_card* private_data; } ;
struct cobalt_stream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_cobalt_card* FUNC_0 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct cobalt_stream *VAR_3,
           struct snd_card *VAR_4,
           struct snd_cobalt_card **VAR_5)
{
 *VAR_5 = FUNC_0(sizeof(struct snd_cobalt_card), VAR_1);
 if (*VAR_5 == ((void*)0))
  return -VAR_0;

 (*VAR_5)->s = VAR_3;
 (*VAR_5)->sc = VAR_4;

 VAR_4->private_data = *VAR_5;
 VAR_4->private_free = VAR_2;

 return 0;
}

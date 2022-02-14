
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_frequency {scalar_t__ tuner; scalar_t__ type; int frequency; } ;
struct snd_tea575x {size_t band; int freq; scalar_t__ tea5759; scalar_t__ has_am; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int rangehigh; int rangelow; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (struct snd_tea575x*) ;
 int VAR_6 ;
 struct snd_tea575x* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_7, void *VAR_8,
     const struct v4l2_frequency *VAR_9)
{
 struct snd_tea575x *VAR_10 = FUNC_2(VAR_7);

 if (VAR_9->tuner != 0 || VAR_9->type != VAR_4)
  return -VAR_3;

 if (VAR_10->has_am && VAR_9->frequency < (20000 * 16))
  VAR_10->band = VAR_0;
 else if (VAR_10->tea5759)
  VAR_10->band = VAR_2;
 else
  VAR_10->band = VAR_1;

 VAR_10->freq = FUNC_0(VAR_6, VAR_9->frequency, VAR_5[VAR_10->band].rangelow,
     VAR_5[VAR_10->band].rangehigh);
 FUNC_1(VAR_10);
 return 0;
}

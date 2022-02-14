
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_frequency {int frequency; scalar_t__ tuner; } ;
struct file {int dummy; } ;
struct cadet {int is_fm_band; } ;
struct TYPE_2__ {int rangehigh; int rangelow; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct cadet*,int) ;
 struct cadet* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    const struct v4l2_frequency *VAR_4)
{
 struct cadet *VAR_5 = FUNC_1(VAR_2);

 if (VAR_4->tuner)
  return -VAR_0;
 VAR_5->is_fm_band =
  VAR_4->frequency >= (VAR_1[0].rangehigh + VAR_1[1].rangelow) / 2;
 FUNC_0(VAR_5, VAR_4->frequency);
 return 0;
}

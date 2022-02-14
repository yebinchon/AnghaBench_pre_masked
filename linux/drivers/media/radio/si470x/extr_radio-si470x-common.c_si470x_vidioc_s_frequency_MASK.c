
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_frequency {scalar_t__ tuner; scalar_t__ frequency; } ;
struct si470x_device {size_t band; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ rangelow; scalar_t__ rangehigh; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct si470x_device*,int) ;
 int FUNC_1 (struct si470x_device*,scalar_t__) ;
 struct si470x_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
  const struct v4l2_frequency *VAR_4)
{
 struct si470x_device *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 if (VAR_4->tuner != 0)
  return -VAR_0;

 if (VAR_4->frequency < VAR_1[VAR_5->band].rangelow ||
     VAR_4->frequency > VAR_1[VAR_5->band].rangehigh) {

  VAR_6 = FUNC_0(VAR_5, 1);
  if (VAR_6)
   return VAR_6;
 }
 return FUNC_1(VAR_5, VAR_4->frequency);
}

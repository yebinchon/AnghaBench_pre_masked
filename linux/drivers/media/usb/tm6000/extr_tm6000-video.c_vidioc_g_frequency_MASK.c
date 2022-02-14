
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; scalar_t__ tuner; } ;
struct tm6000_fh {struct tm6000_core* dev; } ;
struct tm6000_core {scalar_t__ tuner_type; int v4l2_dev; int freq; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,int ,struct v4l2_frequency*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, void *VAR_6,
    struct v4l2_frequency *VAR_7)
{
 struct tm6000_fh *VAR_8 = VAR_6;
 struct tm6000_core *VAR_9 = VAR_8->dev;

 if (VAR_2 == VAR_9->tuner_type)
  return -VAR_1;
 if (VAR_7->tuner)
  return -VAR_0;

 VAR_7->frequency = VAR_9->freq;

 FUNC_0(&VAR_9->v4l2_dev, 0, VAR_4, VAR_3, VAR_7);

 return 0;
}

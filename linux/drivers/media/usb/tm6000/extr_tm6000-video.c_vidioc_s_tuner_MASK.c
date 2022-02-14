
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; scalar_t__ audmode; } ;
struct tm6000_fh {struct tm6000_core* dev; } ;
struct tm6000_core {scalar_t__ tuner_type; int v4l2_dev; scalar_t__ amode; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct tm6000_core*,int,char*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int ,int ,struct v4l2_tuner const*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_6, void *VAR_7,
    const struct v4l2_tuner *VAR_8)
{
 struct tm6000_fh *VAR_9 = VAR_7;
 struct tm6000_core *VAR_10 = VAR_9->dev;

 if (VAR_2 == VAR_10->tuner_type)
  return -VAR_1;
 if (0 != VAR_8->index)
  return -VAR_0;

 if (VAR_8->audmode > VAR_3)
  VAR_10->amode = VAR_3;
 else
  VAR_10->amode = VAR_8->audmode;
 FUNC_0(VAR_10, 3, "audio mode: %x\n", VAR_8->audmode);

 FUNC_1(&VAR_10->v4l2_dev, 0, VAR_5, VAR_4, VAR_8);

 return 0;
}

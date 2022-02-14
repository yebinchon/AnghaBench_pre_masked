
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int capability; int rangehigh; int audmode; int rxsubchans; int type; int name; } ;
struct tm6000_fh {struct tm6000_core* dev; } ;
struct tm6000_core {scalar_t__ tuner_type; int amode; int v4l2_dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_8 ;
 int FUNC_1 (int *,int ,int ,int ,struct v4l2_tuner*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_9, void *VAR_10,
    struct v4l2_tuner *VAR_11)
{
 struct tm6000_fh *VAR_12 = VAR_10;
 struct tm6000_core *VAR_13 = VAR_12->dev;

 if (VAR_2 == VAR_13->tuner_type)
  return -VAR_1;
 if (0 != VAR_11->index)
  return -VAR_0;

 FUNC_0(VAR_11->name, "Television", sizeof(VAR_11->name));
 VAR_11->type = VAR_3;
 VAR_11->capability = VAR_4 | VAR_5;
 VAR_11->rangehigh = 0xffffffffUL;
 VAR_11->rxsubchans = VAR_6;

 FUNC_1(&VAR_13->v4l2_dev, 0, VAR_8, VAR_7, VAR_11);

 VAR_11->audmode = VAR_13->amode;

 return 0;
}

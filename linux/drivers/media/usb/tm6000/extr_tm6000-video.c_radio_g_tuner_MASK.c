
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int capability; int audmode; int rxsubchans; int type; int name; } ;
struct tm6000_fh {struct tm6000_core* dev; } ;
struct tm6000_core {int v4l2_dev; } ;
struct file {struct tm6000_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct v4l2_tuner*,int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_7 ;
 int FUNC_2 (int *,int ,int ,int ,struct v4l2_tuner*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_8, void *VAR_9,
     struct v4l2_tuner *VAR_10)
{
 struct tm6000_fh *VAR_11 = VAR_8->private_data;
 struct tm6000_core *VAR_12 = VAR_11->dev;

 if (0 != VAR_10->index)
  return -VAR_0;

 FUNC_0(VAR_10, 0, sizeof(*VAR_10));
 FUNC_1(VAR_10->name, "Radio", sizeof(VAR_10->name));
 VAR_10->type = VAR_4;
 VAR_10->capability = VAR_1 | VAR_2;
 VAR_10->rxsubchans = VAR_5;
 VAR_10->audmode = VAR_3;

 FUNC_2(&VAR_12->v4l2_dev, 0, VAR_7, VAR_6, VAR_10);

 return 0;
}

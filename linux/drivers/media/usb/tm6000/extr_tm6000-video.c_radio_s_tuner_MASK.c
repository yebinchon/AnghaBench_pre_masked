
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; } ;
struct tm6000_fh {struct tm6000_core* dev; } ;
struct tm6000_core {int v4l2_dev; } ;
struct file {struct tm6000_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ,struct v4l2_tuner const*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
     const struct v4l2_tuner *VAR_5)
{
 struct tm6000_fh *VAR_6 = VAR_3->private_data;
 struct tm6000_core *VAR_7 = VAR_6->dev;

 if (0 != VAR_5->index)
  return -VAR_0;
 FUNC_0(&VAR_7->v4l2_dev, 0, VAR_2, VAR_1, VAR_5);
 return 0;
}

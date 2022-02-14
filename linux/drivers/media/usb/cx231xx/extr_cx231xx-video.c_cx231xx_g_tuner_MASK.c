
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int rangehigh; int signal; int capability; int type; int name; } ;
struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cx231xx*,int ,int ,struct v4l2_tuner*) ;
 int FUNC_1 (struct cx231xx*) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_4 ;

int FUNC_3(struct file *VAR_5, void *VAR_6, struct v4l2_tuner *VAR_7)
{
 struct cx231xx_fh *VAR_8 = VAR_6;
 struct cx231xx *VAR_9 = VAR_8->dev;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 if (0 != VAR_7->index)
  return -VAR_0;

 FUNC_2(VAR_7->name, "Tuner", sizeof(VAR_7->name));

 VAR_7->type = VAR_1;
 VAR_7->capability = VAR_2;
 VAR_7->rangehigh = 0xffffffffUL;
 VAR_7->signal = 0xffff;
 FUNC_0(VAR_9, VAR_4, VAR_3, VAR_7);

 return 0;
}

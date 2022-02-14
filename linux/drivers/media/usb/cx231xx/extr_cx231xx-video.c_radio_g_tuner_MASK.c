
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int name; scalar_t__ index; } ;
struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx231xx*,int ,int ,struct v4l2_tuner*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4, struct v4l2_tuner *VAR_5)
{
 struct cx231xx *VAR_6 = ((struct cx231xx_fh *)VAR_4)->dev;

 if (VAR_5->index)
  return -VAR_0;

 FUNC_1(VAR_5->name, "Radio", sizeof(VAR_5->name));

 FUNC_0(VAR_6, VAR_2, VAR_1, VAR_5);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {unsigned int video_input; } ;



int FUNC_0(struct file *VAR_0, void *VAR_1, unsigned int *VAR_2)
{
 struct cx231xx_fh *VAR_3 = VAR_1;
 struct cx231xx *VAR_4 = VAR_3->dev;

 *VAR_2 = VAR_4->video_input;

 return 0;
}

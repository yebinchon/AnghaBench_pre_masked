
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm6000_fh {scalar_t__ type; int vb_vidq; struct tm6000_core* dev; } ;
struct tm6000_core {int dummy; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct tm6000_core*,struct tm6000_fh*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4, enum v4l2_buf_type VAR_5)
{
 struct tm6000_fh *VAR_6 = VAR_4;
 struct tm6000_core *VAR_7 = VAR_6->dev;

 if (VAR_6->type != VAR_2)
  return -VAR_1;
 if (VAR_5 != VAR_6->type)
  return -VAR_1;

 if (!FUNC_0(VAR_7, VAR_6, 0))
  return -VAR_0;
 return FUNC_1(&VAR_6->vb_vidq);
}

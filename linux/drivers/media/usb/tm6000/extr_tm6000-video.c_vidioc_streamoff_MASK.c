
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm6000_fh {scalar_t__ type; int vb_vidq; struct tm6000_core* dev; } ;
struct tm6000_core {int dummy; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct tm6000_core*,struct tm6000_fh*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, enum v4l2_buf_type VAR_4)
{
 struct tm6000_fh *VAR_5 = VAR_3;
 struct tm6000_core *VAR_6 = VAR_5->dev;

 if (VAR_5->type != VAR_1)
  return -VAR_0;

 if (VAR_4 != VAR_5->type)
  return -VAR_0;

 FUNC_1(&VAR_5->vb_vidq);
 FUNC_0(VAR_6, VAR_5);

 return 0;
}

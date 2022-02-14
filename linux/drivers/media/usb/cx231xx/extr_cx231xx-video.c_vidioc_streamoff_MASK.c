
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct cx231xx_fh {int type; int vb_vidq; struct cx231xx* dev; } ;
struct cx231xx {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int FUNC_0 (struct cx231xx*) ;
 int FUNC_1 (struct cx231xx*,int ,int ,int ) ;
 int FUNC_2 (struct cx231xx_fh*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
       enum v4l2_buf_type VAR_5)
{
 struct cx231xx_fh *VAR_6 = VAR_4;
 struct cx231xx *VAR_7 = VAR_6->dev;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_5 != VAR_6->type)
  return -VAR_0;

 FUNC_1(VAR_7, VAR_2, VAR_1, 0);

 FUNC_3(&VAR_6->vb_vidq);
 FUNC_2(VAR_6);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct cx231xx_fh {int vb_vidq; struct cx231xx* dev; } ;
struct cx231xx {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int FUNC_0 (struct cx231xx*,int ,int ,int) ;
 int FUNC_1 (struct cx231xx*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct cx231xx_fh*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, void *VAR_3,
      enum v4l2_buf_type VAR_4)
{
 struct cx231xx_fh *VAR_5 = VAR_3;
 struct cx231xx *VAR_6 = VAR_5->dev;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_5);

 if (FUNC_2(VAR_7 >= 0))
  VAR_7 = FUNC_4(&VAR_5->vb_vidq);

 FUNC_0(VAR_6, VAR_1, VAR_0, 1);

 return VAR_7;
}

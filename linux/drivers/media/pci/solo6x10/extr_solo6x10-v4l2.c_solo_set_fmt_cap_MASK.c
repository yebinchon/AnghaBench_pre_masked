
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {int dummy; } ;
struct solo_dev {int vidq; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,void*,struct v4l2_format*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct solo_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
       struct v4l2_format *VAR_3)
{
 struct solo_dev *VAR_4 = FUNC_2(VAR_1);

 if (FUNC_1(&VAR_4->vidq))
  return -VAR_0;



 return FUNC_0(VAR_1, VAR_2, VAR_3);
}

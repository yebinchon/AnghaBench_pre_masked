
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int multiplanar; } ;
struct v4l2_format {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct vivid_dev* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,void*,struct v4l2_format*) ;

int FUNC_2(struct file *VAR_1, void *VAR_2,
     struct v4l2_format *VAR_3)
{
 struct vivid_dev *VAR_4 = FUNC_0(VAR_1);

 if (!VAR_4->multiplanar)
  return -VAR_0;
 return FUNC_1(VAR_1, VAR_2, VAR_3);
}

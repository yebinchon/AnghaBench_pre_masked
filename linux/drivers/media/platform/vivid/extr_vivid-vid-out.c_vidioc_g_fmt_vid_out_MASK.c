
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {scalar_t__ multiplanar; } ;
struct v4l2_format {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,void*,struct v4l2_format*,int ) ;
 struct vivid_dev* FUNC_1 (struct file*) ;
 int VAR_1 ;

int FUNC_2(struct file *VAR_2, void *VAR_3,
     struct v4l2_format *VAR_4)
{
 struct vivid_dev *VAR_5 = FUNC_1(VAR_2);

 if (VAR_5->multiplanar)
  return -VAR_0;
 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vivid_dev {int has_raw_vbi_cap; } ;
struct v4l2_vbi_format {int dummy; } ;
struct TYPE_2__ {struct v4l2_vbi_format vbi; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct vivid_dev* FUNC_0 (struct file*) ;
 int FUNC_1 (struct vivid_dev*,struct v4l2_vbi_format*) ;
 int FUNC_2 (struct vivid_dev*) ;

int FUNC_3(struct file *VAR_1, void *VAR_2,
     struct v4l2_format *VAR_3)
{
 struct vivid_dev *VAR_4 = FUNC_0(VAR_1);
 struct v4l2_vbi_format *VAR_5 = &VAR_3->fmt.vbi;

 if (!FUNC_2(VAR_4) || !VAR_4->has_raw_vbi_cap)
  return -VAR_0;

 FUNC_1(VAR_4, VAR_5);
 return 0;
}

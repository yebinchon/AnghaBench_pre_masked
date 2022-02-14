
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {int dummy; } ;
struct file {int dummy; } ;
struct ceu_device {int vb2_vq; } ;


 int VAR_0 ;
 int FUNC_0 (struct ceu_device*,struct v4l2_format*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct ceu_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
        struct v4l2_format *VAR_3)
{
 struct ceu_device *VAR_4 = FUNC_2(VAR_1);

 if (FUNC_1(&VAR_4->vb2_vq))
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_3);
}

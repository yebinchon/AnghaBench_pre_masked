
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct device {int dummy; } ;
struct au0828_dev {unsigned long height; unsigned long bytesperline; } ;


 int VAR_0 ;
 struct au0828_dev* FUNC_0 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_1(struct vb2_queue *VAR_1,
         unsigned int *VAR_2, unsigned int *VAR_3,
         unsigned int VAR_4[], struct device *VAR_5[])
{
 struct au0828_dev *VAR_6 = FUNC_0(VAR_1);
 unsigned long VAR_7 = VAR_6->height * VAR_6->bytesperline;

 if (*VAR_3)
  return VAR_4[0] < VAR_7 ? -VAR_0 : 0;
 *VAR_3 = 1;
 VAR_4[0] = VAR_7;
 return 0;
}

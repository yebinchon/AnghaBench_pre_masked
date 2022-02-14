
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct vb2_queue *VAR_2, unsigned int *VAR_3,
         unsigned int *VAR_4, unsigned int VAR_5[],
         struct device *VAR_6[])
{
 if (*VAR_4)
  return VAR_5[0] < VAR_1 ? -VAR_0 : 0;

 VAR_5[0] = VAR_1;
 *VAR_4 = 1;

 return 0;
}

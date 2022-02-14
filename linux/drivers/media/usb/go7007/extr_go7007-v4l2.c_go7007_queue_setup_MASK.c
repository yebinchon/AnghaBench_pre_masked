
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct vb2_queue *VAR_1,
  unsigned int *VAR_2, unsigned int *VAR_3,
  unsigned int VAR_4[], struct device *VAR_5[])
{
 VAR_4[0] = VAR_0;
 *VAR_3 = 1;

 if (*VAR_2 < 2)
  *VAR_2 = 2;

 return 0;
}

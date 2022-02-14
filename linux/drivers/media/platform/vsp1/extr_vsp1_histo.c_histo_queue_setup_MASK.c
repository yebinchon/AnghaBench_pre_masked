
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_histogram {unsigned int data_size; } ;
struct vb2_queue {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct vsp1_histogram* FUNC_0 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_1(struct vb2_queue *VAR_1, unsigned int *VAR_2,
        unsigned int *VAR_3, unsigned int VAR_4[],
        struct device *VAR_5[])
{
 struct vsp1_histogram *VAR_6 = FUNC_0(VAR_1);

 if (*VAR_3) {
  if (*VAR_3 != 1)
   return -VAR_0;

  if (VAR_4[0] < VAR_6->data_size)
   return -VAR_0;

  return 0;
 }

 *VAR_3 = 1;
 VAR_4[0] = VAR_6->data_size;

 return 0;
}

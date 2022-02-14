
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vb2_queue {unsigned int num_buffers; } ;
struct usbtv {int n_chunks; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usbtv* FUNC_0 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_1(struct vb2_queue *VAR_2,
 unsigned int *VAR_3,
 unsigned int *VAR_4, unsigned int VAR_5[], struct device *VAR_6[])
{
 struct usbtv *VAR_7 = FUNC_0(VAR_2);
 unsigned VAR_8 = VAR_1 * VAR_7->n_chunks * 2 * sizeof(u32);

 if (VAR_2->num_buffers + *VAR_3 < 2)
  *VAR_3 = 2 - VAR_2->num_buffers;
 if (*VAR_4)
  return VAR_5[0] < VAR_8 ? -VAR_0 : 0;
 *VAR_4 = 1;
 VAR_5[0] = VAR_8;

 return 0;
}

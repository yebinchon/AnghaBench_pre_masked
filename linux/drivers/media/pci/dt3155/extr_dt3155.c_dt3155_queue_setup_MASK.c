
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {unsigned int num_buffers; } ;
struct dt3155_priv {unsigned int width; unsigned int height; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct dt3155_priv* FUNC_0 (struct vb2_queue*) ;

__attribute__((used)) static int
FUNC_1(struct vb2_queue *VAR_1,
  unsigned int *VAR_2, unsigned int *VAR_3,
  unsigned int VAR_4[], struct device *VAR_5[])

{
 struct dt3155_priv *VAR_6 = FUNC_0(VAR_1);
 unsigned VAR_7 = VAR_6->width * VAR_6->height;

 if (VAR_1->num_buffers + *VAR_2 < 2)
  *VAR_2 = 2 - VAR_1->num_buffers;
 if (*VAR_3)
  return VAR_4[0] < VAR_7 ? -VAR_0 : 0;
 *VAR_3 = 1;
 VAR_4[0] = VAR_7;
 return 0;
}

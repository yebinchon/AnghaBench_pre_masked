
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {struct cobalt_stream* drv_priv; } ;
struct device {int dummy; } ;
struct cobalt_stream {unsigned int stride; unsigned int height; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct vb2_queue *VAR_2,
   unsigned int *VAR_3, unsigned int *VAR_4,
   unsigned int VAR_5[], struct device *VAR_6[])
{
 struct cobalt_stream *VAR_7 = VAR_2->drv_priv;
 unsigned VAR_8 = VAR_7->stride * VAR_7->height;

 if (*VAR_3 < 3)
  *VAR_3 = 3;
 if (*VAR_3 > VAR_1)
  *VAR_3 = VAR_1;
 if (*VAR_4)
  return VAR_5[0] < VAR_8 ? -VAR_0 : 0;
 *VAR_4 = 1;
 VAR_5[0] = VAR_8;
 return 0;
}

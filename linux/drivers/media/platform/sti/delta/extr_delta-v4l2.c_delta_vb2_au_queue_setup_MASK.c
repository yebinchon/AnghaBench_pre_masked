
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct device {int dummy; } ;
struct delta_ctx {unsigned int max_au_size; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct delta_ctx* FUNC_0 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_1(struct vb2_queue *VAR_2,
        unsigned int *VAR_3,
        unsigned int *VAR_4,
        unsigned int VAR_5[],
        struct device *VAR_6[])
{
 struct delta_ctx *VAR_7 = FUNC_0(VAR_2);
 unsigned int VAR_8 = VAR_7->max_au_size;

 if (*VAR_4)
  return VAR_5[0] < VAR_8 ? -VAR_1 : 0;

 *VAR_4 = 1;
 if (*VAR_3 < 1)
  *VAR_3 = 1;
 if (*VAR_3 > VAR_0)
  *VAR_3 = VAR_0;

 VAR_5[0] = VAR_8;

 return 0;
}

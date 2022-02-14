
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int type; } ;
struct rga_frame {unsigned int size; } ;
struct rga_ctx {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rga_frame*) ;
 int FUNC_1 (struct rga_frame*) ;
 struct rga_frame* FUNC_2 (struct rga_ctx*,int ) ;
 struct rga_ctx* FUNC_3 (struct vb2_queue*) ;

__attribute__((used)) static int
FUNC_4(struct vb2_queue *VAR_1,
  unsigned int *VAR_2, unsigned int *VAR_3,
  unsigned int VAR_4[], struct device *VAR_5[])
{
 struct rga_ctx *VAR_6 = FUNC_3(VAR_1);
 struct rga_frame *VAR_7 = FUNC_2(VAR_6, VAR_1->type);

 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 if (*VAR_3)
  return VAR_4[0] < VAR_7->size ? -VAR_0 : 0;

 VAR_4[0] = VAR_7->size;
 *VAR_3 = 1;

 return 0;
}

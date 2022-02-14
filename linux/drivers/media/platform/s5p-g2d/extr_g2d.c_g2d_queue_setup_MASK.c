
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int type; } ;
struct g2d_frame {unsigned int size; } ;
struct g2d_ctx {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct g2d_frame*) ;
 int FUNC_1 (struct g2d_frame*) ;
 struct g2d_frame* FUNC_2 (struct g2d_ctx*,int ) ;
 struct g2d_ctx* FUNC_3 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_4(struct vb2_queue *VAR_0,
      unsigned int *VAR_1, unsigned int *VAR_2,
      unsigned int VAR_3[], struct device *VAR_4[])
{
 struct g2d_ctx *VAR_5 = FUNC_3(VAR_0);
 struct g2d_frame *VAR_6 = FUNC_2(VAR_5, VAR_0->type);

 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_3[0] = VAR_6->size;
 *VAR_2 = 1;

 if (*VAR_1 == 0)
  *VAR_1 = 1;

 return 0;
}

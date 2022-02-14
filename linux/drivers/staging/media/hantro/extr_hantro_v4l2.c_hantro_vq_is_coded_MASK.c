
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int type; } ;
struct hantro_ctx {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct hantro_ctx*) ;
 struct hantro_ctx* FUNC_2 (struct vb2_queue*) ;

__attribute__((used)) static bool FUNC_3(struct vb2_queue *VAR_0)
{
 struct hantro_ctx *VAR_1 = FUNC_2(VAR_0);

 return FUNC_1(VAR_1) != FUNC_0(VAR_0->type);
}

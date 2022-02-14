
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct mtk_vcodec_ctx {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mtk_vcodec_ctx* FUNC_0 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_1(struct vb2_queue *VAR_2, unsigned int VAR_3)
{
 struct mtk_vcodec_ctx *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->state == VAR_0)
  VAR_4->state = VAR_1;

 return 0;
}

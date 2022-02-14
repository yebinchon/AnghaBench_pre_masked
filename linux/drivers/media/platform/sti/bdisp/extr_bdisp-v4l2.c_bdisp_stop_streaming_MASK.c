
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {struct bdisp_ctx* drv_priv; } ;
struct bdisp_ctx {TYPE_1__* bdisp_dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct bdisp_ctx*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct vb2_queue *VAR_0)
{
 struct bdisp_ctx *VAR_1 = VAR_0->drv_priv;

 FUNC_0(VAR_1);

 FUNC_1(VAR_1->bdisp_dev->dev);
}

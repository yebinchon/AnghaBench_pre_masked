
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpe_ctx {TYPE_1__* dev; } ;
struct vb2_queue {int dummy; } ;
struct TYPE_2__ {int vpdma; } ;


 int VAR_0 ;
 struct vpe_ctx* FUNC_0 (struct vb2_queue*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct vpe_ctx*,struct vb2_queue*,int ) ;

__attribute__((used)) static void FUNC_4(struct vb2_queue *VAR_1)
{
 struct vpe_ctx *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_2->dev);
 FUNC_1(VAR_2->dev->vpdma);

 FUNC_3(VAR_2, VAR_1, VAR_0);
}

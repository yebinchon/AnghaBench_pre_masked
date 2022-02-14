
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpe_ctx {TYPE_1__* dev; } ;
struct TYPE_2__ {int vpdma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct vpe_ctx *VAR_2)
{
 FUNC_1(VAR_2->dev, VAR_0, 0xffffffff);
 FUNC_1(VAR_2->dev, VAR_1, 0xffffffff);

 FUNC_0(VAR_2->dev->vpdma, 0, 0, 0);
}

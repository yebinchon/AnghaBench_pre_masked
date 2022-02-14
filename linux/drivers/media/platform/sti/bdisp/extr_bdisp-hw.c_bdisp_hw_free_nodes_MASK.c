
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bdisp_node {int dummy; } ;
struct bdisp_ctx {int * node_paddr; scalar_t__* node; TYPE_1__* bdisp_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,scalar_t__,int ,int ) ;

void FUNC_1(struct bdisp_ctx *VAR_2)
{
 if (VAR_2 && VAR_2->node[0])
  FUNC_0(VAR_2->bdisp_dev->dev,
          sizeof(struct bdisp_node) * VAR_1,
          VAR_2->node[0], VAR_2->node_paddr[0],
          VAR_0);
}

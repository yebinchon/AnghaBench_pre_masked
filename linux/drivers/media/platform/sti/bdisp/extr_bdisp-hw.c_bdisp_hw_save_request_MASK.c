
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bdisp_request {int nb_req; int vflip; int hflip; int dst; int src; } ;
struct bdisp_node {int dummy; } ;
struct bdisp_ctx {TYPE_2__* bdisp_dev; int vflip; int hflip; int dst; int src; struct bdisp_node** node; } ;
struct TYPE_3__ {struct bdisp_request copy_request; struct bdisp_node** copy_node; } ;
struct TYPE_4__ {int dev; TYPE_1__ dbg; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bdisp_node* FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct bdisp_ctx *VAR_2)
{
 struct bdisp_node **VAR_3 = VAR_2->bdisp_dev->dbg.copy_node;
 struct bdisp_request *VAR_4 = &VAR_2->bdisp_dev->dbg.copy_request;
 struct bdisp_node **VAR_5 = VAR_2->node;
 int VAR_6;


 VAR_4->src = VAR_2->src;
 VAR_4->dst = VAR_2->dst;
 VAR_4->hflip = VAR_2->hflip;
 VAR_4->vflip = VAR_2->vflip;
 VAR_4->nb_req++;


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {

  if (!VAR_3[VAR_6]) {
   VAR_3[VAR_6] = FUNC_0(VAR_2->bdisp_dev->dev,
          sizeof(*VAR_3[VAR_6]),
          VAR_0);
   if (!VAR_3[VAR_6])
    return;
  }
  *VAR_3[VAR_6] = *VAR_5[VAR_6];
 }
}

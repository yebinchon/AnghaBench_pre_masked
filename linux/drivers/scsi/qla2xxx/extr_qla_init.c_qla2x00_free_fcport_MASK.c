
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ct_sns_pkt {int dummy; } ;
struct TYPE_12__ {int * ct_sns; int ct_sns_dma; } ;
struct TYPE_13__ {int list; TYPE_4__ ct_desc; TYPE_3__* vha; } ;
typedef TYPE_5__ fc_port_t ;
struct TYPE_11__ {TYPE_2__* hw; } ;
struct TYPE_10__ {TYPE_1__* pdev; } ;
struct TYPE_9__ {int dev; } ;


 int FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*) ;

void
FUNC_4(fc_port_t *VAR_0)
{
 if (VAR_0->ct_desc.ct_sns) {
  FUNC_0(&VAR_0->vha->hw->pdev->dev,
   sizeof(struct ct_sns_pkt), VAR_0->ct_desc.ct_sns,
   VAR_0->ct_desc.ct_sns_dma);

  VAR_0->ct_desc.ct_sns = ((void*)0);
 }
 FUNC_2(&VAR_0->list);
 FUNC_3(VAR_0);
 FUNC_1(VAR_0);
}

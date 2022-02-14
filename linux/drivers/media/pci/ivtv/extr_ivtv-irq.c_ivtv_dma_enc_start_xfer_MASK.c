
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ivtv_stream {size_t sg_processed; int sg_handle; TYPE_2__* sg_processing; TYPE_1__* sg_dma; struct ivtv* itv; } ;
struct TYPE_6__ {scalar_t__ expires; } ;
struct ivtv {TYPE_3__ dma_timer; } ;
struct TYPE_5__ {int src; int dst; int size; } ;
struct TYPE_4__ {void* size; void* dst; void* src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ivtv_stream*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static void FUNC_7(struct ivtv_stream *VAR_3)
{
 struct ivtv *VAR_4 = VAR_3->itv;

 VAR_3->sg_dma->src = FUNC_1(VAR_3->sg_processing[VAR_3->sg_processed].src);
 VAR_3->sg_dma->dst = FUNC_1(VAR_3->sg_processing[VAR_3->sg_processed].dst);
 VAR_3->sg_dma->size = FUNC_1(VAR_3->sg_processing[VAR_3->sg_processed].size | 0x80000000);
 VAR_3->sg_processed++;

 FUNC_2(VAR_3);
 FUNC_5(VAR_3->sg_handle, VAR_1);
 FUNC_6(FUNC_4(VAR_0) | 0x02, VAR_0);
 VAR_4->dma_timer.expires = VAR_2 + FUNC_3(300);
 FUNC_0(&VAR_4->dma_timer);
}

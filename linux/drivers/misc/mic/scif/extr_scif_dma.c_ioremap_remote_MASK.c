
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scif_window_iter {int dummy; } ;
struct scif_window {scalar_t__ type; } ;
struct scif_dev {TYPE_2__* sdev; } ;
typedef int off_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {TYPE_1__* aper; int card_rel_da; } ;
struct TYPE_3__ {scalar_t__ pa; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__,size_t,struct scif_dev*) ;
 scalar_t__ FUNC_1 (struct scif_window*,int ,int *,struct scif_window_iter*) ;
 int FUNC_2 (struct scif_dev*) ;

__attribute__((used)) static inline
void *FUNC_3(off_t VAR_1, struct scif_window *VAR_2,
       size_t VAR_3, struct scif_dev *VAR_4,
       struct scif_window_iter *VAR_5)
{
 dma_addr_t VAR_6 = FUNC_1(VAR_2, VAR_1, ((void*)0), VAR_5);






 if (!FUNC_2(VAR_4) && VAR_2->type == VAR_0 &&
     VAR_4->sdev->aper && !VAR_4->sdev->card_rel_da)
  VAR_6 = VAR_6 - VAR_4->sdev->aper->pa;
 return FUNC_0(VAR_6, VAR_3, VAR_4);
}

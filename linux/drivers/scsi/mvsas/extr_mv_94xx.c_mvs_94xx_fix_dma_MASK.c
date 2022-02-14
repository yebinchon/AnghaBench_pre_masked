
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mvs_prd_imt {int len; int misc_ctl; } ;
struct mvs_prd {int im_len; void* addr; } ;
struct mvs_info {int bulk_buffer_dma1; int bulk_buffer_dma; TYPE_1__* pdev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {scalar_t__ revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct mvs_prd*) ;

__attribute__((used)) static void FUNC_3(struct mvs_info *VAR_4, u32 VAR_5,
        int VAR_6, int VAR_7, void *VAR_8)
{
 int VAR_9;
 struct mvs_prd *VAR_10 = VAR_8;
 dma_addr_t VAR_11;
 struct mvs_prd_imt VAR_12;

 *(u32 *)&VAR_12 = 0;
 VAR_10 += VAR_7;


 if ((VAR_4->pdev->revision == VAR_2) ||
   (VAR_4->pdev->revision == VAR_3))
  VAR_11 = (VAR_5 <= 0x08) ?
    VAR_4->bulk_buffer_dma : VAR_4->bulk_buffer_dma1;
 else
  return;

 for (VAR_9 = VAR_7; VAR_9 < VAR_0; VAR_9++, ++VAR_10) {
  if (VAR_9 == VAR_0 - 1) {
   VAR_10->addr = FUNC_1(FUNC_2(VAR_10 - 1));
   VAR_12.len = 2;
   VAR_12.misc_ctl = 0x01;
  } else {
   VAR_10->addr = FUNC_1(VAR_11);
   VAR_12.len = VAR_6;
  }
  VAR_10->im_len = FUNC_0(*(u32 *)&VAR_12);
 }
}

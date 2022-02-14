
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct bnx2fc_hba {int hash_tbl_segment_count; int hash_tbl_pbl_dma; int * hash_tbl_pbl; TYPE_1__* pcidev; int ** hash_tbl_segments; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *,int) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct bnx2fc_hba *VAR_2)
{
 int VAR_3;
 int VAR_4;
 u32 *VAR_5;

 if (VAR_2->hash_tbl_segments) {

  VAR_5 = VAR_2->hash_tbl_pbl;
  if (VAR_5) {
   VAR_4 = VAR_2->hash_tbl_segment_count;
   for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3) {
    dma_addr_t VAR_6;

    VAR_6 = FUNC_2(*VAR_5);
    ++VAR_5;
    VAR_6 += ((u64)FUNC_2(*VAR_5)) << 32;
    ++VAR_5;
    FUNC_0(&VAR_2->pcidev->dev,
        VAR_0,
        VAR_2->hash_tbl_segments[VAR_3],
        VAR_6);
   }
  }

  FUNC_1(VAR_2->hash_tbl_segments);
  VAR_2->hash_tbl_segments = ((void*)0);
 }

 if (VAR_2->hash_tbl_pbl) {
  FUNC_0(&VAR_2->pcidev->dev, VAR_1,
        VAR_2->hash_tbl_pbl,
        VAR_2->hash_tbl_pbl_dma);
  VAR_2->hash_tbl_pbl = ((void*)0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int bmap; } ;
struct rvu_pfvf {TYPE_2__ msix; } ;
struct rvu_hwinfo {int total_pfs; int total_vfs; struct rvu_block* block; } ;
struct TYPE_3__ {int bmap; } ;
struct rvu_block {TYPE_1__ lf; } ;
struct rvu {int rsrc_lock; int msix_base_iova; int dev; struct rvu_pfvf* hwvf; struct rvu_pfvf* pf; struct rvu_hwinfo* hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rvu*) ;
 int FUNC_4 (struct rvu*) ;
 int FUNC_5 (struct rvu*) ;
 int FUNC_6 (struct rvu*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct rvu *VAR_5)
{
 struct rvu_hwinfo *VAR_6 = VAR_5->hw;
 struct rvu_block *VAR_7;
 struct rvu_pfvf *VAR_8;
 int VAR_9, VAR_10;
 u64 VAR_11;

 FUNC_4(VAR_5);
 FUNC_5(VAR_5);
 FUNC_3(VAR_5);


 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_7 = &VAR_6->block[VAR_9];
  FUNC_1(VAR_7->lf.bmap);
 }


 for (VAR_9 = 0; VAR_9 < VAR_6->total_pfs; VAR_9++) {
  VAR_8 = &VAR_5->pf[VAR_9];
  FUNC_1(VAR_8->msix.bmap);
 }

 for (VAR_9 = 0; VAR_9 < VAR_6->total_vfs; VAR_9++) {
  VAR_8 = &VAR_5->hwvf[VAR_9];
  FUNC_1(VAR_8->msix.bmap);
 }


 if (!VAR_5->msix_base_iova)
  return;
 VAR_11 = FUNC_6(VAR_5, VAR_0, VAR_4);
 VAR_10 = VAR_11 & 0xFFFFF;
 FUNC_0(VAR_5->dev, VAR_5->msix_base_iova,
      VAR_10 * VAR_3,
      VAR_2, 0);

 FUNC_2(&VAR_5->rsrc_lock);
}

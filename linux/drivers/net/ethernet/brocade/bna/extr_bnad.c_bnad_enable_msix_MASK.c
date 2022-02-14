
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct msix_entry {int dummy; } ;
struct bnad {int cfg_flags; int msix_num; int bna_lock; TYPE_3__* msix_table; TYPE_1__* pcidev; } ;
struct TYPE_8__ {int entry; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bnad*,int,int) ;
 int FUNC_1 (struct bnad*) ;
 int FUNC_2 (int *,char*,...) ;
 TYPE_3__* FUNC_3 (int,int,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_3__*,int,int) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_10(struct bnad *VAR_5)
{
 int VAR_6, VAR_7;
 unsigned long VAR_8;

 FUNC_8(&VAR_5->bna_lock, VAR_8);
 if (!(VAR_5->cfg_flags & VAR_0)) {
  FUNC_9(&VAR_5->bna_lock, VAR_8);
  return;
 }
 FUNC_9(&VAR_5->bna_lock, VAR_8);

 if (VAR_5->msix_table)
  return;

 VAR_5->msix_table =
  FUNC_3(VAR_5->msix_num, sizeof(struct msix_entry), VAR_4);

 if (!VAR_5->msix_table)
  goto intx_mode;

 for (VAR_6 = 0; VAR_6 < VAR_5->msix_num; VAR_6++)
  VAR_5->msix_table[VAR_6].entry = VAR_6;

 VAR_7 = FUNC_6(VAR_5->pcidev, VAR_5->msix_table,
        1, VAR_5->msix_num);
 if (VAR_7 < 0) {
  goto intx_mode;
 } else if (VAR_7 < VAR_5->msix_num) {
  FUNC_2(&VAR_5->pcidev->dev,
    "%d MSI-X vectors allocated < %d requested\n",
    VAR_7, VAR_5->msix_num);

  FUNC_8(&VAR_5->bna_lock, VAR_8);

  FUNC_0(VAR_5, (VAR_7 - VAR_1) / 2,
   (VAR_7 - VAR_1) / 2);
  FUNC_9(&VAR_5->bna_lock, VAR_8);

  VAR_5->msix_num = VAR_3 + VAR_2 +
    VAR_1;

  if (VAR_5->msix_num > VAR_7) {
   FUNC_5(VAR_5->pcidev);
   goto intx_mode;
  }
 }

 FUNC_7(VAR_5->pcidev, 0);

 return;

intx_mode:
 FUNC_2(&VAR_5->pcidev->dev,
   "MSI-X enable failed - operating in INTx mode\n");

 FUNC_4(VAR_5->msix_table);
 VAR_5->msix_table = ((void*)0);
 VAR_5->msix_num = 0;
 FUNC_8(&VAR_5->bna_lock, VAR_8);
 VAR_5->cfg_flags &= ~VAR_0;
 FUNC_1(VAR_5);
 FUNC_9(&VAR_5->bna_lock, VAR_8);
}

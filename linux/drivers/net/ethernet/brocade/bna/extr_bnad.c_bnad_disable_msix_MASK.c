
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnad {int cfg_flags; int * msix_table; int pcidev; int bna_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct bnad *VAR_1)
{
 u32 VAR_2;
 unsigned long VAR_3;

 FUNC_2(&VAR_1->bna_lock, VAR_3);
 VAR_2 = VAR_1->cfg_flags;
 if (VAR_1->cfg_flags & VAR_0)
  VAR_1->cfg_flags &= ~VAR_0;
 FUNC_3(&VAR_1->bna_lock, VAR_3);

 if (VAR_2 & VAR_0) {
  FUNC_1(VAR_1->pcidev);
  FUNC_0(VAR_1->msix_table);
  VAR_1->msix_table = ((void*)0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bnad {int cfg_flags; int bna_lock; TYPE_2__* pcidev; TYPE_1__* msix_table; } ;
struct TYPE_4__ {int irq; } ;
struct TYPE_3__ {int vector; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct bnad *VAR_2)
{
 u32 VAR_3;
 unsigned long VAR_4;

 FUNC_0(&VAR_2->bna_lock, VAR_4);
 if (VAR_2->cfg_flags & VAR_0)
  VAR_3 = VAR_2->msix_table[VAR_1].vector;
 else
  VAR_3 = VAR_2->pcidev->irq;
 FUNC_1(&VAR_2->bna_lock, VAR_4);

 FUNC_2(VAR_3);
}

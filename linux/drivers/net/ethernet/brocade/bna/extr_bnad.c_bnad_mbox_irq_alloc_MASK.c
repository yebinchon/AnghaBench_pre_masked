
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bnad {int cfg_flags; int mbox_irq_name; int run_flags; int bna_lock; TYPE_2__* pcidev; TYPE_1__* msix_table; } ;
typedef scalar_t__ irq_handler_t ;
struct TYPE_4__ {int irq; } ;
struct TYPE_3__ {int vector; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnad*,int ) ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,scalar_t__,unsigned long,int ,struct bnad*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,char*,char*) ;

__attribute__((used)) static int
FUNC_6(struct bnad *VAR_8)
{
 int VAR_9 = 0;
 unsigned long VAR_10, VAR_11;
 u32 VAR_12;
 irq_handler_t VAR_13;

 FUNC_3(&VAR_8->bna_lock, VAR_11);
 if (VAR_8->cfg_flags & VAR_0) {
  VAR_13 = (irq_handler_t)VAR_6;
  VAR_12 = VAR_8->msix_table[VAR_1].vector;
  VAR_10 = 0;
 } else {
  VAR_13 = (irq_handler_t)VAR_5;
  VAR_12 = VAR_8->pcidev->irq;
  VAR_10 = VAR_4;
 }

 FUNC_4(&VAR_8->bna_lock, VAR_11);
 FUNC_5(VAR_8->mbox_irq_name, "%s", VAR_2);





 FUNC_2(VAR_3, &VAR_8->run_flags);

 FUNC_0(VAR_8, VAR_7);

 VAR_9 = FUNC_1(VAR_12, VAR_13, VAR_10,
     VAR_8->mbox_irq_name, VAR_8);

 return VAR_9;
}

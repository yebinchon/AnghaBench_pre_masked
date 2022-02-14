
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct i40e_pf {int flags; TYPE_2__* irq_pile; TYPE_1__* pdev; } ;
struct i40e_lump_tracking {int dummy; } ;
typedef int ssize_t ;
struct TYPE_5__ {int num_entries; scalar_t__ search_hint; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct i40e_pf*) ;
 int FUNC_2 (struct i40e_pf*,TYPE_2__*,int,scalar_t__) ;
 int FUNC_3 (struct i40e_pf*) ;
 TYPE_2__* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct i40e_pf *VAR_14)
{
 int VAR_15 = 0;
 ssize_t VAR_16;

 if (VAR_14->flags & VAR_8) {
  VAR_15 = FUNC_3(VAR_14);
  if (VAR_15 < 0) {
   VAR_14->flags &= ~(VAR_8 |
           VAR_7 |
           VAR_10 |
           VAR_2 |
           VAR_3 |
           VAR_11 |
           VAR_5 |
           VAR_4 |
           VAR_12);
   VAR_14->flags |= VAR_6;


   FUNC_1(VAR_14);
  }
 }

 if (!(VAR_14->flags & VAR_8) &&
     (VAR_14->flags & VAR_9)) {
  FUNC_0(&VAR_14->pdev->dev, "MSI-X not available, trying MSI\n");
  VAR_15 = FUNC_5(VAR_14->pdev);
  if (VAR_15 < 0) {
   FUNC_0(&VAR_14->pdev->dev, "MSI init failed - %d\n",
     VAR_15);
   VAR_14->flags &= ~VAR_9;
  }
  VAR_15 = 1;
 }

 if (!(VAR_14->flags & (VAR_8 | VAR_9)))
  FUNC_0(&VAR_14->pdev->dev, "MSI-X and MSI not available, falling back to Legacy IRQ\n");


 VAR_16 = sizeof(struct i40e_lump_tracking) + (sizeof(u16) * VAR_15);
 VAR_14->irq_pile = FUNC_4(VAR_16, VAR_1);
 if (!VAR_14->irq_pile)
  return -VAR_0;

 VAR_14->irq_pile->num_entries = VAR_15;
 VAR_14->irq_pile->search_hint = 0;


 (void)FUNC_2(VAR_14, VAR_14->irq_pile, 1, VAR_13 - 1);

 return 0;
}

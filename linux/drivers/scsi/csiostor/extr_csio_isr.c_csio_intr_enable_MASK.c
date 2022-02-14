
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_hw {scalar_t__ intr_mode; int flags; scalar_t__ cfg_niq; scalar_t__ num_sqsets; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct csio_hw*,char*,char*) ;
 int FUNC_1 (struct csio_hw*) ;
 int FUNC_2 (struct csio_hw*) ;
 int VAR_7 ;
 int FUNC_3 (struct csio_hw*,char*) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct csio_hw *VAR_8)
{
 VAR_8->intr_mode = VAR_6;
 VAR_8->flags &= ~VAR_1;


 if ((VAR_7 == 2) && !FUNC_1(VAR_8))
  VAR_8->intr_mode = VAR_5;
 else {

  if (VAR_8->flags & VAR_2 ||
   !FUNC_2(VAR_8)) {
   int VAR_9 = VAR_0;

   if (VAR_8->cfg_niq < (VAR_8->num_sqsets + VAR_9)) {
    FUNC_0(VAR_8, "Reducing sqsets to %d\n",
      VAR_8->cfg_niq - VAR_9);
    FUNC_3(VAR_8, VAR_8->cfg_niq - VAR_9);
   }
  }

  if ((VAR_7 == 1) && !FUNC_4(VAR_8->pdev))
   VAR_8->intr_mode = VAR_4;
  else
   VAR_8->intr_mode = VAR_3;
 }

 FUNC_0(VAR_8, "Using %s interrupt mode.\n",
  (VAR_8->intr_mode == VAR_5) ? "MSIX" :
  ((VAR_8->intr_mode == VAR_4) ? "MSI" : "INTx"));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jsm_channel {int ch_mistat; int ch_c_cflag; int ch_flags; int ch_flags_wait; struct jsm_board* ch_bd; } ;
struct jsm_board {int pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,char*,...) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct jsm_channel *VAR_5)
{
 struct jsm_board *VAR_6;

 int VAR_7 = 0;
 int VAR_8 = 0;

 FUNC_0(VAR_0, &VAR_5->ch_bd->pci_dev, "start\n");

 VAR_6 = VAR_5->ch_bd;
 if (!VAR_6)
  return;

 if (VAR_5->ch_mistat & VAR_4) {
  FUNC_0(VAR_0, &VAR_5->ch_bd->pci_dev, "mistat: %x D_CD: %x\n",
   VAR_5->ch_mistat, VAR_5->ch_mistat & VAR_4);
  VAR_8 = 1;
 }

 if (VAR_5->ch_c_cflag & VAR_3)
  VAR_7 = 1;

 FUNC_0(VAR_0, &VAR_5->ch_bd->pci_dev, "DCD: physical: %d virt: %d\n",
  VAR_8, VAR_7);




 if (((VAR_5->ch_flags & VAR_2) == 0) && (VAR_7 == 1)) {






  FUNC_0(VAR_0, &VAR_5->ch_bd->pci_dev, "carrier: virt DCD rose\n");

  if (FUNC_1(&(VAR_5->ch_flags_wait)))
   FUNC_2(&VAR_5->ch_flags_wait);
 }




 if (((VAR_5->ch_flags & VAR_1) == 0) && (VAR_8 == 1)) {






  FUNC_0(VAR_0, &VAR_5->ch_bd->pci_dev,
   "carrier: physical DCD rose\n");

  if (FUNC_1(&(VAR_5->ch_flags_wait)))
   FUNC_2(&VAR_5->ch_flags_wait);
 }
 if ((VAR_7 == 0) && ((VAR_5->ch_flags & VAR_1) != 0)
   && (VAR_8 == 0)) {
  if (FUNC_1(&(VAR_5->ch_flags_wait)))
   FUNC_2(&VAR_5->ch_flags_wait);
 }




 if (VAR_7 == 1)
  VAR_5->ch_flags |= VAR_2;
 else
  VAR_5->ch_flags &= ~VAR_2;

 if (VAR_8 == 1)
  VAR_5->ch_flags |= VAR_1;
 else
  VAR_5->ch_flags &= ~VAR_1;
}

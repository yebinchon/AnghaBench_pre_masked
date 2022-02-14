
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct bfad_s {struct bfad_s* trcmod; int list_entry; int pport; struct bfad_s* regdata; int bfad_lock; int bfa; int * bfad_tsk; int inst_no; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bfad_s*,int ) ;
 int FUNC_2 (struct bfad_s*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct bfad_s*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct pci_dev*,struct bfad_s*) ;
 int FUNC_6 (struct bfad_s*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct bfad_s* FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

void
FUNC_14(struct pci_dev *VAR_3)
{
 struct bfad_s *VAR_4 = FUNC_11(VAR_3);
 unsigned long VAR_5;

 FUNC_2(VAR_4, VAR_4->inst_no);

 FUNC_12(&VAR_4->bfad_lock, VAR_5);
 if (VAR_4->bfad_tsk != ((void*)0)) {
  FUNC_13(&VAR_4->bfad_lock, VAR_5);
  FUNC_7(VAR_4->bfad_tsk);
 } else {
  FUNC_13(&VAR_4->bfad_lock, VAR_5);
 }


 FUNC_1(VAR_4, VAR_0);


 FUNC_12(&VAR_4->bfad_lock, VAR_5);
 FUNC_0(&VAR_4->bfa);
 FUNC_13(&VAR_4->bfad_lock, VAR_5);
 FUNC_4(VAR_4);


 FUNC_6(VAR_4->regdata);
 FUNC_3(&VAR_4->pport);


 FUNC_9(&VAR_2);
 VAR_1--;
 FUNC_8(&VAR_4->list_entry);
 FUNC_10(&VAR_2);
 FUNC_5(VAR_3, VAR_4);

 FUNC_6(VAR_4->trcmod);
 FUNC_6(VAR_4);
}

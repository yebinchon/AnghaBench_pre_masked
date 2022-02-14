
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_scsi_qset {int eq_idx; } ;
struct csio_lnode {size_t portid; } ;
struct csio_ioreq {int eq_idx; int tmo; struct csio_lnode* lnode; } ;
struct csio_hw {struct csio_scsi_qset** sqset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct csio_ioreq*) ;
 int FUNC_1 (struct csio_ioreq*) ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(struct csio_hw *VAR_2, struct csio_ioreq *VAR_3, bool VAR_4)
{
 int VAR_5;
 int VAR_6 = FUNC_2();
 struct csio_lnode *VAR_7 = VAR_3->lnode;
 struct csio_scsi_qset *VAR_8 = &VAR_2->sqset[VAR_7->portid][VAR_6];

 VAR_3->tmo = VAR_0;






 VAR_3->eq_idx = VAR_8->eq_idx;

 if (VAR_4 == VAR_1)
  VAR_5 = FUNC_0(VAR_3);
 else
  VAR_5 = FUNC_1(VAR_3);

 return VAR_5;
}

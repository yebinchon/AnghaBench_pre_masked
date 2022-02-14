
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_rnode {int role; scalar_t__ nport_id; } ;
struct csio_lnode {int n_scsi_tgts; } ;
struct csio_hw {int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct csio_lnode*,void*) ;
 struct csio_hw* FUNC_1 (struct csio_lnode*) ;
 int FUNC_2 (struct csio_rnode*) ;
 struct csio_lnode* FUNC_3 (struct csio_rnode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct csio_rnode *VAR_2)
{
 struct csio_lnode *VAR_3 = FUNC_3(VAR_2);
 struct csio_hw *VAR_4 = FUNC_1(VAR_3);

 FUNC_5(&VAR_4->lock);
 FUNC_2(VAR_2);
 FUNC_4(&VAR_4->lock);

 if (VAR_2->role & VAR_0)
  VAR_3->n_scsi_tgts++;

 if (VAR_2->nport_id == VAR_1)
  FUNC_0(VAR_3, (void *) VAR_2);
}

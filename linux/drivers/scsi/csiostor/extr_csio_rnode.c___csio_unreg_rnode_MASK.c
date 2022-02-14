
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_rnode {int role; int host_cmpl_q; } ;
struct csio_lnode {int last_scan_ntgts; int n_scsi_tgts; } ;
struct csio_hw {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct csio_hw*,char*) ;
 int FUNC_2 (struct csio_hw*) ;
 struct csio_hw* FUNC_3 (struct csio_lnode*) ;
 struct csio_lnode* FUNC_4 (struct csio_rnode*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct csio_rnode*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_11(struct csio_rnode *VAR_2)
{
 struct csio_lnode *VAR_3 = FUNC_4(VAR_2);
 struct csio_hw *VAR_4 = FUNC_3(VAR_3);
 FUNC_0(VAR_1);
 int VAR_5 = 0;

 if (!FUNC_7(&VAR_2->host_cmpl_q)) {
  FUNC_1(VAR_4, "Returning completion queue I/Os\n");
  FUNC_8(&VAR_2->host_cmpl_q, &VAR_1);
  VAR_5 = 1;
 }

 if (VAR_2->role & VAR_0) {
  VAR_3->n_scsi_tgts--;
  VAR_3->last_scan_ntgts--;
 }

 FUNC_10(&VAR_4->lock);
 FUNC_6(VAR_2);
 FUNC_9(&VAR_4->lock);


 if (VAR_5)
  FUNC_5(FUNC_2(VAR_4), &VAR_1);

}

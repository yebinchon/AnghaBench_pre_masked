
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_scsim {struct csio_hw* hw; } ;
struct csio_scsi_level_data {struct csio_lnode* lnode; int level; } ;
struct csio_lnode {int cmpl_q; } ;
struct csio_hw {int lock; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct csio_hw*,char*,...) ;
 int FUNC_4 (struct csio_scsim*,int *,int) ;
 int FUNC_5 (struct csio_scsim*,int *) ;
 int FUNC_6 (struct csio_scsim*,struct csio_scsi_level_data*,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int
FUNC_11(struct csio_scsim *VAR_2, struct csio_lnode *VAR_3)
{
 struct csio_hw *VAR_4 = VAR_2->hw;
 struct csio_scsi_level_data VAR_5;
 int VAR_6;
 int VAR_7 = FUNC_1(60 * 1000, VAR_1);

 FUNC_3(VAR_4, "Gathering all SCSI I/Os on lnode %p\n", VAR_3);

 VAR_5.level = VAR_0;
 VAR_5.lnode = VAR_3;
 FUNC_2(&VAR_3->cmpl_q);
 FUNC_6(VAR_2, &VAR_5, &VAR_3->cmpl_q);


 if (FUNC_7(&VAR_3->cmpl_q))
  return 0;


 while (!FUNC_7(&VAR_3->cmpl_q) && VAR_7--) {
  FUNC_10(&VAR_4->lock);
  FUNC_8(VAR_1);
  FUNC_9(&VAR_4->lock);
 }


 if (FUNC_7(&VAR_3->cmpl_q))
  return 0;

 FUNC_3(VAR_4, "Some I/Os pending on ln:%p, aborting them..\n", VAR_3);


 VAR_6 = FUNC_4(VAR_2, &VAR_3->cmpl_q, 30000);
 if (VAR_6 != 0) {
  FUNC_3(VAR_4, "Some I/O aborts timed out, cleaning up..\n");
  FUNC_5(VAR_2, &VAR_3->cmpl_q);
 }

 FUNC_0(FUNC_7(&VAR_3->cmpl_q));

 return VAR_6;
}

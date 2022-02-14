
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_lnode {int dummy; } ;
struct csio_hw {int lock; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct csio_hw*) ;
 struct Scsi_Host* FUNC_1 (struct csio_lnode*) ;
 int FUNC_2 (struct csio_lnode*) ;
 struct csio_hw* FUNC_3 (struct csio_lnode*) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void
FUNC_9(struct csio_lnode *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_1(VAR_0);
 struct csio_hw *VAR_2 = FUNC_3(VAR_0);


 FUNC_4(VAR_1);


 FUNC_6(VAR_1);




 FUNC_7(&VAR_2->lock);
 FUNC_0(VAR_2);
 FUNC_8(&VAR_2->lock);

 FUNC_2(VAR_0);
 FUNC_5(VAR_1);
}

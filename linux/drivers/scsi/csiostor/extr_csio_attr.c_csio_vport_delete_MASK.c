
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_vport {scalar_t__ vport_state; scalar_t__ dd_data; } ;
struct csio_lnode {int dummy; } ;
struct csio_hw {int lock; } ;
struct Scsi_Host {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct csio_hw*,struct csio_lnode*) ;
 int FUNC_1 (struct csio_hw*) ;
 int FUNC_2 (struct csio_hw*) ;
 struct Scsi_Host* FUNC_3 (struct csio_lnode*) ;
 int FUNC_4 (struct csio_lnode*) ;
 struct csio_hw* FUNC_5 (struct csio_lnode*) ;
 int FUNC_6 (int ,struct csio_lnode*) ;
 int FUNC_7 (struct csio_lnode*) ;
 int FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (struct Scsi_Host*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(struct fc_vport *VAR_1)
{
 struct csio_lnode *VAR_2 = *(struct csio_lnode **)VAR_1->dd_data;
 struct Scsi_Host *VAR_3 = FUNC_3(VAR_2);
 struct csio_hw *VAR_4 = FUNC_5(VAR_2);
 int VAR_5;

 FUNC_10(&VAR_4->lock);
 VAR_5 = FUNC_2(VAR_4);
 FUNC_11(&VAR_4->lock);

 if (VAR_5) {
  FUNC_7(VAR_2);
  return 0;
 }


 FUNC_8(VAR_3);
 FUNC_10(&VAR_4->lock);
 FUNC_6(FUNC_1(VAR_4), VAR_2);
 FUNC_4(VAR_2);
 FUNC_11(&VAR_4->lock);
 FUNC_9(VAR_3);


 if (VAR_1->vport_state != VAR_0)
  FUNC_0(VAR_4, VAR_2);

 FUNC_7(VAR_2);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_vport {scalar_t__ dd_data; } ;
struct csio_lnode {int dummy; } ;
struct csio_hw {int lock; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct csio_hw*,struct csio_lnode*) ;
 int FUNC_1 (struct csio_hw*,struct csio_lnode*) ;
 int FUNC_2 (struct csio_hw*) ;
 int FUNC_3 (struct csio_lnode*,char*) ;
 struct Scsi_Host* FUNC_4 (struct csio_lnode*) ;
 int FUNC_5 (struct csio_lnode*) ;
 struct csio_hw* FUNC_6 (struct csio_lnode*) ;
 int FUNC_7 (int ,struct csio_lnode*) ;
 int FUNC_8 (struct fc_vport*,int ) ;
 int FUNC_9 (struct Scsi_Host*) ;
 int FUNC_10 (struct Scsi_Host*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(struct fc_vport *VAR_2, bool VAR_3)
{
 struct csio_lnode *VAR_4 = *(struct csio_lnode **)VAR_2->dd_data;
 struct Scsi_Host *VAR_5 = FUNC_4(VAR_4);
 struct csio_hw *VAR_6 = FUNC_6(VAR_4);


 if (VAR_3) {

  FUNC_9(VAR_5);
  FUNC_11(&VAR_6->lock);
  FUNC_7(FUNC_2(VAR_6), VAR_4);
  FUNC_5(VAR_4);
  FUNC_12(&VAR_6->lock);
  FUNC_10(VAR_5);


  FUNC_1(VAR_6, VAR_4);
  FUNC_8(VAR_2, VAR_0);
  FUNC_3(VAR_4, "vport disabled\n");
  return 0;
 } else {

  FUNC_8(VAR_2, VAR_1);
  if (FUNC_0(VAR_6, VAR_4)) {
   FUNC_3(VAR_4, "vport enabled failed.\n");
   return -1;
  }
  FUNC_3(VAR_4, "vport enabled\n");
  return 0;
 }
}

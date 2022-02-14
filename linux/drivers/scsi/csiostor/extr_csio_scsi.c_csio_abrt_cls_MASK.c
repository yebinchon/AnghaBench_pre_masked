
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct csio_scsim {int dummy; } ;
struct csio_lnode {struct csio_hw* hwp; } ;
struct csio_ioreq {struct csio_lnode* lnode; } ;
struct csio_hw {int dummy; } ;


 int FUNC_0 (struct csio_scsim*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct csio_hw*,struct csio_ioreq*,int ) ;
 struct csio_scsim* FUNC_2 (struct csio_hw*) ;
 int FUNC_3 (struct csio_lnode*) ;
 struct scsi_cmnd* FUNC_4 (struct csio_ioreq*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5(struct csio_ioreq *VAR_5, struct scsi_cmnd *VAR_6)
{
 struct csio_lnode *VAR_7 = VAR_5->lnode;
 struct csio_hw *VAR_8 = VAR_7->hwp;
 int VAR_9 = 0;
 struct csio_scsim *VAR_10 = FUNC_2(VAR_8);
 int VAR_11;

 if (FUNC_4(VAR_5) != VAR_6) {
  FUNC_0(VAR_10, VAR_3);
  return;
 }

 VAR_9 = FUNC_3(VAR_7);

 VAR_11 = FUNC_1(VAR_8, VAR_5, (VAR_9 ? VAR_0 : VAR_1));
 if (VAR_11 != 0) {
  if (VAR_9)
   FUNC_0(VAR_10, VAR_2);
  else
   FUNC_0(VAR_10, VAR_4);
 }
}

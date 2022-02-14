
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_cmnd {scalar_t__ sc_data_direction; } ;
struct scatterlist {int dummy; } ;
struct iscsi_task {TYPE_2__* hdr; struct scsi_cmnd* sc; struct beiscsi_io_task* dd_data; } ;
struct beiscsi_io_task {int num_sg; int libiscsi_itt; TYPE_4__* cmd_bhs; struct scsi_cmnd* scsi_cmnd; TYPE_1__* conn; } ;
struct beiscsi_hba {int (* iotask_fn ) (struct iscsi_task*,struct scatterlist*,int,unsigned int,unsigned int) ;} ;
struct TYPE_7__ {int itt; } ;
struct TYPE_8__ {TYPE_3__ iscsi_hdr; } ;
struct TYPE_6__ {scalar_t__ exp_statsn; } ;
struct TYPE_5__ {int login_in_progress; struct beiscsi_hba* phba; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct beiscsi_hba*) ;
 int FUNC_2 (struct beiscsi_hba*,int ,int,char*,int ,int ,unsigned int) ;
 int FUNC_3 (struct iscsi_task*) ;
 unsigned int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 struct scatterlist* FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct iscsi_task*,struct scatterlist*,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct iscsi_task *VAR_5)
{
 struct beiscsi_io_task *VAR_6 = VAR_5->dd_data;
 struct scsi_cmnd *VAR_7 = VAR_5->sc;
 struct beiscsi_hba *VAR_8;
 struct scatterlist *VAR_9;
 int VAR_10;
 unsigned int VAR_11 = 0, VAR_12 = 0;

 VAR_8 = VAR_6->conn->phba;





 if (!FUNC_1(VAR_8))
  return -VAR_3;

 if (!VAR_6->conn->login_in_progress)
  VAR_5->hdr->exp_statsn = 0;

 if (!VAR_7)
  return FUNC_3(VAR_5);

 VAR_6->scsi_cmnd = VAR_7;
 VAR_6->num_sg = 0;
 VAR_10 = FUNC_5(VAR_7);
 if (VAR_10 < 0) {
  FUNC_2(VAR_8, VAR_4,
       VAR_0 | VAR_1,
       "BM_%d : scsi_dma_map Failed "
       "Driver_ITT : 0x%x ITT : 0x%x Xferlen : 0x%x\n",
       FUNC_0(VAR_6->cmd_bhs->iscsi_hdr.itt),
       VAR_6->libiscsi_itt, FUNC_4(VAR_7));

  return VAR_10;
 }




 VAR_6->num_sg = VAR_10;
 VAR_12 = FUNC_4(VAR_7);
 VAR_9 = FUNC_6(VAR_7);
 if (VAR_7->sc_data_direction == VAR_2)
  VAR_11 = 1;
 else
  VAR_11 = 0;

 return VAR_8->iotask_fn(VAR_5, VAR_9, VAR_10, VAR_12, VAR_11);
}

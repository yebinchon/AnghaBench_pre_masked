
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct scsi_cmnd {int sc_data_direction; int cmd_len; int cmnd; TYPE_2__* device; } ;
struct fib {scalar_t__ hw_error_pa; scalar_t__ hw_fib_va; } ;
struct aac_hba_cmd_req {int byte1; void* error_length; void* error_ptr_lo; void* error_ptr_hi; void* data_length; int cdb; int it_nexus; void** lun; } ;
struct aac_dev {TYPE_3__** hba_map; } ;
struct TYPE_6__ {int rmw_nexus; } ;
struct TYPE_5__ {int lun; TYPE_1__* host; } ;
struct TYPE_4__ {scalar_t__ hostdata; } ;






 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct aac_hba_cmd_req*,int ,int) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*) ;

__attribute__((used)) static struct aac_hba_cmd_req *FUNC_7(struct fib *VAR_1,
       struct scsi_cmnd *VAR_2)
{
 struct aac_hba_cmd_req *VAR_3;
 struct aac_dev *VAR_4;
 int VAR_5, VAR_6;
 u64 VAR_7;

 VAR_4 = (struct aac_dev *)VAR_2->device->host->hostdata;

 VAR_3 = (struct aac_hba_cmd_req *)VAR_1->hw_fib_va;
 FUNC_3(VAR_3, 0, 96);

 switch (VAR_2->sc_data_direction) {
 case 128:
  VAR_3->byte1 = 2;
  break;
 case 130:
 case 131:
  VAR_3->byte1 = 1;
  break;
 case 129:
 default:
  break;
 }
 VAR_3->lun[1] = FUNC_1(VAR_2->device->lun);

 VAR_5 = FUNC_0(FUNC_4(VAR_2));
 VAR_6 = FUNC_5(VAR_2);
 VAR_3->it_nexus = VAR_4->hba_map[VAR_5][VAR_6].rmw_nexus;





 FUNC_2(VAR_3->cdb, VAR_2->cmnd, VAR_2->cmd_len);
 VAR_3->data_length = FUNC_1(FUNC_6(VAR_2));

 VAR_7 = (u64)VAR_1->hw_error_pa;
 VAR_3->error_ptr_hi = FUNC_1((u32)(VAR_7 >> 32));
 VAR_3->error_ptr_lo = FUNC_1((u32)(VAR_7 & 0xffffffff));
 VAR_3->error_length = FUNC_1(VAR_0);

 return VAR_3;
}

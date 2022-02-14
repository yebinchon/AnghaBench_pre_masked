
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct scsi_cmnd {TYPE_3__* device; } ;
struct fib {int hbacmd_size; scalar_t__ hw_sgl_pa; } ;
struct aac_hba_sgl {int dummy; } ;
struct aac_hba_cmd_req {int emb_data_desc_count; } ;
struct aac_dev {TYPE_1__* scsi_host_ptr; } ;
typedef int fib_callback ;
struct TYPE_6__ {TYPE_2__* host; } ;
struct TYPE_5__ {scalar_t__ hostdata; } ;
struct TYPE_4__ {int sg_tablesize; } ;


 int VAR_0 ;
 long FUNC_0 (struct scsi_cmnd*,struct aac_hba_cmd_req*,int ,int ) ;
 struct aac_hba_cmd_req* FUNC_1 (struct fib*,struct scsi_cmnd*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,struct fib*,int ,void*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct fib *VAR_2, struct scsi_cmnd *VAR_3)
{
 struct aac_hba_cmd_req *VAR_4 = FUNC_1(VAR_2, VAR_3);
 struct aac_dev *VAR_5;
 long VAR_6;

 VAR_5 = (struct aac_dev *)VAR_3->device->host->hostdata;

 VAR_6 = FUNC_0(VAR_3, VAR_4,
  VAR_5->scsi_host_ptr->sg_tablesize, (u64)VAR_2->hw_sgl_pa);
 if (VAR_6 < 0)
  return VAR_6;




 VAR_2->hbacmd_size = 64 + FUNC_3(VAR_4->emb_data_desc_count) *
  sizeof(struct aac_hba_sgl);

 return FUNC_2(VAR_0, VAR_2,
      (fib_callback) VAR_1,
      (void *) VAR_3);
}

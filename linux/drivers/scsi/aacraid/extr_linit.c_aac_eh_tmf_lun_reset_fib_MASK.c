
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct scsi_lun {int dummy; } ;
struct fib {int hbacmd_size; scalar_t__ hw_error_pa; scalar_t__ hw_fib_va; } ;
struct aac_hba_tm_req {void* error_length; void* error_ptr_lo; void* error_ptr_hi; scalar_t__ lun; int it_nexus; int tmf; } ;
struct aac_hba_map_info {int rmw_nexus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int,struct scsi_lun*) ;
 int FUNC_2 (struct aac_hba_tm_req*,int ,int) ;

__attribute__((used)) static u8 FUNC_3(struct aac_hba_map_info *VAR_3,
       struct fib *VAR_4, u64 VAR_5)
{
 struct aac_hba_tm_req *VAR_6;
 u64 VAR_7;


 VAR_6 = (struct aac_hba_tm_req *)VAR_4->hw_fib_va;
 FUNC_2(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->tmf = VAR_2;
 VAR_6->it_nexus = VAR_3->rmw_nexus;
 FUNC_1(VAR_5, (struct scsi_lun *)VAR_6->lun);

 VAR_7 = (u64)VAR_4->hw_error_pa;
 VAR_6->error_ptr_hi = FUNC_0
  ((u32)(VAR_7 >> 32));
 VAR_6->error_ptr_lo = FUNC_0
  ((u32)(VAR_7 & 0xffffffff));
 VAR_6->error_length = FUNC_0(VAR_0);
 VAR_4->hbacmd_size = sizeof(*VAR_6);

 return VAR_1;
}

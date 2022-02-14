
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct fib {int hbacmd_size; scalar_t__ hw_error_pa; scalar_t__ hw_fib_va; } ;
struct aac_hba_reset_req {void* error_length; void* error_ptr_lo; void* error_ptr_hi; int it_nexus; } ;
struct aac_hba_map_info {int rmw_nexus; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct aac_hba_reset_req*,int ,int) ;

__attribute__((used)) static u8 FUNC_2(struct aac_hba_map_info *VAR_2,
        struct fib *VAR_3)
{
 struct aac_hba_reset_req *VAR_4;
 u64 VAR_5;


 VAR_4 = (struct aac_hba_reset_req *)VAR_3->hw_fib_va;
 FUNC_1(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->it_nexus = VAR_2->rmw_nexus;

 VAR_5 = (u64)VAR_3->hw_error_pa;
 VAR_4->error_ptr_hi = FUNC_0((u32)(VAR_5 >> 32));
 VAR_4->error_ptr_lo = FUNC_0((u32)(VAR_5 & 0xffffffff));
 VAR_4->error_length = FUNC_0(VAR_0);
 VAR_3->hbacmd_size = sizeof(*VAR_4);

       return VAR_1;
}

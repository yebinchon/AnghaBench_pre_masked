
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct efx_ptp_data {TYPE_1__ (* nic_to_kernel_time ) (int,int,int ) ;} ;
struct efx_nic {int dummy; } ;
typedef int s32 ;
struct TYPE_4__ {int member_0; } ;
typedef TYPE_1__ ktime_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct efx_nic*) ;
 TYPE_1__ FUNC_2 (int,int,int ) ;

__attribute__((used)) static ktime_t
FUNC_3(struct efx_nic *VAR_0,
        struct efx_ptp_data *VAR_1,
        u32 VAR_2, u32 VAR_3,
        s32 VAR_4)
{
 ktime_t VAR_5 = { 0 };

 if (!(VAR_2 & 0x80000000)) {
  FUNC_0(VAR_2 >> 16);

  VAR_2 &= 0xffff;
  VAR_2 |= (FUNC_1(VAR_0) & 0xffff0000);

  VAR_5 = VAR_1->nic_to_kernel_time(VAR_2, VAR_3,
          VAR_4);
 }
 return VAR_5;
}

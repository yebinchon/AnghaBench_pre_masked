
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * addr; } ;
struct efx_nic {int num_mac_stats; TYPE_1__ stats_buffer; } ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efx_nic*,int ,int ) ;

void FUNC_1(struct efx_nic *VAR_2)
{
 __le64 *VAR_3 = VAR_2->stats_buffer.addr;

 VAR_3[VAR_2->num_mac_stats - 1] = VAR_0;

 FUNC_0(VAR_2, VAR_1, 0);
}

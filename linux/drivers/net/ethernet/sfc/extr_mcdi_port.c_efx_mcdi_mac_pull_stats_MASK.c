
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* addr; } ;
struct efx_nic {int num_mac_stats; TYPE_1__ stats_buffer; } ;
typedef scalar_t__ __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct efx_nic*,int ,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct efx_nic *VAR_4)
{
 __le64 *VAR_5 = VAR_4->stats_buffer.addr;
 int VAR_6 = VAR_0;

 VAR_5[VAR_4->num_mac_stats - 1] = VAR_2;
 FUNC_0(VAR_4, VAR_3, 0);

 while (VAR_5[VAR_4->num_mac_stats - 1] ==
    VAR_2 &&
   VAR_6-- != 0)
  FUNC_1(VAR_1);
}

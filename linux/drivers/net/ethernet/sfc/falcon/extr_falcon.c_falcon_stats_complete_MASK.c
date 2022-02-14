
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct falcon_nic_data {int stats_pending; int stats; } ;
struct TYPE_2__ {int addr; } ;
struct ef4_nic {int net_dev; TYPE_1__ stats_buffer; struct falcon_nic_data* nic_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ef4_nic*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ef4_nic*,int ,int ,char*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct ef4_nic *VAR_4)
{
 struct falcon_nic_data *VAR_5 = VAR_4->nic_data;

 if (!VAR_5->stats_pending)
  return;

 VAR_5->stats_pending = 0;
 if (FUNC_0(VAR_4)) {
  FUNC_3();
  FUNC_1(VAR_1, VAR_0,
         VAR_2, VAR_5->stats,
         VAR_4->stats_buffer.addr, 1);
 } else {
  FUNC_2(VAR_4, VAR_3, VAR_4->net_dev,
     "timed out waiting for statistics\n");
 }
}

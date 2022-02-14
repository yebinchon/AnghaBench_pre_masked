
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cmd; } ;
struct iwl_rx_packet {TYPE_1__ hdr; } ;
struct iwl_notif_wait_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct iwl_notif_wait_data *VAR_1,
       struct iwl_rx_packet *VAR_2, void *VAR_3)
{
 FUNC_0(VAR_2->hdr.cmd != VAR_0);

 return 1;
}

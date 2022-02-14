
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cmd; } ;
struct iwl_rx_packet {TYPE_1__ hdr; } ;
struct iwl_phy_db {int dummy; } ;
struct iwl_notif_wait_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct iwl_phy_db*,struct iwl_rx_packet*) ;

__attribute__((used)) static bool FUNC_2(struct iwl_notif_wait_data *VAR_2,
      struct iwl_rx_packet *VAR_3, void *VAR_4)
{
 struct iwl_phy_db *VAR_5 = VAR_4;

 if (VAR_3->hdr.cmd != VAR_0) {
  FUNC_0(VAR_3->hdr.cmd != VAR_1);
  return 1;
 }

 FUNC_0(FUNC_1(VAR_5, VAR_3));

 return 0;
}

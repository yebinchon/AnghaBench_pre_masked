
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int fw_heartbeat_counter; int seconds_since_last_heartbeat; int hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(scsi_qla_host_t *VAR_2)
{
 uint32_t VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_1(VAR_2->hw,
  VAR_0);

 if (VAR_3 == 0xffffffff) {
  FUNC_0(VAR_1, VAR_2, 0x6003,
      "FW heartbeat counter is 0xffffffff, "
      "returning status=%d.\n", VAR_4);
  return VAR_4;
 }
 if (VAR_2->fw_heartbeat_counter == VAR_3) {
  VAR_2->seconds_since_last_heartbeat++;

  if (VAR_2->seconds_since_last_heartbeat == 2) {
   VAR_2->seconds_since_last_heartbeat = 0;
   VAR_4 = 1;
  }
 } else
  VAR_2->seconds_since_last_heartbeat = 0;
 VAR_2->fw_heartbeat_counter = VAR_3;
 if (VAR_4)
  FUNC_0(VAR_1, VAR_2, 0x6004,
      "Returning status=%d.\n", VAR_4);
 return VAR_4;
}

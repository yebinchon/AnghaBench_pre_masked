
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {void* status; } ;
struct MPT3SAS_ADAPTER {int remove_host; scalar_t__ is_driver_loading; scalar_t__ wait_for_discovery_to_complete; TYPE_1__ port_enable_cmds; scalar_t__ start_scan_failed; scalar_t__ start_scan; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,char*,...) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*) ;
 struct MPT3SAS_ADAPTER* FUNC_3 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_4(struct Scsi_Host *VAR_3, unsigned long VAR_4)
{
 struct MPT3SAS_ADAPTER *VAR_5 = FUNC_3(VAR_3);

 if (VAR_2 > 0) {
  VAR_5->is_driver_loading = 0;
  VAR_5->wait_for_discovery_to_complete = 0;
  return 1;
 }

 if (VAR_4 >= (300 * VAR_0)) {
  VAR_5->port_enable_cmds.status = VAR_1;
  FUNC_1(VAR_5, "port enable: FAILED with timeout (timeout=300s)\n");
  VAR_5->is_driver_loading = 0;
  return 1;
 }

 if (VAR_5->start_scan)
  return 0;

 if (VAR_5->start_scan_failed) {
  FUNC_1(VAR_5, "port enable: FAILED with (ioc_status=0x%08x)\n",
    VAR_5->start_scan_failed);
  VAR_5->is_driver_loading = 0;
  VAR_5->wait_for_discovery_to_complete = 0;
  VAR_5->remove_host = 1;
  return 1;
 }

 FUNC_1(VAR_5, "port enable: SUCCESS\n");
 VAR_5->port_enable_cmds.status = VAR_1;

 if (VAR_5->wait_for_discovery_to_complete) {
  VAR_5->wait_for_discovery_to_complete = 0;
  FUNC_0(VAR_5);
 }
 FUNC_2(VAR_5);
 VAR_5->is_driver_loading = 0;
 return 1;
}

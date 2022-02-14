
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* firmware_tag; int major; int minor; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 TYPE_1__ VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 int FUNC_0 (int,int ,TYPE_1__*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_3(int VAR_12)
{
 int VAR_13;


 FUNC_1("Getting Backend Firmware Version\n");

 FUNC_2((char *)&VAR_8.firmware_tag, VAR_10,
  VAR_2);

retry_fw_version:
 VAR_13 = FUNC_0(VAR_12, VAR_0, &VAR_8);
 if (VAR_13 < 0) {
  FUNC_1("Failed to get backend firmware version: %s (%d)\n",
   VAR_11, VAR_13);
  return -1;
 }

 FUNC_1("Backend Firmware tag (%s), major (%d), minor (%d), status (%d)\n",
  VAR_8.firmware_tag, VAR_8.major,
  VAR_8.minor, VAR_8.status);

 if (VAR_8.status == VAR_6)
  goto retry_fw_version;

 if ((VAR_8.status != VAR_7)
     && (VAR_8.status != VAR_5)) {
  FUNC_1("Failed to get backend firmware version: %s (%d)\n",
   VAR_11, VAR_8.status);
  return -1;
 }


 FUNC_1("Updating Backend Firmware\n");

 FUNC_2((char *)&VAR_9.firmware_tag, VAR_10,
  VAR_2);

retry_fw_update:
 VAR_9.status = 0;

 VAR_13 = FUNC_0(VAR_12, VAR_1, &VAR_9);
 if (VAR_13 < 0) {
  FUNC_1("Failed to load backend firmware: %s (%d)\n", VAR_11, VAR_13);
  return -1;
 }

 if (VAR_9.status == VAR_3) {
  FUNC_1("Retrying firmware update: %d\n", VAR_9.status);
  goto retry_fw_update;
 }

 if (VAR_9.status != VAR_4) {
  FUNC_1("Load status says loading failed: %d\n",
   VAR_9.status);
 } else {
  FUNC_1("Backend Firmware (%s) Load done: status: %d\n",
    VAR_10, VAR_9.status);
 }

 return 0;
}

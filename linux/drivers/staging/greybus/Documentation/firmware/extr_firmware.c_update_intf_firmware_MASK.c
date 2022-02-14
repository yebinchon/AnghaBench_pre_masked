
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* firmware_tag; int major; int minor; } ;
struct TYPE_3__ {scalar_t__ status; int major; int minor; int firmware_tag; int load_method; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 TYPE_2__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_0 (int,int ,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_3(int VAR_11)
{
 int VAR_12;


 FUNC_1("Get Interface Firmware Version\n");

 VAR_12 = FUNC_0(VAR_11, VAR_0, &VAR_9);
 if (VAR_12 < 0) {
  FUNC_1("Failed to get interface firmware version: %s (%d)\n",
   VAR_8, VAR_12);
  return -1;
 }

 FUNC_1("Interface Firmware tag (%s), major (%d), minor (%d)\n",
  VAR_9.firmware_tag, VAR_9.major,
  VAR_9.minor);


 FUNC_1("Loading Interface Firmware\n");

 VAR_10.load_method = VAR_4;
 VAR_10.status = 0;
 VAR_10.major = 0;
 VAR_10.minor = 0;

 FUNC_2((char *)&VAR_10.firmware_tag, VAR_7,
  VAR_3);

 VAR_12 = FUNC_0(VAR_11, VAR_1, &VAR_10);
 if (VAR_12 < 0) {
  FUNC_1("Failed to load interface firmware: %s (%d)\n", VAR_8,
   VAR_12);
  return -1;
 }

 if (VAR_10.status != VAR_6 &&
     VAR_10.status != VAR_5) {
  FUNC_1("Load status says loading failed: %d\n",
   VAR_10.status);
  return -1;
 }

 FUNC_1("Interface Firmware (%s) Load done: major: %d, minor: %d, status: %d\n",
  VAR_7, VAR_10.major, VAR_10.minor,
  VAR_10.status);


 FUNC_1("Initiate Mode switch\n");

 VAR_12 = FUNC_0(VAR_11, VAR_2);
 if (VAR_12 < 0)
  FUNC_1("Failed to initiate mode-switch (%d)\n", VAR_12);

 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_fw_mgmt_interface_fw_version_response {int firmware_tag; int minor; int major; } ;
struct gb_connection {int dummy; } ;
struct fw_mgmt_ioc_get_intf_version {char* firmware_tag; void* minor; void* major; } ;
struct fw_mgmt {int parent; struct gb_connection* connection; } ;
typedef int response ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct gb_connection*,int ,int *,int ,struct gb_fw_mgmt_interface_fw_version_response*,int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct fw_mgmt *VAR_2,
  struct fw_mgmt_ioc_get_intf_version *VAR_3)
{
 struct gb_connection *VAR_4 = VAR_2->connection;
 struct gb_fw_mgmt_interface_fw_version_response VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4,
    VAR_1, ((void*)0), 0,
    &VAR_5, sizeof(VAR_5));
 if (VAR_6) {
  FUNC_0(VAR_2->parent,
   "failed to get interface firmware version (%d)\n", VAR_6);
  return VAR_6;
 }

 VAR_3->major = FUNC_2(VAR_5.major);
 VAR_3->minor = FUNC_2(VAR_5.minor);

 FUNC_3(VAR_3->firmware_tag, VAR_5.firmware_tag,
  VAR_0);





 if (VAR_3->firmware_tag[VAR_0 - 1] != '\0') {
  FUNC_0(VAR_2->parent,
   "fw-version: firmware-tag is not NULL terminated\n");
  VAR_3->firmware_tag[VAR_0 - 1] = '\0';
 }

 return 0;
}

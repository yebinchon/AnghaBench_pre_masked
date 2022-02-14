
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct gb_fw_mgmt_load_and_validate_fw_request {char* firmware_tag; int request_id; scalar_t__ load_method; } ;
struct fw_mgmt {int intf_fw_request_id; int intf_fw_loaded; int parent; int id_map; int connection; } ;
typedef int request ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,struct gb_fw_mgmt_load_and_validate_fw_request*,int,int *,int ) ;
 int FUNC_2 (int *,int,int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_5(struct fw_mgmt *VAR_6,
            u8 VAR_7, const char *VAR_8)
{
 struct gb_fw_mgmt_load_and_validate_fw_request VAR_9;
 int VAR_10;

 if (VAR_7 != VAR_3 &&
     VAR_7 != VAR_2) {
  FUNC_0(VAR_6->parent,
   "invalid load-method (%d)\n", VAR_7);
  return -VAR_0;
 }

 VAR_9.load_method = VAR_7;
 FUNC_4(VAR_9.firmware_tag, VAR_8, VAR_1);





 if (VAR_9.firmware_tag[VAR_1 - 1] != '\0') {
  FUNC_0(VAR_6->parent, "load-and-validate: firmware-tag is not NULL terminated\n");
  return -VAR_0;
 }


 VAR_10 = FUNC_2(&VAR_6->id_map, 1, 256, VAR_5);
 if (VAR_10 < 0) {
  FUNC_0(VAR_6->parent, "failed to allocate request id (%d)\n",
   VAR_10);
  return VAR_10;
 }

 VAR_6->intf_fw_request_id = VAR_10;
 VAR_6->intf_fw_loaded = 0;
 VAR_9.request_id = VAR_10;

 VAR_10 = FUNC_1(VAR_6->connection,
    VAR_4, &VAR_9,
    sizeof(VAR_9), ((void*)0), 0);
 if (VAR_10) {
  FUNC_3(&VAR_6->id_map,
      VAR_6->intf_fw_request_id);
  VAR_6->intf_fw_request_id = 0;
  FUNC_0(VAR_6->parent,
   "load and validate firmware request failed (%d)\n",
   VAR_10);
  return VAR_10;
 }

 return 0;
}

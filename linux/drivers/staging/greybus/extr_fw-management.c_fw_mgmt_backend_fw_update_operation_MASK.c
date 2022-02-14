
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_fw_mgmt_backend_fw_update_request {char* firmware_tag; int request_id; } ;
struct fw_mgmt {int backend_fw_request_id; int parent; int id_map; int connection; } ;
typedef int request ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,struct gb_fw_mgmt_backend_fw_update_request*,int,int *,int ) ;
 int FUNC_2 (int *,int,int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct fw_mgmt *VAR_4,
            char *VAR_5)
{
 struct gb_fw_mgmt_backend_fw_update_request VAR_6;
 int VAR_7;

 FUNC_4(VAR_6.firmware_tag, VAR_5, VAR_1);





 if (VAR_6.firmware_tag[VAR_1 - 1] != '\0') {
  FUNC_0(VAR_4->parent, "backend-update: firmware-tag is not NULL terminated\n");
  return -VAR_0;
 }


 VAR_7 = FUNC_2(&VAR_4->id_map, 1, 256, VAR_3);
 if (VAR_7 < 0) {
  FUNC_0(VAR_4->parent, "failed to allocate request id (%d)\n",
   VAR_7);
  return VAR_7;
 }

 VAR_4->backend_fw_request_id = VAR_7;
 VAR_6.request_id = VAR_7;

 VAR_7 = FUNC_1(VAR_4->connection,
    VAR_2, &VAR_6,
    sizeof(VAR_6), ((void*)0), 0);
 if (VAR_7) {
  FUNC_3(&VAR_4->id_map,
      VAR_4->backend_fw_request_id);
  VAR_4->backend_fw_request_id = 0;
  FUNC_0(VAR_4->parent,
   "backend %s firmware update request failed (%d)\n", VAR_5,
   VAR_7);
  return VAR_7;
 }

 return 0;
}

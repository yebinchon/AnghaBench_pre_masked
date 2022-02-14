
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct gb_operation {TYPE_1__* request; struct gb_connection* connection; } ;
struct gb_fw_download_release_firmware_request {int firmware_id; } ;
struct gb_connection {int dummy; } ;
struct fw_request {int dwork; } ;
struct fw_download {int parent; } ;
struct TYPE_2__ {int payload_size; struct gb_fw_download_release_firmware_request* payload; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (struct fw_download*,struct fw_request*) ;
 struct fw_download* FUNC_4 (struct gb_connection*) ;
 struct fw_request* FUNC_5 (struct fw_download*,int ) ;
 int FUNC_6 (struct fw_request*) ;

__attribute__((used)) static int FUNC_7(struct gb_operation *VAR_1)
{
 struct gb_connection *VAR_2 = VAR_1->connection;
 struct fw_download *VAR_3 = FUNC_4(VAR_2);
 struct gb_fw_download_release_firmware_request *VAR_4;
 struct fw_request *VAR_5;
 u8 VAR_6;

 if (VAR_1->request->payload_size != sizeof(*VAR_4)) {
  FUNC_2(VAR_3->parent,
   "Illegal size of release firmware request (%zu %zu)\n",
   VAR_1->request->payload_size, sizeof(*VAR_4));
  return -VAR_0;
 }

 VAR_4 = VAR_1->request->payload;
 VAR_6 = VAR_4->firmware_id;

 VAR_5 = FUNC_5(VAR_3, VAR_6);
 if (!VAR_5) {
  FUNC_2(VAR_3->parent,
   "firmware not available for id: %02u\n", VAR_6);
  return -VAR_0;
 }

 FUNC_0(&VAR_5->dwork);

 FUNC_3(VAR_3, VAR_5);
 FUNC_6(VAR_5);

 FUNC_1(VAR_3->parent, "release firmware\n");

 return 0;
}

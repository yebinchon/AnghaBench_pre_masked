
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gb_operation {TYPE_2__* response; TYPE_1__* request; struct gb_connection* connection; } ;
struct gb_fw_download_find_firmware_response {int size; int firmware_id; } ;
struct gb_fw_download_find_firmware_request {scalar_t__ firmware_tag; } ;
struct gb_connection {int dummy; } ;
struct fw_request {TYPE_3__* fw; int firmware_id; } ;
struct fw_download {int parent; } ;
struct TYPE_6__ {int size; } ;
struct TYPE_5__ {struct gb_fw_download_find_firmware_response* payload; } ;
struct TYPE_4__ {int payload_size; struct gb_fw_download_find_firmware_request* payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct fw_request*) ;
 int FUNC_1 (struct fw_request*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*,...) ;
 struct fw_request* FUNC_5 (struct fw_download*,char const*) ;
 int FUNC_6 (struct fw_download*,struct fw_request*) ;
 struct fw_download* FUNC_7 (struct gb_connection*) ;
 int FUNC_8 (struct gb_operation*,int,int ) ;
 scalar_t__ FUNC_9 (char const*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct gb_operation *VAR_4)
{
 struct gb_connection *VAR_5 = VAR_4->connection;
 struct fw_download *VAR_6 = FUNC_7(VAR_5);
 struct gb_fw_download_find_firmware_request *VAR_7;
 struct gb_fw_download_find_firmware_response *VAR_8;
 struct fw_request *VAR_9;
 const char *VAR_10;

 if (VAR_4->request->payload_size != sizeof(*VAR_7)) {
  FUNC_4(VAR_6->parent,
   "illegal size of find firmware request (%zu != %zu)\n",
   VAR_4->request->payload_size, sizeof(*VAR_7));
  return -VAR_0;
 }

 VAR_7 = VAR_4->request->payload;
 VAR_10 = (const char *)VAR_7->firmware_tag;


 if (FUNC_9(VAR_10, VAR_2) ==
     VAR_2) {
  FUNC_4(VAR_6->parent,
   "firmware-tag is not null-terminated\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_5(VAR_6, VAR_10);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 if (!FUNC_8(VAR_4, sizeof(*VAR_8), VAR_3)) {
  FUNC_4(VAR_6->parent, "error allocating response\n");
  FUNC_6(VAR_6, VAR_9);
  return -VAR_1;
 }

 VAR_8 = VAR_4->response->payload;
 VAR_8->firmware_id = VAR_9->firmware_id;
 VAR_8->size = FUNC_2(VAR_9->fw->size);

 FUNC_3(VAR_6->parent,
  "firmware size is %zu bytes\n", VAR_9->fw->size);

 return 0;
}

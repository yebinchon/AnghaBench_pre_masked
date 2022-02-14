
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct gb_operation {TYPE_2__* response; TYPE_1__* request; struct gb_connection* connection; } ;
struct gb_fw_download_fetch_firmware_response {int data; } ;
struct gb_fw_download_fetch_firmware_request {int firmware_id; int size; int offset; } ;
struct gb_connection {int dummy; } ;
struct fw_request {int dwork; struct firmware* fw; scalar_t__ disabled; } ;
struct fw_download {int parent; } ;
struct firmware {unsigned int size; scalar_t__ data; } ;
struct TYPE_4__ {struct gb_fw_download_fetch_firmware_response* payload; } ;
struct TYPE_3__ {int payload_size; struct gb_fw_download_fetch_firmware_request* payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct fw_request*) ;
 struct fw_download* FUNC_4 (struct gb_connection*) ;
 int FUNC_5 (struct gb_operation*,int,int ) ;
 struct fw_request* FUNC_6 (struct fw_download*,int ) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__,unsigned int) ;
 int FUNC_9 (struct fw_request*) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct gb_operation *VAR_5)
{
 struct gb_connection *VAR_6 = VAR_5->connection;
 struct fw_download *VAR_7 = FUNC_4(VAR_6);
 struct gb_fw_download_fetch_firmware_request *VAR_8;
 struct gb_fw_download_fetch_firmware_response *VAR_9;
 struct fw_request *VAR_10;
 const struct firmware *VAR_11;
 unsigned int VAR_12, VAR_13;
 u8 VAR_14;
 int VAR_15 = 0;

 if (VAR_5->request->payload_size != sizeof(*VAR_8)) {
  FUNC_2(VAR_7->parent,
   "Illegal size of fetch firmware request (%zu %zu)\n",
   VAR_5->request->payload_size, sizeof(*VAR_8));
  return -VAR_0;
 }

 VAR_8 = VAR_5->request->payload;
 VAR_12 = FUNC_7(VAR_8->offset);
 VAR_13 = FUNC_7(VAR_8->size);
 VAR_14 = VAR_8->firmware_id;

 VAR_10 = FUNC_6(VAR_7, VAR_14);
 if (!VAR_10) {
  FUNC_2(VAR_7->parent,
   "firmware not available for id: %02u\n", VAR_14);
  return -VAR_0;
 }


 FUNC_0(&VAR_10->dwork);


 if (VAR_10->disabled) {
  VAR_15 = -VAR_2;
  goto put_fw;
 }






 VAR_15 = FUNC_3(VAR_10);
 if (VAR_15)
  goto put_fw;

 VAR_11 = VAR_10->fw;

 if (VAR_12 >= VAR_11->size || VAR_13 > VAR_11->size - VAR_12) {
  FUNC_2(VAR_7->parent,
   "bad fetch firmware request (offs = %u, size = %u)\n",
   VAR_12, VAR_13);
  VAR_15 = -VAR_0;
  goto put_fw;
 }

 if (!FUNC_5(VAR_5, sizeof(*VAR_9) + VAR_13,
      VAR_3)) {
  FUNC_2(VAR_7->parent,
   "error allocating fetch firmware response\n");
  VAR_15 = -VAR_1;
  goto put_fw;
 }

 VAR_9 = VAR_5->response->payload;
 FUNC_8(VAR_9->data, VAR_11->data + VAR_12, VAR_13);

 FUNC_1(VAR_7->parent,
  "responding with firmware (offs = %u, size = %u)\n", VAR_12,
  VAR_13);


 FUNC_10(&VAR_10->dwork, VAR_4);

put_fw:
 FUNC_9(VAR_10);

 return VAR_15;
}

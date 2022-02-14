
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_operation {struct gb_message* request; int type; int connection; } ;
struct gb_message {int payload_size; struct gb_camera_metadata_request* payload; } ;
struct gb_camera_metadata_request {int stream; int frame_number; int request_id; } ;
struct gb_camera {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gb_camera* FUNC_0 (int ) ;
 int FUNC_1 (struct gb_camera*,char*,int ,int ,int ) ;
 int FUNC_2 (struct gb_camera*,char*,int,...) ;

__attribute__((used)) static int FUNC_3(struct gb_operation *VAR_2)
{
 struct gb_camera *VAR_3 = FUNC_0(VAR_2->connection);
 struct gb_camera_metadata_request *VAR_4;
 struct gb_message *VAR_5;

 if (VAR_2->type != VAR_1) {
  FUNC_2(VAR_3, "Unsupported unsolicited event: %u\n", VAR_2->type);
  return -VAR_0;
 }

 VAR_5 = VAR_2->request;

 if (VAR_5->payload_size < sizeof(*VAR_4)) {
  FUNC_2(VAR_3, "Wrong event size received (%zu < %zu)\n",
    VAR_5->payload_size, sizeof(*VAR_4));
  return -VAR_0;
 }

 VAR_4 = VAR_5->payload;

 FUNC_1(VAR_3, "received metadata for request %u, frame %u, stream %u\n",
   VAR_4->request_id, VAR_4->frame_number, VAR_4->stream);

 return 0;
}

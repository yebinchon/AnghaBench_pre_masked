
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wilco_ec_response {int data_size; int data; scalar_t__ result; int checksum; } ;
struct wilco_ec_request {int dummy; } ;
struct wilco_ec_message {int request_size; int flags; int response_size; int response_data; scalar_t__* request_data; } ;
struct wilco_ec_device {int dev; struct wilco_ec_response* data_buffer; TYPE_2__* io_data; TYPE_1__* io_command; } ;
struct TYPE_4__ {int start; } ;
struct TYPE_3__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int,int,scalar_t__*) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct wilco_ec_device*) ;

__attribute__((used)) static int FUNC_6(struct wilco_ec_device *VAR_9,
        struct wilco_ec_message *VAR_10,
        struct wilco_ec_request *VAR_11)
{
 struct wilco_ec_response *VAR_12;
 u8 VAR_13;
 u8 VAR_14;


 FUNC_0(VAR_7, 0, sizeof(*VAR_11), (u8 *)VAR_11);
 FUNC_0(VAR_7, sizeof(*VAR_11), VAR_10->request_size,
     VAR_10->request_data);


 FUNC_4(VAR_2, VAR_9->io_command->start);


 if (VAR_10->flags & VAR_8) {
  FUNC_1(VAR_9->dev, "EC does not respond to this command\n");
  return 0;
 }


 if (FUNC_5(VAR_9)) {
  FUNC_1(VAR_9->dev, "response timed out\n");
  return -VAR_5;
 }


 VAR_14 = FUNC_2(VAR_9->io_data->start);
 if (VAR_14) {
  FUNC_1(VAR_9->dev, "bad response: 0x%02x\n", VAR_14);
  return -VAR_3;
 }


 VAR_12 = VAR_9->data_buffer;
 VAR_13 = FUNC_0(VAR_6, 0,
         sizeof(*VAR_12) + VAR_1,
         (u8 *)VAR_12);
 if (VAR_13) {
  FUNC_1(VAR_9->dev, "bad packet checksum 0x%02x\n", VAR_12->checksum);
  return -VAR_0;
 }

 if (VAR_12->result) {
  FUNC_1(VAR_9->dev, "EC reported failure: 0x%02x\n", VAR_12->result);
  return -VAR_0;
 }

 if (VAR_12->data_size != VAR_1) {
  FUNC_1(VAR_9->dev, "unexpected packet size (%u != %u)",
   VAR_12->data_size, VAR_1);
  return -VAR_4;
 }

 if (VAR_12->data_size < VAR_10->response_size) {
  FUNC_1(VAR_9->dev, "EC didn't return enough data (%u < %zu)",
   VAR_12->data_size, VAR_10->response_size);
  return -VAR_4;
 }

 FUNC_3(VAR_10->response_data, VAR_12->data, VAR_10->response_size);

 return VAR_12->data_size;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mei_msg_hdr {int length; } ;
struct mei_hbm_cl_cmd {int dummy; } ;
struct TYPE_3__ {int minor_version; int major_version; } ;
struct mei_device {scalar_t__ hbm_state; int dev; int dev_state; int init_clients_timer; int me_clients_map; int hbm_f_dr_supported; int wait_hbm_start; TYPE_1__ version; scalar_t__ rd_msg_buf; } ;
struct mei_bus_message {int hbm_cmd; } ;
struct hbm_props_response {int me_addr; int status; } ;
struct TYPE_4__ {int minor_version; int major_version; } ;
struct hbm_host_version_response {TYPE_2__ me_max_version; int host_version_supported; } ;
struct hbm_host_enum_response {int valid_addresses; } ;
struct hbm_flow_control {int dummy; } ;
struct hbm_dma_setup_response {int status; } ;
struct hbm_client_connect_request {int dummy; } ;
struct hbm_add_client_request {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

 scalar_t__ VAR_10 ;

 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;


 scalar_t__ VAR_14 ;
 void* VAR_15 ;



 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct mei_device*) ;
 int FUNC_8 (struct mei_device*) ;
 int FUNC_9 (struct mei_device*) ;
 int FUNC_10 (struct mei_device*,struct mei_hbm_cl_cmd*) ;
 int FUNC_11 (struct mei_device*,struct mei_hbm_cl_cmd*,int ) ;
 int FUNC_12 (struct mei_device*,struct hbm_flow_control*) ;
 int FUNC_13 (struct mei_device*) ;
 int FUNC_14 (struct mei_device*) ;
 int FUNC_15 (struct mei_device*) ;
 int FUNC_16 (struct mei_device*,struct hbm_add_client_request*) ;
 int FUNC_17 (struct mei_device*,struct hbm_client_connect_request*) ;
 int FUNC_18 (struct mei_device*,struct hbm_props_response*) ;
 int FUNC_19 (struct mei_device*) ;
 int FUNC_20 (struct mei_device*) ;
 int FUNC_21 (struct mei_device*,int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (struct mei_device*) ;
 int FUNC_24 (struct mei_device*) ;
 int FUNC_25 (struct mei_device*,scalar_t__,int) ;
 int FUNC_26 (int ,int ,int) ;
 int FUNC_27 (struct mei_hbm_cl_cmd*) ;
 int FUNC_28 (int *) ;

int FUNC_29(struct mei_device *VAR_16, struct mei_msg_hdr *VAR_17)
{
 struct mei_bus_message *VAR_18;
 struct hbm_host_version_response *VAR_19;
 struct hbm_props_response *VAR_20;
 struct hbm_host_enum_response *VAR_21;
 struct hbm_dma_setup_response *VAR_22;
 struct hbm_add_client_request *VAR_23;
 int VAR_24;

 struct mei_hbm_cl_cmd *VAR_25;
 struct hbm_client_connect_request *VAR_26;
 struct hbm_flow_control *VAR_27;


 FUNC_0(VAR_17->length >= sizeof(VAR_16->rd_msg_buf));
 FUNC_25(VAR_16, VAR_16->rd_msg_buf, VAR_17->length);
 VAR_18 = (struct mei_bus_message *)VAR_16->rd_msg_buf;
 VAR_25 = (struct mei_hbm_cl_cmd *)VAR_18;




 if (VAR_16->hbm_state == VAR_13) {
  FUNC_3(VAR_16->dev, "hbm: state is idle ignore spurious messages\n");
  return 0;
 }

 switch (VAR_18->hbm_cmd) {
 case 137:
  FUNC_3(VAR_16->dev, "hbm: start: response message received.\n");

  VAR_16->init_clients_timer = 0;

  VAR_19 = (struct hbm_host_version_response *)VAR_18;

  FUNC_3(VAR_16->dev, "HBM VERSION: DRIVER=%02d:%02d DEVICE=%02d:%02d\n",
    VAR_2, VAR_3,
    VAR_19->me_max_version.major_version,
    VAR_19->me_max_version.minor_version);

  if (VAR_19->host_version_supported) {
   VAR_16->version.major_version = VAR_2;
   VAR_16->version.minor_version = VAR_3;
  } else {
   VAR_16->version.major_version =
    VAR_19->me_max_version.major_version;
   VAR_16->version.minor_version =
    VAR_19->me_max_version.minor_version;
  }

  if (!FUNC_24(VAR_16)) {
   FUNC_6(VAR_16->dev, "hbm: start: version mismatch - stopping the driver.\n");

   VAR_16->hbm_state = VAR_15;
   if (FUNC_23(VAR_16)) {
    FUNC_4(VAR_16->dev, "hbm: start: failed to send stop request\n");
    return -VAR_0;
   }
   break;
  }

  FUNC_13(VAR_16);

  if (VAR_16->dev_state != VAR_4 ||
      VAR_16->hbm_state != VAR_14) {
   FUNC_4(VAR_16->dev, "hbm: start: state mismatch, [%d, %d]\n",
    VAR_16->dev_state, VAR_16->hbm_state);
   return -VAR_1;
  }

  if (VAR_16->hbm_f_dr_supported) {
   if (FUNC_8(VAR_16))
    FUNC_5(VAR_16->dev, "running w/o dma ring\n");
   if (FUNC_7(VAR_16)) {
    if (FUNC_14(VAR_16))
     return -VAR_0;

    FUNC_28(&VAR_16->wait_hbm_start);
    break;
   }
  }

  VAR_16->hbm_f_dr_supported = 0;
  FUNC_9(VAR_16);

  if (FUNC_15(VAR_16))
   return -VAR_0;

  FUNC_28(&VAR_16->wait_hbm_start);
  break;

 case 133:
  FUNC_3(VAR_16->dev, "hbm: dma setup response: message received.\n");

  VAR_16->init_clients_timer = 0;

  if (VAR_16->hbm_state != VAR_11) {
   FUNC_4(VAR_16->dev, "hbm: dma setup response: state mismatch, [%d, %d]\n",
    VAR_16->dev_state, VAR_16->hbm_state);
   return -VAR_1;
  }

  VAR_22 = (struct hbm_dma_setup_response *)VAR_18;

  if (VAR_22->status) {
   u8 VAR_28 = VAR_22->status;

   if (VAR_28 == VAR_9) {
    FUNC_3(VAR_16->dev, "hbm: dma setup not allowed\n");
   } else {
    FUNC_5(VAR_16->dev, "hbm: dma setup response: failure = %d %s\n",
      VAR_28,
      FUNC_22(VAR_28));
   }
   VAR_16->hbm_f_dr_supported = 0;
   FUNC_9(VAR_16);
  }

  if (FUNC_15(VAR_16))
   return -VAR_0;
  break;

 case 142:
  FUNC_3(VAR_16->dev, "hbm: client connect response: message received.\n");
  FUNC_11(VAR_16, VAR_25, VAR_6);
  break;

 case 140:
  FUNC_3(VAR_16->dev, "hbm: client disconnect response: message received.\n");
  FUNC_11(VAR_16, VAR_25, VAR_7);
  break;

 case 135:
  FUNC_3(VAR_16->dev, "hbm: client flow control response: message received.\n");

  VAR_27 = (struct hbm_flow_control *)VAR_18;
  FUNC_12(VAR_16, VAR_27);
  break;

 case 130:
  FUNC_3(VAR_16->dev, "hbm: power gate isolation entry response received\n");
  VAR_24 = FUNC_19(VAR_16);
  if (VAR_24)
   return VAR_24;
  break;

 case 129:
  FUNC_3(VAR_16->dev, "hbm: power gate isolation exit request received\n");
  VAR_24 = FUNC_20(VAR_16);
  if (VAR_24)
   return VAR_24;
  break;

 case 139:
  FUNC_3(VAR_16->dev, "hbm: properties response: message received.\n");

  VAR_16->init_clients_timer = 0;

  if (VAR_16->dev_state != VAR_4 ||
      VAR_16->hbm_state != VAR_10) {
   FUNC_4(VAR_16->dev, "hbm: properties response: state mismatch, [%d, %d]\n",
    VAR_16->dev_state, VAR_16->hbm_state);
   return -VAR_1;
  }

  VAR_20 = (struct hbm_props_response *)VAR_18;

  if (VAR_20->status == VAR_8) {
   FUNC_3(VAR_16->dev, "hbm: properties response: %d CLIENT_NOT_FOUND\n",
    VAR_20->me_addr);
  } else if (VAR_20->status) {
   FUNC_4(VAR_16->dev, "hbm: properties response: wrong status = %d %s\n",
    VAR_20->status,
    FUNC_22(VAR_20->status));
   return -VAR_1;
  } else {
   FUNC_18(VAR_16, VAR_20);
  }


  if (FUNC_21(VAR_16, VAR_20->me_addr + 1))
   return -VAR_0;

  break;

 case 138:
  FUNC_3(VAR_16->dev, "hbm: enumeration response: message received\n");

  VAR_16->init_clients_timer = 0;

  VAR_21 = (struct hbm_host_enum_response *) VAR_18;
  FUNC_1(sizeof(VAR_16->me_clients_map)
    < sizeof(VAR_21->valid_addresses));
  FUNC_26(VAR_16->me_clients_map, VAR_21->valid_addresses,
    sizeof(VAR_21->valid_addresses));

  if (VAR_16->dev_state != VAR_4 ||
      VAR_16->hbm_state != VAR_12) {
   FUNC_4(VAR_16->dev, "hbm: enumeration response: state mismatch, [%d, %d]\n",
    VAR_16->dev_state, VAR_16->hbm_state);
   return -VAR_1;
  }

  VAR_16->hbm_state = VAR_10;


  if (FUNC_21(VAR_16, 0))
   return -VAR_0;

  break;

 case 136:
  FUNC_3(VAR_16->dev, "hbm: stop response: message received\n");

  VAR_16->init_clients_timer = 0;

  if (VAR_16->hbm_state != VAR_15) {
   FUNC_4(VAR_16->dev, "hbm: stop response: state mismatch, [%d, %d]\n",
    VAR_16->dev_state, VAR_16->hbm_state);
   return -VAR_1;
  }

  VAR_16->dev_state = VAR_5;
  FUNC_5(VAR_16->dev, "hbm: stop response: resetting.\n");

  return -VAR_1;
  break;

 case 141:
  FUNC_3(VAR_16->dev, "hbm: disconnect request: message received\n");

  VAR_26 = (struct hbm_client_connect_request *)VAR_18;
  FUNC_17(VAR_16, VAR_26);
  break;

 case 128:
  FUNC_3(VAR_16->dev, "hbm: stop request: message received\n");
  VAR_16->hbm_state = VAR_15;
  if (FUNC_23(VAR_16)) {
   FUNC_4(VAR_16->dev, "hbm: stop request: failed to send stop request\n");
   return -VAR_0;
  }
  break;

 case 134:
  FUNC_3(VAR_16->dev, "hbm: add client request received\n");




  if (VAR_16->hbm_state <= VAR_12 ||
      VAR_16->hbm_state >= VAR_15) {
   FUNC_4(VAR_16->dev, "hbm: add client: state mismatch, [%d, %d]\n",
    VAR_16->dev_state, VAR_16->hbm_state);
   return -VAR_1;
  }
  VAR_23 = (struct hbm_add_client_request *)VAR_18;
  VAR_24 = FUNC_16(VAR_16, VAR_23);
  if (VAR_24) {
   FUNC_4(VAR_16->dev, "hbm: add client: failed to send response %d\n",
    VAR_24);
   return -VAR_0;
  }
  FUNC_3(VAR_16->dev, "hbm: add client request processed\n");
  break;

 case 131:
  FUNC_3(VAR_16->dev, "hbm: notify response received\n");
  FUNC_11(VAR_16, VAR_25, FUNC_27(VAR_25));
  break;

 case 132:
  FUNC_3(VAR_16->dev, "hbm: notification\n");
  FUNC_10(VAR_16, VAR_25);
  break;

 default:
  FUNC_2(1, "hbm: wrong command %d\n", VAR_18->hbm_cmd);
  return -VAR_1;

 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_connection {int dummy; } ;
struct gb_camera_csi_params {unsigned int clk_freq; int num_lanes; } ;
struct gb_camera_configure_streams_response {int data_rate; } ;
struct gb_camera {struct gb_connection* data_connection; TYPE_1__* connection; int data_cport_id; int bundle; } ;
struct ap_csi_config_request {int csi_id; int num_lanes; unsigned int csi_clk_freq; int max_pkt_size; scalar_t__ flags; } ;
typedef int csi_cfg ;
struct TYPE_2__ {int hd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct gb_connection*) ;
 int FUNC_1 (struct gb_connection*) ;
 unsigned int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (struct gb_camera*,struct gb_camera_configure_streams_response*) ;
 int FUNC_4 (struct gb_camera*,int) ;
 struct gb_connection* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct gb_connection*) ;
 int FUNC_7 (struct gb_connection*) ;
 int FUNC_8 (struct gb_connection*) ;
 int FUNC_9 (struct gb_connection*,struct gb_camera*) ;
 int FUNC_10 (int ,struct ap_csi_config_request*,int,int ,int) ;
 int FUNC_11 (struct gb_camera*,char*) ;
 int FUNC_12 (struct ap_csi_config_request*,int ,int) ;

__attribute__((used)) static int FUNC_13(struct gb_camera *VAR_8,
  struct gb_camera_configure_streams_response *VAR_9,
  struct gb_camera_csi_params *VAR_10)
{
 struct ap_csi_config_request VAR_11;
 struct gb_connection *VAR_12;
 unsigned int VAR_13;
 int VAR_14;





 VAR_12 = FUNC_5(VAR_8->bundle, VAR_8->data_cport_id,
           VAR_7 |
           VAR_6);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_8->data_connection = VAR_12;
 FUNC_9(VAR_12, VAR_8);

 VAR_14 = FUNC_8(VAR_12);
 if (VAR_14)
  goto error_conn_destroy;


 VAR_14 = FUNC_4(VAR_8, 1);
 if (VAR_14 < 0)
  goto error_conn_disable;







 FUNC_12(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.csi_id = 1;
 VAR_11.flags = 0;
 VAR_11.num_lanes = VAR_5;

 VAR_13 = VAR_9->data_rate / 2 / VAR_5;
 VAR_13 = FUNC_2(VAR_13 + VAR_2,
    VAR_4,
    VAR_3);
 VAR_11.csi_clk_freq = VAR_13;

 VAR_14 = FUNC_3(VAR_8, VAR_9);
 if (VAR_14 < 0) {
  VAR_14 = -VAR_0;
  goto error_power;
 }
 VAR_11.max_pkt_size = VAR_14;

 VAR_14 = FUNC_10(VAR_8->connection->hd, &VAR_11,
      sizeof(VAR_11),
      VAR_1, 0);
 if (VAR_14 < 0) {
  FUNC_11(VAR_8, "failed to start the CSI transmitter\n");
  goto error_power;
 }

 if (VAR_10) {
  VAR_10->clk_freq = VAR_11.csi_clk_freq;
  VAR_10->num_lanes = VAR_11.num_lanes;
 }

 return 0;

error_power:
 FUNC_4(VAR_8, 0);
error_conn_disable:
 FUNC_7(VAR_8->data_connection);
error_conn_destroy:
 FUNC_6(VAR_8->data_connection);
 VAR_8->data_connection = ((void*)0);
 return VAR_14;
}

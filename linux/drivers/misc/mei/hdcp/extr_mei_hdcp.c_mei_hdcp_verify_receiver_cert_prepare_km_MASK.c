
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int verify_rxcert_out ;
typedef int verify_rxcert_in ;
typedef int u8 ;
struct TYPE_10__ {scalar_t__ status; } ;
struct TYPE_7__ {int member_0; } ;
struct wired_cmd_verify_receiver_cert_out {int ekm_buff; scalar_t__ km_stored; TYPE_5__ header; TYPE_2__ member_0; } ;
struct TYPE_9__ {int physical_port; int integrated_port_type; } ;
struct TYPE_8__ {int buffer_len; scalar_t__ status; int command_id; int api_version; } ;
struct TYPE_6__ {int member_0; } ;
struct wired_cmd_verify_receiver_cert_in {int rx_caps; int r_rx; int cert_rx; TYPE_4__ port; TYPE_3__ header; TYPE_1__ member_0; } ;
struct mei_cl_device {int dummy; } ;
struct hdcp_port_data {int port; int port_type; } ;
struct hdcp2_ake_stored_km {int dummy; } ;
struct hdcp2_ake_send_cert {int * rx_caps; int r_rx; int cert_rx; } ;
struct hdcp2_ake_no_stored_km {int e_kpub_km; int msg_id; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct device*,char*,scalar_t__,...) ;
 scalar_t__ FUNC_1 (struct mei_cl_device*,int *,int) ;
 scalar_t__ FUNC_2 (struct mei_cl_device*,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int) ;
 struct mei_cl_device* FUNC_5 (struct device*) ;

__attribute__((used)) static int
FUNC_6(struct device *VAR_10,
      struct hdcp_port_data *VAR_11,
      struct hdcp2_ake_send_cert *VAR_12,
      bool *VAR_13,
      struct hdcp2_ake_no_stored_km
        *VAR_14,
      size_t *VAR_15)
{
 struct wired_cmd_verify_receiver_cert_in VAR_16 = { 0 };
 struct wired_cmd_verify_receiver_cert_out VAR_17 = { 0 };
 struct mei_cl_device *VAR_18;
 ssize_t VAR_19;

 if (!VAR_10 || !VAR_11 || !VAR_12 || !VAR_13 || !VAR_14 || !VAR_15)
  return -VAR_0;

 VAR_18 = FUNC_5(VAR_10);

 VAR_16.header.api_version = VAR_6;
 VAR_16.header.command_id = VAR_9;
 VAR_16.header.status = VAR_7;
 VAR_16.header.buffer_len =
    VAR_8;

 VAR_16.port.integrated_port_type = VAR_11->port_type;
 VAR_16.port.physical_port = FUNC_3(VAR_11->port);

 VAR_16.cert_rx = VAR_12->cert_rx;
 FUNC_4(VAR_16.r_rx, &VAR_12->r_rx, VAR_4);
 FUNC_4(VAR_16.rx_caps, VAR_12->rx_caps, VAR_5);

 VAR_19 = FUNC_2(VAR_18, (u8 *)&VAR_16,
         sizeof(VAR_16));
 if (VAR_19 < 0) {
  FUNC_0(VAR_10, "mei_cldev_send failed: %zd\n", VAR_19);
  return VAR_19;
 }

 VAR_19 = FUNC_1(VAR_18, (u8 *)&VAR_17,
         sizeof(VAR_17));
 if (VAR_19 < 0) {
  FUNC_0(VAR_10, "mei_cldev_recv failed: %zd\n", VAR_19);
  return VAR_19;
 }

 if (VAR_17.header.status != VAR_7) {
  FUNC_0(VAR_10, "ME cmd 0x%08X Failed. Status: 0x%X\n",
   VAR_9,
   VAR_17.header.status);
  return -VAR_1;
 }

 *VAR_13 = !!VAR_17.km_stored;
 if (VAR_17.km_stored) {
  VAR_14->msg_id = VAR_3;
  *VAR_15 = sizeof(struct hdcp2_ake_stored_km);
 } else {
  VAR_14->msg_id = VAR_2;
  *VAR_15 = sizeof(struct hdcp2_ake_no_stored_km);
 }

 FUNC_4(VAR_14->e_kpub_km, &VAR_17.ekm_buff,
        sizeof(VAR_17.ekm_buff));

 return 0;
}

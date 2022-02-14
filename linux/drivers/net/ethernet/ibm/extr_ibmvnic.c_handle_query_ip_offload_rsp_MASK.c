
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* ioba; void* len; int cmd; int first; } ;
union ibmvnic_crq {TYPE_1__ control_ip_offload; } ;
struct ibmvnic_query_ip_offload_buffer {unsigned long ipv4_chksum; unsigned long ipv6_chksum; unsigned long tcp_ipv4_chksum; unsigned long tcp_ipv6_chksum; unsigned long udp_ipv4_chksum; unsigned long udp_ipv6_chksum; unsigned long large_tx_ipv4; unsigned long large_tx_ipv6; unsigned long large_rx_ipv4; unsigned long large_rx_ipv6; unsigned long max_ipv4_header_size; unsigned long max_ipv6_header_size; unsigned long max_tcp_header_size; unsigned long max_udp_header_size; unsigned long max_large_tx_size; unsigned long max_large_rx_size; unsigned long ipv6_extension_header; unsigned long tcp_pseudosum_req; unsigned long num_ipv6_ext_headers; unsigned long off_ipv6_ext_headers; } ;
struct TYPE_8__ {unsigned long ipv4_chksum; unsigned long ipv6_chksum; unsigned long tcp_ipv4_chksum; unsigned long udp_ipv4_chksum; unsigned long tcp_ipv6_chksum; unsigned long udp_ipv6_chksum; unsigned long large_tx_ipv4; unsigned long large_tx_ipv6; scalar_t__ large_rx_ipv6; scalar_t__ large_rx_ipv4; void* version; void* len; } ;
struct ibmvnic_adapter {int ip_offload_ctrl_tok; scalar_t__ state; TYPE_3__* netdev; TYPE_4__ ip_offload_ctrl; int ip_offload_tok; struct ibmvnic_query_ip_offload_buffer ip_offload_buf; TYPE_2__* vdev; } ;
struct device {int dummy; } ;
typedef int netdev_features_t ;
typedef int crq ;
struct TYPE_7__ {int hw_features; int features; int wanted_features; } ;
struct TYPE_6__ {struct device dev; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,TYPE_4__*,int,int ) ;
 scalar_t__ FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct device*,int ,int,int ) ;
 int FUNC_5 (struct ibmvnic_adapter*,union ibmvnic_crq*) ;
 int FUNC_6 (union ibmvnic_crq*,int ,int) ;
 int FUNC_7 (TYPE_3__*,char*,...) ;

__attribute__((used)) static void FUNC_8(struct ibmvnic_adapter *VAR_14)
{
 struct device *VAR_15 = &VAR_14->vdev->dev;
 struct ibmvnic_query_ip_offload_buffer *VAR_16 = &VAR_14->ip_offload_buf;
 netdev_features_t VAR_17 = 0;
 union ibmvnic_crq VAR_18;
 int VAR_19;

 FUNC_4(VAR_15, VAR_14->ip_offload_tok,
    sizeof(VAR_14->ip_offload_buf), VAR_1);

 FUNC_7(VAR_14->netdev, "Query IP Offload Buffer:\n");
 for (VAR_19 = 0; VAR_19 < (sizeof(VAR_14->ip_offload_buf) - 1) / 8 + 1; VAR_19++)
  FUNC_7(VAR_14->netdev, "%016lx\n",
      ((unsigned long int *)(VAR_16))[VAR_19]);

 FUNC_7(VAR_14->netdev, "ipv4_chksum = %d\n", VAR_16->ipv4_chksum);
 FUNC_7(VAR_14->netdev, "ipv6_chksum = %d\n", VAR_16->ipv6_chksum);
 FUNC_7(VAR_14->netdev, "tcp_ipv4_chksum = %d\n",
     VAR_16->tcp_ipv4_chksum);
 FUNC_7(VAR_14->netdev, "tcp_ipv6_chksum = %d\n",
     VAR_16->tcp_ipv6_chksum);
 FUNC_7(VAR_14->netdev, "udp_ipv4_chksum = %d\n",
     VAR_16->udp_ipv4_chksum);
 FUNC_7(VAR_14->netdev, "udp_ipv6_chksum = %d\n",
     VAR_16->udp_ipv6_chksum);
 FUNC_7(VAR_14->netdev, "large_tx_ipv4 = %d\n",
     VAR_16->large_tx_ipv4);
 FUNC_7(VAR_14->netdev, "large_tx_ipv6 = %d\n",
     VAR_16->large_tx_ipv6);
 FUNC_7(VAR_14->netdev, "large_rx_ipv4 = %d\n",
     VAR_16->large_rx_ipv4);
 FUNC_7(VAR_14->netdev, "large_rx_ipv6 = %d\n",
     VAR_16->large_rx_ipv6);
 FUNC_7(VAR_14->netdev, "max_ipv4_hdr_sz = %d\n",
     VAR_16->max_ipv4_header_size);
 FUNC_7(VAR_14->netdev, "max_ipv6_hdr_sz = %d\n",
     VAR_16->max_ipv6_header_size);
 FUNC_7(VAR_14->netdev, "max_tcp_hdr_size = %d\n",
     VAR_16->max_tcp_header_size);
 FUNC_7(VAR_14->netdev, "max_udp_hdr_size = %d\n",
     VAR_16->max_udp_header_size);
 FUNC_7(VAR_14->netdev, "max_large_tx_size = %d\n",
     VAR_16->max_large_tx_size);
 FUNC_7(VAR_14->netdev, "max_large_rx_size = %d\n",
     VAR_16->max_large_rx_size);
 FUNC_7(VAR_14->netdev, "ipv6_ext_hdr = %d\n",
     VAR_16->ipv6_extension_header);
 FUNC_7(VAR_14->netdev, "tcp_pseudosum_req = %d\n",
     VAR_16->tcp_pseudosum_req);
 FUNC_7(VAR_14->netdev, "num_ipv6_ext_hd = %d\n",
     VAR_16->num_ipv6_ext_headers);
 FUNC_7(VAR_14->netdev, "off_ipv6_ext_hd = %d\n",
     VAR_16->off_ipv6_ext_headers);

 VAR_14->ip_offload_ctrl_tok =
     FUNC_2(VAR_15, &VAR_14->ip_offload_ctrl,
      sizeof(VAR_14->ip_offload_ctrl), VAR_2);

 if (FUNC_3(VAR_15, VAR_14->ip_offload_ctrl_tok)) {
  FUNC_1(VAR_15, "Couldn't map ip offload control buffer\n");
  return;
 }

 VAR_14->ip_offload_ctrl.len =
     FUNC_0(sizeof(VAR_14->ip_offload_ctrl));
 VAR_14->ip_offload_ctrl.version = FUNC_0(VAR_4);
 VAR_14->ip_offload_ctrl.ipv4_chksum = VAR_16->ipv4_chksum;
 VAR_14->ip_offload_ctrl.ipv6_chksum = VAR_16->ipv6_chksum;
 VAR_14->ip_offload_ctrl.tcp_ipv4_chksum = VAR_16->tcp_ipv4_chksum;
 VAR_14->ip_offload_ctrl.udp_ipv4_chksum = VAR_16->udp_ipv4_chksum;
 VAR_14->ip_offload_ctrl.tcp_ipv6_chksum = VAR_16->tcp_ipv6_chksum;
 VAR_14->ip_offload_ctrl.udp_ipv6_chksum = VAR_16->udp_ipv6_chksum;
 VAR_14->ip_offload_ctrl.large_tx_ipv4 = VAR_16->large_tx_ipv4;
 VAR_14->ip_offload_ctrl.large_tx_ipv6 = VAR_16->large_tx_ipv6;


 VAR_14->ip_offload_ctrl.large_rx_ipv4 = 0;
 VAR_14->ip_offload_ctrl.large_rx_ipv6 = 0;

 if (VAR_14->state != VAR_13) {
  VAR_17 = VAR_14->netdev->hw_features;
  VAR_14->netdev->hw_features = 0;
 }

 VAR_14->netdev->hw_features = VAR_10 | VAR_6 | VAR_5;

 if (VAR_16->tcp_ipv4_chksum || VAR_16->udp_ipv4_chksum)
  VAR_14->netdev->hw_features |= VAR_8;

 if (VAR_16->tcp_ipv6_chksum || VAR_16->udp_ipv6_chksum)
  VAR_14->netdev->hw_features |= VAR_7;

 if ((VAR_14->netdev->features &
     (VAR_8 | VAR_7)))
  VAR_14->netdev->hw_features |= VAR_9;

 if (VAR_16->large_tx_ipv4)
  VAR_14->netdev->hw_features |= VAR_11;
 if (VAR_16->large_tx_ipv6)
  VAR_14->netdev->hw_features |= VAR_12;

 if (VAR_14->state == VAR_13) {
  VAR_14->netdev->features |= VAR_14->netdev->hw_features;
 } else if (VAR_17 != VAR_14->netdev->hw_features) {
  netdev_features_t VAR_20 = 0;


  VAR_14->netdev->features &= VAR_14->netdev->hw_features;

  VAR_20 = (VAR_17 ^ VAR_14->netdev->hw_features) &
   VAR_14->netdev->hw_features;
  VAR_14->netdev->features |=
    VAR_20 & VAR_14->netdev->wanted_features;
 }

 FUNC_6(&VAR_18, 0, sizeof(VAR_18));
 VAR_18.control_ip_offload.first = VAR_3;
 VAR_18.control_ip_offload.cmd = VAR_0;
 VAR_18.control_ip_offload.len =
     FUNC_0(sizeof(VAR_14->ip_offload_ctrl));
 VAR_18.control_ip_offload.ioba = FUNC_0(VAR_14->ip_offload_ctrl_tok);
 FUNC_5(VAR_14, &VAR_18);
}

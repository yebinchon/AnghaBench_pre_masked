
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int status_buf_offset; int status_buflen; int status; } ;
struct TYPE_10__ {int status; int req_id; } ;
struct TYPE_9__ {int info_buf_offset; int info_buflen; int status; int req_id; } ;
struct TYPE_8__ {int pkt_alignment_factor; int max_pkt_per_msg; int max_xfer_size; int dev_flags; int minor_ver; int major_ver; int status; int req_id; } ;
struct TYPE_7__ {int per_pkt_info_len; int per_pkt_info_offset; int oob_data_len; int oob_data_offset; int num_oob_data_elements; int data_len; int data_offset; } ;
struct TYPE_12__ {TYPE_5__ indicate_status; TYPE_4__ set_complete; TYPE_3__ query_complete; TYPE_2__ init_complete; TYPE_1__ pkt; } ;
struct rndis_message {int ndis_msg_type; int msg_len; TYPE_6__ msg; } ;
struct net_device {int dummy; } ;







 int FUNC_0 (struct net_device*,char*,int,int ,...) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
          const struct rndis_message *VAR_1)
{
 switch (VAR_1->ndis_msg_type) {
 case 130:
  FUNC_0(VAR_0, "RNDIS_MSG_PACKET (len %u, "
      "data offset %u data len %u, # oob %u, "
      "oob offset %u, oob len %u, pkt offset %u, "
      "pkt len %u\n",
      VAR_1->msg_len,
      VAR_1->msg.pkt.data_offset,
      VAR_1->msg.pkt.data_len,
      VAR_1->msg.pkt.num_oob_data_elements,
      VAR_1->msg.pkt.oob_data_offset,
      VAR_1->msg.pkt.oob_data_len,
      VAR_1->msg.pkt.per_pkt_info_offset,
      VAR_1->msg.pkt.per_pkt_info_len);
  break;

 case 131:
  FUNC_0(VAR_0, "RNDIS_MSG_INIT_C "
   "(len %u, id 0x%x, status 0x%x, major %d, minor %d, "
   "device flags %d, max xfer size 0x%x, max pkts %u, "
   "pkt aligned %u)\n",
   VAR_1->msg_len,
   VAR_1->msg.init_complete.req_id,
   VAR_1->msg.init_complete.status,
   VAR_1->msg.init_complete.major_ver,
   VAR_1->msg.init_complete.minor_ver,
   VAR_1->msg.init_complete.dev_flags,
   VAR_1->msg.init_complete.max_xfer_size,
   VAR_1->msg.init_complete.
      max_pkt_per_msg,
   VAR_1->msg.init_complete.
      pkt_alignment_factor);
  break;

 case 129:
  FUNC_0(VAR_0, "RNDIS_MSG_QUERY_C "
   "(len %u, id 0x%x, status 0x%x, buf len %u, "
   "buf offset %u)\n",
   VAR_1->msg_len,
   VAR_1->msg.query_complete.req_id,
   VAR_1->msg.query_complete.status,
   VAR_1->msg.query_complete.
      info_buflen,
   VAR_1->msg.query_complete.
      info_buf_offset);
  break;

 case 128:
  FUNC_0(VAR_0,
   "RNDIS_MSG_SET_C (len %u, id 0x%x, status 0x%x)\n",
   VAR_1->msg_len,
   VAR_1->msg.set_complete.req_id,
   VAR_1->msg.set_complete.status);
  break;

 case 132:
  FUNC_0(VAR_0, "RNDIS_MSG_INDICATE "
   "(len %u, status 0x%x, buf len %u, buf offset %u)\n",
   VAR_1->msg_len,
   VAR_1->msg.indicate_status.status,
   VAR_1->msg.indicate_status.status_buflen,
   VAR_1->msg.indicate_status.status_buf_offset);
  break;

 default:
  FUNC_0(VAR_0, "0x%x (len %u)\n",
   VAR_1->ndis_msg_type,
   VAR_1->msg_len);
  break;
 }
}

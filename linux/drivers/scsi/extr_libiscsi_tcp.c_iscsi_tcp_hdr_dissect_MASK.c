
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nents; int sgl; } ;
struct scsi_data_buffer {TYPE_2__ table; } ;
struct iscsi_tcp_task {int data_offset; } ;
struct TYPE_10__ {scalar_t__ datalen; int segment; } ;
struct iscsi_tcp_conn {TYPE_5__ in; struct ahash_request* rx_hash; } ;
struct iscsi_task {void* last_xfer; TYPE_3__* sc; struct iscsi_tcp_task* dd_data; } ;
struct iscsi_hdr {int hlength; int opcode; int itt; int dlength; } ;
struct iscsi_conn {TYPE_4__* session; int datadgst_en; scalar_t__ max_recv_dlength; struct iscsi_tcp_conn* dd_data; } ;
struct ahash_request {int dummy; } ;
struct TYPE_9__ {int frwd_lock; int back_lock; TYPE_1__* tt; } ;
struct TYPE_8__ {int sc_data_direction; struct scsi_data_buffer sdb; } ;
struct TYPE_6__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_conn*,char*,int,int,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct iscsi_conn*,struct iscsi_hdr*,int *,int ) ;
 int FUNC_2 (struct iscsi_conn*,struct iscsi_hdr*,int *,int ) ;
 int FUNC_3 (int ,struct iscsi_conn*,char*,scalar_t__,scalar_t__,...) ;
 struct iscsi_task* FUNC_4 (struct iscsi_conn*,int ) ;
 int FUNC_5 (int *,int ,int ,int ,scalar_t__,int ,struct ahash_request*) ;
 int FUNC_6 (struct iscsi_conn*,struct iscsi_task*) ;
 int FUNC_7 (struct iscsi_tcp_conn*) ;
 int FUNC_8 (struct iscsi_tcp_conn*) ;
 int VAR_10 ;
 int FUNC_9 (struct iscsi_conn*,struct iscsi_task*) ;
 int FUNC_10 (struct iscsi_conn*,int ) ;
 void* VAR_11 ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int
FUNC_14(struct iscsi_conn *VAR_12, struct iscsi_hdr *VAR_13)
{
 int VAR_14 = 0, VAR_15, VAR_16;
 struct iscsi_tcp_conn *VAR_17 = VAR_12->dd_data;
 struct iscsi_task *VAR_18;


 VAR_17->in.datalen = FUNC_11(VAR_13->dlength);
 if (VAR_17->in.datalen > VAR_12->max_recv_dlength) {
  FUNC_3(VAR_9, VAR_12,
      "iscsi_tcp: datalen %d > %d\n",
      VAR_17->in.datalen, VAR_12->max_recv_dlength);
  return VAR_6;
 }




 VAR_16 = VAR_13->hlength << 2;

 VAR_15 = VAR_13->opcode & VAR_8;

 VAR_14 = FUNC_10(VAR_12, VAR_13->itt);
 if (VAR_14)
  return VAR_14;

 FUNC_0(VAR_12, "opcode 0x%x ahslen %d datalen %d\n",
        VAR_15, VAR_16, VAR_17->in.datalen);

 switch(VAR_15) {
 case 130:
  FUNC_12(&VAR_12->session->back_lock);
  VAR_18 = FUNC_4(VAR_12, VAR_13->itt);
  if (!VAR_18)
   VAR_14 = VAR_4;
  else
   VAR_14 = FUNC_6(VAR_12, VAR_18);
  if (VAR_14) {
   FUNC_13(&VAR_12->session->back_lock);
   break;
  }

  if (VAR_17->in.datalen) {
   struct iscsi_tcp_task *VAR_19 = VAR_18->dd_data;
   struct ahash_request *VAR_20 = ((void*)0);
   struct scsi_data_buffer *VAR_21 = &VAR_18->sc->sdb;
   if (VAR_12->datadgst_en &&
       !(VAR_12->session->tt->caps & VAR_0))
    VAR_20 = VAR_17->rx_hash;

   FUNC_0(VAR_12, "iscsi_tcp_begin_data_in( "
         "offset=%d, datalen=%d)\n",
          VAR_19->data_offset,
          VAR_17->in.datalen);
   VAR_18->last_xfer = VAR_11;
   VAR_14 = FUNC_5(&VAR_17->in.segment,
         VAR_21->table.sgl,
         VAR_21->table.nents,
         VAR_19->data_offset,
         VAR_17->in.datalen,
         VAR_10,
         VAR_20);
   FUNC_13(&VAR_12->session->back_lock);
   return VAR_14;
  }
  VAR_14 = FUNC_1(VAR_12, VAR_13, ((void*)0), 0);
  FUNC_13(&VAR_12->session->back_lock);
  break;
 case 131:
  if (VAR_17->in.datalen) {
   FUNC_7(VAR_17);
   return 0;
  }
  VAR_14 = FUNC_2(VAR_12, VAR_13, ((void*)0), 0);
  break;
 case 133:
  FUNC_12(&VAR_12->session->back_lock);
  VAR_18 = FUNC_4(VAR_12, VAR_13->itt);
  FUNC_13(&VAR_12->session->back_lock);
  if (!VAR_18)
   VAR_14 = VAR_4;
  else if (VAR_16)
   VAR_14 = VAR_3;
  else if (VAR_18->sc->sc_data_direction == VAR_1) {
   VAR_18->last_xfer = VAR_11;
   FUNC_12(&VAR_12->session->frwd_lock);
   VAR_14 = FUNC_9(VAR_12, VAR_18);
   FUNC_13(&VAR_12->session->frwd_lock);
  } else
   VAR_14 = VAR_7;
  break;
 case 136:
 case 128:
 case 132:
 case 137:





  if (VAR_2 < VAR_17->in.datalen) {
   FUNC_3(VAR_9, VAR_12,
       "iscsi_tcp: received buffer of "
       "len %u but conn buffer is only %u "
       "(opcode %0x)\n",
       VAR_17->in.datalen,
       VAR_2, VAR_15);
   VAR_14 = VAR_7;
   break;
  }




  if (VAR_17->in.datalen) {
   FUNC_7(VAR_17);
   return 0;
  }

 case 135:
 case 134:
 case 129:
  VAR_14 = FUNC_2(VAR_12, VAR_13, ((void*)0), 0);
  break;
 default:
  VAR_14 = VAR_5;
  break;
 }

 if (VAR_14 == 0) {


  if (VAR_17->in.datalen)
   return VAR_7;
  FUNC_8(VAR_17);
 }

 return VAR_14;
}

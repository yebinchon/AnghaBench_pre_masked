
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct iscsi_task {void* last_xfer; } ;
struct iscsi_session {int back_lock; int frwd_lock; } ;
struct iscsi_nopin {int dummy; } ;
struct iscsi_hdr {int opcode; scalar_t__ itt; int statsn; int ttt; } ;
struct iscsi_conn {int cls_conn; int exp_statsn; int id; void* last_recv; struct iscsi_session* session; } ;


 int FUNC_0 (struct iscsi_session*,char*,int,int ,unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct iscsi_task*,int ) ;
 int FUNC_5 (struct iscsi_conn*,struct iscsi_hdr*,struct iscsi_task*) ;
 int FUNC_6 (struct iscsi_conn*,struct iscsi_hdr*,char*,int) ;
 struct iscsi_task* FUNC_7 (struct iscsi_conn*,scalar_t__) ;
 struct iscsi_task* FUNC_8 (struct iscsi_conn*,scalar_t__) ;
 int FUNC_9 (struct iscsi_task*,struct iscsi_nopin*,char*,int) ;
 scalar_t__ FUNC_10 (int ,struct iscsi_hdr*,char*,int) ;
 int FUNC_11 (struct iscsi_conn*,struct iscsi_hdr*,struct iscsi_task*,char*,int) ;
 int FUNC_12 (struct iscsi_conn*,struct iscsi_nopin*) ;
 int FUNC_13 (struct iscsi_conn*,struct iscsi_hdr*) ;
 int FUNC_14 (struct iscsi_session*,struct iscsi_nopin*) ;
 int FUNC_15 (struct iscsi_conn*,scalar_t__) ;
 void* VAR_8 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

int FUNC_18(struct iscsi_conn *VAR_9, struct iscsi_hdr *VAR_10,
    char *VAR_11, int VAR_12)
{
 struct iscsi_session *VAR_13 = VAR_9->session;
 int VAR_14 = VAR_10->opcode & VAR_4, VAR_15 = 0;
 struct iscsi_task *VAR_16;
 uint32_t VAR_17;

 VAR_9->last_recv = VAR_8;
 VAR_15 = FUNC_15(VAR_9, VAR_10->itt);
 if (VAR_15)
  return VAR_15;

 if (VAR_10->itt != VAR_7)
  VAR_17 = FUNC_3(VAR_10->itt);
 else
  VAR_17 = ~0U;

 FUNC_0(VAR_13, "[op 0x%x cid %d itt 0x%x len %d]\n",
     VAR_14, VAR_9->id, VAR_17, VAR_12);

 if (VAR_17 == ~0U) {
  FUNC_14(VAR_13, (struct iscsi_nopin*)VAR_10);

  switch(VAR_14) {
  case 134:
   if (VAR_12) {
    VAR_15 = VAR_3;
    break;
   }

   if (VAR_10->ttt == FUNC_2(VAR_5))
    break;


   FUNC_17(&VAR_13->back_lock);
   FUNC_16(&VAR_13->frwd_lock);
   FUNC_12(VAR_9, (struct iscsi_nopin*)VAR_10);
   FUNC_17(&VAR_13->frwd_lock);
   FUNC_16(&VAR_13->back_lock);
   break;
  case 132:
   VAR_15 = FUNC_6(VAR_9, VAR_10, VAR_11, VAR_12);
   break;
  case 137:
   VAR_9->exp_statsn = FUNC_1(VAR_10->statsn) + 1;
   if (FUNC_10(VAR_9->cls_conn, VAR_10, VAR_11, VAR_12))
    VAR_15 = VAR_2;
   break;
  default:
   VAR_15 = VAR_1;
   break;
  }
  goto out;
 }

 switch(VAR_14) {
 case 131:
 case 130:
  VAR_16 = FUNC_7(VAR_9, VAR_10->itt);
  if (!VAR_16)
   return VAR_0;
  VAR_16->last_xfer = VAR_8;
  break;
 case 133:



  return 0;
 case 135:
 case 136:
 case 128:
 case 129:
 case 134:
  VAR_16 = FUNC_8(VAR_9, VAR_10->itt);
  if (!VAR_16)
   return VAR_0;
  break;
 default:
  return VAR_1;
 }

 switch(VAR_14) {
 case 131:
  FUNC_11(VAR_9, VAR_10, VAR_16, VAR_11, VAR_12);
  break;
 case 130:
  FUNC_5(VAR_9, VAR_10, VAR_16);
  break;
 case 135:
  FUNC_14(VAR_13, (struct iscsi_nopin*)VAR_10);
  if (VAR_12) {
   VAR_15 = VAR_3;
   break;
  }
  VAR_9->exp_statsn = FUNC_1(VAR_10->statsn) + 1;
  goto recv_pdu;
 case 136:
 case 128:
  FUNC_14(VAR_13, (struct iscsi_nopin*)VAR_10);




  goto recv_pdu;
 case 129:
  FUNC_14(VAR_13, (struct iscsi_nopin*)VAR_10);
  if (VAR_12) {
   VAR_15 = VAR_3;
   break;
  }

  FUNC_13(VAR_9, VAR_10);
  FUNC_4(VAR_16, VAR_6);
  break;
 case 134:
  FUNC_14(VAR_13, (struct iscsi_nopin*)VAR_10);
  if (VAR_10->ttt != FUNC_2(VAR_5) || VAR_12) {
   VAR_15 = VAR_3;
   break;
  }
  VAR_9->exp_statsn = FUNC_1(VAR_10->statsn) + 1;

  VAR_15 = FUNC_9(VAR_16, (struct iscsi_nopin*)VAR_10,
           VAR_11, VAR_12);
  break;
 default:
  VAR_15 = VAR_1;
  break;
 }

out:
 return VAR_15;
recv_pdu:
 if (FUNC_10(VAR_9->cls_conn, VAR_10, VAR_11, VAR_12))
  VAR_15 = VAR_2;
 FUNC_4(VAR_16, VAR_6);
 return VAR_15;
}

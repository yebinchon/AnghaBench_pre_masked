
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_task {int dummy; } ;
struct iscsi_reject {int reason; int dlength; int statsn; } ;
struct iscsi_nopin {int dummy; } ;
struct iscsi_hdr {int opcode; int itt; } ;
struct iscsi_conn {TYPE_1__* session; scalar_t__ exp_statsn; } ;
struct TYPE_2__ {int back_lock; int frwd_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct iscsi_conn*,char*,...) ;
 struct iscsi_task* FUNC_3 (struct iscsi_conn*,int ) ;
 int FUNC_4 (struct iscsi_task*,struct iscsi_nopin*,int *,int ) ;
 int FUNC_5 (struct iscsi_conn*,struct iscsi_nopin*) ;
 int FUNC_6 (struct iscsi_hdr*,char*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct iscsi_conn *VAR_6, struct iscsi_hdr *VAR_7,
          char *VAR_8, int VAR_9)
{
 struct iscsi_reject *VAR_10 = (struct iscsi_reject *)VAR_7;
 struct iscsi_hdr VAR_11;
 int VAR_12, VAR_13 = 0;

 VAR_6->exp_statsn = FUNC_0(VAR_10->statsn) + 1;

 if (FUNC_7(VAR_10->dlength) > VAR_9 ||
     FUNC_7(VAR_10->dlength) < sizeof(struct iscsi_hdr)) {
  FUNC_2(VAR_5, VAR_6, "Cannot handle rejected "
      "pdu. Invalid data length (pdu dlength "
      "%u, datalen %d\n", FUNC_7(VAR_10->dlength),
      VAR_9);
  return VAR_1;
 }
 FUNC_6(&VAR_11, VAR_8, sizeof(struct iscsi_hdr));
 VAR_12 = VAR_11.opcode & VAR_2;

 switch (VAR_10->reason) {
 case 129:
  FUNC_2(VAR_5, VAR_6,
      "pdu (op 0x%x itt 0x%x) rejected "
      "due to DataDigest error.\n",
      VAR_12, VAR_11.itt);
  break;
 case 128:
  FUNC_2(VAR_5, VAR_6,
      "pdu (op 0x%x itt 0x%x) rejected. Too many "
      "immediate commands.\n",
      VAR_12, VAR_11.itt);
  if (VAR_12 != VAR_3)
   return 0;

  if (VAR_11.itt == FUNC_1(VAR_4)) {





   FUNC_9(&VAR_6->session->back_lock);
   FUNC_8(&VAR_6->session->frwd_lock);
   FUNC_5(VAR_6,
       (struct iscsi_nopin*)&VAR_11);
   FUNC_9(&VAR_6->session->frwd_lock);
   FUNC_8(&VAR_6->session->back_lock);
  } else {
   struct iscsi_task *VAR_14;




   VAR_14 = FUNC_3(VAR_6, VAR_11.itt);
   if (!VAR_14) {
    FUNC_2(VAR_5, VAR_6,
       "Invalid pdu reject. Could "
       "not lookup rejected task.\n");
    VAR_13 = VAR_0;
   } else
    VAR_13 = FUNC_4(VAR_14,
     (struct iscsi_nopin*)&VAR_11,
     ((void*)0), 0);
  }
  break;
 default:
  FUNC_2(VAR_5, VAR_6,
      "pdu (op 0x%x itt 0x%x) rejected. Reason "
      "code 0x%x\n", VAR_11.opcode,
      VAR_11.itt, VAR_10->reason);
  break;
 }
 return VAR_13;
}

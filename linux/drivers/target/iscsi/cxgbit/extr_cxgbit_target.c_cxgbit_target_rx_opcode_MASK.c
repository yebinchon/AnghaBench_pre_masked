
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iscsi_hdr {int opcode; int itt; int ttt; } ;
struct iscsi_conn {int conn_logout_comp; } ;
struct iscsi_cmd {int dummy; } ;
struct cxgbit_sock {struct iscsi_conn* conn; int skb; } ;
struct cxgbit_lro_pdu_cb {scalar_t__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 struct iscsi_cmd* FUNC_1 (struct cxgbit_sock*) ;
 int FUNC_2 (struct cxgbit_sock*) ;
 int FUNC_3 (struct cxgbit_sock*,struct iscsi_cmd*) ;
 int FUNC_4 (struct cxgbit_sock*,struct iscsi_cmd*) ;
 int FUNC_5 (struct cxgbit_sock*,struct iscsi_cmd*) ;
 struct cxgbit_lro_pdu_cb* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (struct iscsi_conn*,int ,unsigned char*) ;
 struct iscsi_cmd* FUNC_9 (struct iscsi_conn*,int ) ;
 int FUNC_10 (struct iscsi_conn*,struct iscsi_cmd*,unsigned char*) ;
 int FUNC_11 (struct iscsi_conn*,unsigned char*) ;
 int FUNC_12 (struct iscsi_conn*,struct iscsi_cmd*,unsigned char*) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (int *,int) ;

__attribute__((used)) static int FUNC_15(struct cxgbit_sock *VAR_5)
{
 struct cxgbit_lro_pdu_cb *VAR_6 = FUNC_6(VAR_5->skb);
 struct iscsi_hdr *VAR_7 = (struct iscsi_hdr *)VAR_6->hdr;
 struct iscsi_conn *VAR_8 = VAR_5->conn;
 struct iscsi_cmd *VAR_9 = ((void*)0);
 u8 VAR_10 = (VAR_7->opcode & VAR_2);
 int VAR_11 = -VAR_0;

 switch (VAR_10) {
 case 132:
  VAR_9 = FUNC_1(VAR_5);
  if (!VAR_9)
   goto reject;

  VAR_11 = FUNC_4(VAR_5, VAR_9);
  break;
 case 131:
  VAR_11 = FUNC_2(VAR_5);
  break;
 case 133:
  if (VAR_7->ttt == FUNC_0(0xFFFFFFFF)) {
   VAR_9 = FUNC_1(VAR_5);
   if (!VAR_9)
    goto reject;
  }

  VAR_11 = FUNC_3(VAR_5, VAR_9);
  break;
 case 130:
  VAR_9 = FUNC_1(VAR_5);
  if (!VAR_9)
   goto reject;

  VAR_11 = FUNC_12(VAR_8, VAR_9,
       (unsigned char *)VAR_7);
  break;
 case 128:
  if (VAR_7->ttt != FUNC_0(0xFFFFFFFF)) {
   VAR_9 = FUNC_9(VAR_8, VAR_7->itt);
   if (!VAR_9)
    goto reject;
  } else {
   VAR_9 = FUNC_1(VAR_5);
   if (!VAR_9)
    goto reject;
  }

  VAR_11 = FUNC_5(VAR_5, VAR_9);
  break;
 case 134:
  VAR_9 = FUNC_1(VAR_5);
  if (!VAR_9)
   goto reject;

  VAR_11 = FUNC_10(VAR_8, VAR_9, (unsigned char *)VAR_7);
  if (VAR_11 > 0)
   FUNC_14(&VAR_8->conn_logout_comp,
          VAR_4
          * VAR_1);
  break;
 case 129:
  VAR_11 = FUNC_11(VAR_8, (unsigned char *)VAR_7);
  break;
 default:
  FUNC_13("Got unknown iSCSI OpCode: 0x%02x\n", VAR_10);
  FUNC_7();
  break;
 }

 return VAR_11;

reject:
 return FUNC_8(VAR_8, VAR_3,
     (unsigned char *)VAR_7);
 return VAR_11;
}

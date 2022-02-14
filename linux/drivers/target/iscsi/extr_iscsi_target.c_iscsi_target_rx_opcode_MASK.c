
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_hdr {int opcode; int itt; int ttt; } ;
struct iscsi_conn {TYPE_2__* sess; int conn_logout_comp; } ;
struct iscsi_cmd {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sess_ops; } ;
struct TYPE_3__ {int ErrorRecoveryLevel; } ;


 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct iscsi_conn*,int ,unsigned char*) ;
 struct iscsi_cmd* FUNC_2 (struct iscsi_conn*,int ) ;
 struct iscsi_cmd* FUNC_3 (struct iscsi_conn*,int ) ;
 int FUNC_4 (struct iscsi_conn*,unsigned char*) ;
 int FUNC_5 (struct iscsi_conn*,struct iscsi_cmd*,unsigned char*) ;
 int FUNC_6 (struct iscsi_conn*,struct iscsi_cmd*,unsigned char*) ;
 int FUNC_7 (struct iscsi_conn*,struct iscsi_cmd*,unsigned char*) ;
 int FUNC_8 (struct iscsi_conn*,unsigned char*) ;
 int FUNC_9 (struct iscsi_conn*,struct iscsi_cmd*,unsigned char*) ;
 int FUNC_10 (struct iscsi_conn*,struct iscsi_cmd*,unsigned char*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int *,int) ;

__attribute__((used)) static int FUNC_13(struct iscsi_conn *VAR_5, unsigned char *VAR_6)
{
 struct iscsi_hdr *VAR_7 = (struct iscsi_hdr *)VAR_6;
 struct iscsi_cmd *VAR_8;
 int VAR_9 = 0;

 switch (VAR_7->opcode & VAR_1) {
 case 132:
  VAR_8 = FUNC_2(VAR_5, VAR_4);
  if (!VAR_8)
   goto reject;

  VAR_9 = FUNC_7(VAR_5, VAR_8, VAR_6);
  break;
 case 131:
  VAR_9 = FUNC_4(VAR_5, VAR_6);
  break;
 case 133:
  VAR_8 = ((void*)0);
  if (VAR_7->ttt == FUNC_0(0xFFFFFFFF)) {
   VAR_8 = FUNC_2(VAR_5, VAR_4);
   if (!VAR_8)
    goto reject;
  }
  VAR_9 = FUNC_6(VAR_5, VAR_8, VAR_6);
  break;
 case 130:
  VAR_8 = FUNC_2(VAR_5, VAR_4);
  if (!VAR_8)
   goto reject;

  VAR_9 = FUNC_9(VAR_5, VAR_8, VAR_6);
  break;
 case 128:
  if (VAR_7->ttt != FUNC_0(0xFFFFFFFF)) {
   VAR_8 = FUNC_3(VAR_5, VAR_7->itt);
   if (!VAR_8)
    goto reject;
  } else {
   VAR_8 = FUNC_2(VAR_5, VAR_4);
   if (!VAR_8)
    goto reject;
  }

  VAR_9 = FUNC_10(VAR_5, VAR_8, VAR_6);
  break;
 case 134:
  VAR_8 = FUNC_2(VAR_5, VAR_4);
  if (!VAR_8)
   goto reject;

  VAR_9 = FUNC_5(VAR_5, VAR_8, VAR_6);
  if (VAR_9 > 0)
   FUNC_12(&VAR_5->conn_logout_comp,
     VAR_3 * VAR_0);
  break;
 case 129:
  VAR_9 = FUNC_8(VAR_5, VAR_6);
  break;
 default:
  FUNC_11("Got unknown iSCSI OpCode: 0x%02x\n", VAR_7->opcode);
  if (!VAR_5->sess->sess_ops->ErrorRecoveryLevel) {
   FUNC_11("Cannot recover from unknown"
   " opcode while ERL=0, closing iSCSI connection.\n");
   return -1;
  }
  FUNC_11("Unable to recover from unknown opcode while OFMarker=No,"
         " closing iSCSI connection.\n");
  VAR_9 = -1;
  break;
 }

 return VAR_9;
reject:
 return FUNC_1(VAR_5, VAR_2, VAR_6);
}

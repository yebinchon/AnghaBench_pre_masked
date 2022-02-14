
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_snack {int flags; int runlength; int begrun; int ttt; int itt; int exp_statsn; } ;
struct iscsi_conn {TYPE_2__* sess; int cid; } ;
struct TYPE_4__ {TYPE_1__* sess_ops; } ;
struct TYPE_3__ {int ErrorRecoveryLevel; } ;


 int VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iscsi_conn*,int ,unsigned char*) ;
 int FUNC_2 (struct iscsi_conn*,int ,int ,int ) ;
 int FUNC_3 (struct iscsi_conn*,unsigned char*,int ,int ,int ,int ) ;
 int FUNC_4 (struct iscsi_conn*,int ,int ,int ,int ) ;
 int FUNC_5 (char*,int ,int ,int,int ,int ,int ) ;
 int FUNC_6 (char*,...) ;

int FUNC_7(
 struct iscsi_conn *VAR_3,
 unsigned char *VAR_4)
{
 struct iscsi_snack *VAR_5;

 VAR_5 = (struct iscsi_snack *) VAR_4;
 VAR_5->flags &= ~VAR_0;

 FUNC_5("Got ISCSI_INIT_SNACK, ITT: 0x%08x, ExpStatSN:"
  " 0x%08x, Type: 0x%02x, BegRun: 0x%08x, RunLength: 0x%08x,"
  " CID: %hu\n", VAR_5->itt, VAR_5->exp_statsn, VAR_5->flags,
   VAR_5->begrun, VAR_5->runlength, VAR_3->cid);

 if (!VAR_3->sess->sess_ops->ErrorRecoveryLevel) {
  FUNC_6("Initiator sent SNACK request while in"
   " ErrorRecoveryLevel=0.\n");
  return FUNC_1(VAR_3, VAR_2,
      VAR_4);
 }




 switch (VAR_5->flags & VAR_1) {
 case 0:
  return FUNC_3(VAR_3, VAR_4,
   VAR_5->itt,
   FUNC_0(VAR_5->ttt),
   FUNC_0(VAR_5->begrun),
   FUNC_0(VAR_5->runlength));
 case 128:
  return FUNC_4(VAR_3, VAR_5->itt,
   FUNC_0(VAR_5->ttt),
   FUNC_0(VAR_5->begrun), FUNC_0(VAR_5->runlength));
 case 130:
  return FUNC_2(VAR_3, FUNC_0(VAR_5->ttt),
   FUNC_0(VAR_5->begrun),
   FUNC_0(VAR_5->runlength));
 case 129:

  FUNC_6("R-Data SNACK Not Supported.\n");
  return FUNC_1(VAR_3, VAR_2,
      VAR_4);
 default:
  FUNC_6("Unknown SNACK type 0x%02x, protocol"
   " error.\n", VAR_5->flags & 0x0f);
  return FUNC_1(VAR_3, VAR_2,
      VAR_4);
 }

 return 0;
}

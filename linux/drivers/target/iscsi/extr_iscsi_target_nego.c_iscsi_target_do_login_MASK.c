
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_login_rsp {int flags; } ;
struct iscsi_login_req {int flags; } ;
struct iscsi_login {int login_complete; int tsih; scalar_t__ rsp; scalar_t__ req; } ;
struct iscsi_conn {TYPE_1__* sess; } ;
struct TYPE_2__ {int tsih; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct iscsi_conn*,struct iscsi_login*) ;
 int FUNC_2 (struct iscsi_conn*,struct iscsi_login*) ;
 int FUNC_3 (struct iscsi_conn*,struct iscsi_login*) ;
 int FUNC_4 (struct iscsi_conn*) ;
 int FUNC_5 (struct iscsi_conn*) ;
 int FUNC_6 (struct iscsi_conn*,int ,int ) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int FUNC_8(struct iscsi_conn *VAR_7, struct iscsi_login *VAR_8)
{
 int VAR_9 = 0;
 struct iscsi_login_req *VAR_10;
 struct iscsi_login_rsp *VAR_11;

 VAR_10 = (struct iscsi_login_req *) VAR_8->req;
 VAR_11 = (struct iscsi_login_rsp *) VAR_8->rsp;

 while (1) {
  if (++VAR_9 > VAR_6) {
   FUNC_7("MAX_LOGIN_PDUS count reached.\n");
   FUNC_6(VAR_7, VAR_5,
     VAR_4);
   return -1;
  }

  switch (FUNC_0(VAR_10->flags)) {
  case 0:
   VAR_11->flags &= ~VAR_1;
   if (FUNC_3(VAR_7, VAR_8) < 0)
    return -1;
   break;
  case 1:
   VAR_11->flags |= VAR_0;
   if (FUNC_2(VAR_7, VAR_8) < 0)
    return -1;
   if (VAR_11->flags & VAR_3) {






    if (FUNC_5(VAR_7))
     return -1;

    VAR_8->tsih = VAR_7->sess->tsih;
    VAR_8->login_complete = 1;
    FUNC_4(VAR_7);
    if (FUNC_1(VAR_7,
      VAR_8) < 0)
     return -1;
    return 1;
   }
   break;
  default:
   FUNC_7("Illegal CSG: %d received from"
    " Initiator, protocol error.\n",
    FUNC_0(VAR_10->flags));
   break;
  }

  if (FUNC_1(VAR_7, VAR_8) < 0)
   return -1;

  if (VAR_11->flags & VAR_3) {
   VAR_11->flags &= ~VAR_3;
   VAR_11->flags &= ~VAR_2;
  }
  break;
 }

 return 0;
}

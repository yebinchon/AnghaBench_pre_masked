
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iscsi_login_req {int opcode; int flags; int itt; int isid; int min_version; int max_version; int dlength; } ;
struct iscsi_login {int current_stage; int init_task_tag; int isid; int version_min; int version_max; scalar_t__ req; } ;
struct iscsi_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct iscsi_conn*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;

int FUNC_6(
 struct iscsi_conn *VAR_6,
 struct iscsi_login *VAR_7)
{
 int VAR_8, VAR_9;
 u32 VAR_10;
 struct iscsi_login_req *VAR_11;

 VAR_11 = (struct iscsi_login_req *) VAR_7->req;
 VAR_10 = FUNC_4(VAR_11->dlength);

 switch (VAR_11->opcode & VAR_3) {
 case 128:
  break;
 default:
  FUNC_5("Received unknown opcode 0x%02x.\n",
    VAR_11->opcode & VAR_3);
  FUNC_2(VAR_6, VAR_4,
    VAR_2);
  return -1;
 }

 if ((VAR_11->flags & VAR_0) &&
     (VAR_11->flags & VAR_1)) {
  FUNC_5("Login request has both ISCSI_FLAG_LOGIN_CONTINUE"
   " and ISCSI_FLAG_LOGIN_TRANSIT set, protocol error.\n");
  FUNC_2(VAR_6, VAR_4,
    VAR_2);
  return -1;
 }

 VAR_8 = FUNC_0(VAR_11->flags);
 VAR_9 = FUNC_1(VAR_11->flags);

 if (VAR_8 != VAR_7->current_stage) {
  FUNC_5("Initiator unexpectedly changed login stage"
   " from %d to %d, login failed.\n", VAR_7->current_stage,
   VAR_8);
  FUNC_2(VAR_6, VAR_4,
    VAR_2);
  return -1;
 }

 if ((VAR_9 == 2) || (VAR_8 >= 2) ||
    ((VAR_11->flags & VAR_1) &&
     (VAR_9 <= VAR_8))) {
  FUNC_5("Illegal login_req->flags Combination, CSG: %d,"
   " NSG: %d, ISCSI_FLAG_LOGIN_TRANSIT: %d.\n", VAR_8,
   VAR_9, (VAR_11->flags & VAR_1));
  FUNC_2(VAR_6, VAR_4,
    VAR_2);
  return -1;
 }

 if ((VAR_11->max_version != VAR_7->version_max) ||
     (VAR_11->min_version != VAR_7->version_min)) {
  FUNC_5("Login request changed Version Max/Nin"
   " unexpectedly to 0x%02x/0x%02x, protocol error\n",
   VAR_11->max_version, VAR_11->min_version);
  FUNC_2(VAR_6, VAR_4,
    VAR_2);
  return -1;
 }

 if (FUNC_3(VAR_11->isid, VAR_7->isid, 6) != 0) {
  FUNC_5("Login request changed ISID unexpectedly,"
    " protocol error.\n");
  FUNC_2(VAR_6, VAR_4,
    VAR_2);
  return -1;
 }

 if (VAR_11->itt != VAR_7->init_task_tag) {
  FUNC_5("Login request changed ITT unexpectedly to"
   " 0x%08x, protocol error.\n", VAR_11->itt);
  FUNC_2(VAR_6, VAR_4,
    VAR_2);
  return -1;
 }

 if (VAR_10 > VAR_5) {
  FUNC_5("Login request payload exceeds default"
   " MaxRecvDataSegmentLength: %u, protocol error.\n",
    VAR_5);
  return -1;
 }

 return 0;
}

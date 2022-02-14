
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {int cid; } ;
struct iscsi_cmd {int logout_reason; int logout_response; int logout_cid; } ;
 int FUNC_0 (struct iscsi_conn*) ;
 int FUNC_1 (struct iscsi_conn*,int ) ;
 int FUNC_2 (struct iscsi_conn*) ;

int FUNC_3(
 struct iscsi_cmd *VAR_0,
 struct iscsi_conn *VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_0->logout_reason) {
 case 131:
  switch (VAR_0->logout_response) {
  case 128:
  case 133:
  default:
   FUNC_0(VAR_1);
   break;
  }
  VAR_2 = 0;
  break;
 case 132:
  if (VAR_1->cid == VAR_0->logout_cid) {
   switch (VAR_0->logout_response) {
   case 128:
   case 133:
   default:
    FUNC_2(VAR_1);
    break;
   }
   VAR_2 = 0;
  } else {
   switch (VAR_0->logout_response) {
   case 128:
    FUNC_1(VAR_1,
     VAR_0->logout_cid);
    break;
   case 134:
   case 133:
   default:
    break;
   }
   VAR_2 = 1;
  }
  break;
 case 130:
  switch (VAR_0->logout_response) {
  case 128:
  case 134:
  case 129:
  case 133:
  default:
   break;
  }
  VAR_2 = 1;
  break;
 default:
  break;

 }
 return VAR_2;
}

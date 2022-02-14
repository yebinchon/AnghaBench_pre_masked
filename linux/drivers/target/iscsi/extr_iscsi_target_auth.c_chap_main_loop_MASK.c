
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iscsi_node_auth {scalar_t__ authenticate_target; } ;
struct iscsi_conn {struct iscsi_chap* auth_protocol; } ;
struct iscsi_chap {scalar_t__ chap_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct iscsi_conn*) ;
 scalar_t__ FUNC_1 (struct iscsi_conn*,struct iscsi_node_auth*,char*,char*,int*) ;
 struct iscsi_chap* FUNC_2 (struct iscsi_conn*,struct iscsi_node_auth*,char*,char*,int*) ;
 int FUNC_3 (char*,int) ;

u32 FUNC_4(
 struct iscsi_conn *VAR_2,
 struct iscsi_node_auth *VAR_3,
 char *VAR_4,
 char *VAR_5,
 int *VAR_6,
 int *VAR_7)
{
 struct iscsi_chap *VAR_8 = VAR_2->auth_protocol;

 if (!VAR_8) {
  VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_7);
  if (!VAR_8)
   return 2;
  VAR_8->chap_state = VAR_0;
  return 0;
 } else if (VAR_8->chap_state == VAR_0) {
  FUNC_3(VAR_4, *VAR_6);
  if (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
    VAR_7) < 0) {
   FUNC_0(VAR_2);
   return 2;
  }
  if (VAR_3->authenticate_target)
   VAR_8->chap_state = VAR_1;
  else
   *VAR_7 = 0;
  FUNC_0(VAR_2);
  return 1;
 }

 return 2;
}

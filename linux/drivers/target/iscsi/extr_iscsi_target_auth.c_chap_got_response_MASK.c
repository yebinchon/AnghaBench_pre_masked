
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_node_auth {int dummy; } ;
struct iscsi_conn {struct iscsi_chap* auth_protocol; } ;
struct iscsi_chap {int digest_type; } ;



 int FUNC_0 (struct iscsi_conn*,struct iscsi_node_auth*,char*,char*,unsigned int*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(
 struct iscsi_conn *VAR_0,
 struct iscsi_node_auth *VAR_1,
 char *VAR_2,
 char *VAR_3,
 unsigned int *VAR_4)
{
 struct iscsi_chap *VAR_5 = VAR_0->auth_protocol;

 switch (VAR_5->digest_type) {
 case 128:
  if (FUNC_0(VAR_0, VAR_1, VAR_2,
    VAR_3, VAR_4) < 0)
   return -1;
  return 0;
 default:
  FUNC_1("Unknown CHAP digest type %d!\n",
    VAR_5->digest_type);
  return -1;
 }
}

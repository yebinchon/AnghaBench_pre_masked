
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_node_auth {int naf_flags; } ;
struct iscsi_conn {TYPE_1__* tpg; struct iscsi_chap* auth_protocol; } ;
struct iscsi_chap {int digest_type; int id; } ;
struct TYPE_2__ {int tpg_chap_id; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct iscsi_conn*) ;
 scalar_t__ FUNC_2 (struct iscsi_conn*,int,char*,unsigned int*) ;
 struct iscsi_chap* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 unsigned int FUNC_6 (char*,char*,...) ;

__attribute__((used)) static struct iscsi_chap *FUNC_7(
 struct iscsi_conn *VAR_3,
 struct iscsi_node_auth *VAR_4,
 const char *VAR_5,
 char *VAR_6,
 unsigned int *VAR_7)
{
 int VAR_8;
 struct iscsi_chap *VAR_9;

 if (!(VAR_4->naf_flags & VAR_2) ||
     !(VAR_4->naf_flags & VAR_1)) {
  FUNC_5("CHAP user or password not set for"
    " Initiator ACL\n");
  return ((void*)0);
 }

 VAR_3->auth_protocol = FUNC_3(sizeof(struct iscsi_chap), VAR_0);
 if (!VAR_3->auth_protocol)
  return ((void*)0);

 VAR_9 = VAR_3->auth_protocol;
 VAR_8 = FUNC_0(VAR_5);
 switch (VAR_8) {
 case 129:
  FUNC_4("[server] Got CHAP_A=5\n");



  *VAR_7 = FUNC_6(VAR_6, "CHAP_A=5");
  *VAR_7 += 1;
  VAR_9->digest_type = 129;
  FUNC_4("[server] Sending CHAP_A=%d\n", VAR_9->digest_type);
  break;
 case 128:
 default:
  FUNC_5("Unsupported CHAP_A value\n");
  FUNC_1(VAR_3);
  return ((void*)0);
 }




 VAR_9->id = VAR_3->tpg->tpg_chap_id++;
 *VAR_7 += FUNC_6(VAR_6 + *VAR_7, "CHAP_I=%d", VAR_9->id);
 *VAR_7 += 1;
 FUNC_4("[server] Sending CHAP_I=%d\n", VAR_9->id);



 if (FUNC_2(VAR_3, 1, VAR_6, VAR_7) < 0) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }

 return VAR_9;
}

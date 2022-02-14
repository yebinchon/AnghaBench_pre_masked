
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sbp_tport {struct sbp_tpg* tpg; } ;
struct sbp_tpg {int dummy; } ;
struct TYPE_6__ {void* status; } ;
struct TYPE_4__ {int misc; } ;
struct sbp_management_request {scalar_t__ node_addr; TYPE_3__ status; TYPE_1__ orb; } ;
struct sbp_management_agent {struct sbp_tport* tport; } ;
struct sbp_login_descriptor {TYPE_2__* sess; int login_id; int login_lun; } ;
struct TYPE_5__ {scalar_t__ node_id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (char*,...) ;
 struct sbp_login_descriptor* FUNC_7 (struct sbp_tpg*,int) ;
 int FUNC_8 (struct sbp_login_descriptor*,int) ;

__attribute__((used)) static void FUNC_9(
 struct sbp_management_agent *VAR_4, struct sbp_management_request *VAR_5,
 int *VAR_6)
{
 struct sbp_tport *VAR_7 = VAR_4->tport;
 struct sbp_tpg *VAR_8 = VAR_7->tpg;
 int VAR_9;
 struct sbp_login_descriptor *VAR_10;

 VAR_9 = FUNC_0(FUNC_3(VAR_5->orb.misc));

 VAR_10 = FUNC_7(VAR_8, VAR_9);
 if (!VAR_10) {
  FUNC_6("cannot find login: %d\n", VAR_9);

  VAR_5->status.status = FUNC_4(
   FUNC_1(VAR_3) |
   FUNC_2(VAR_1));
  return;
 }

 FUNC_5("mgt_agent LOGOUT from LUN %d session %d\n",
  VAR_10->login_lun, VAR_10->login_id);

 if (VAR_5->node_addr != VAR_10->sess->node_id) {
  FUNC_6("logout from different node ID\n");

  VAR_5->status.status = FUNC_4(
   FUNC_1(VAR_3) |
   FUNC_2(VAR_0));
  return;
 }

 FUNC_8(VAR_10, 1);

 VAR_5->status.status = FUNC_4(
  FUNC_1(VAR_3) |
  FUNC_2(VAR_2));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sbp_tport {struct sbp_tpg* tpg; } ;
struct sbp_tpg {int dummy; } ;
struct TYPE_6__ {void* status; } ;
struct TYPE_4__ {int misc; } ;
struct sbp_management_request {TYPE_3__ status; int speed; int card; int node_addr; int generation; TYPE_1__ orb; } ;
struct sbp_management_agent {struct sbp_tport* tport; } ;
struct sbp_login_descriptor {TYPE_2__* sess; } ;
struct TYPE_5__ {scalar_t__ guid; int lock; int speed; scalar_t__ card; int node_id; int generation; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,scalar_t__) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (scalar_t__*,struct sbp_management_request*) ;
 struct sbp_login_descriptor* FUNC_11 (struct sbp_tpg*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(
 struct sbp_management_agent *VAR_6, struct sbp_management_request *VAR_7,
 int *VAR_8)
{
 struct sbp_tport *VAR_9 = VAR_6->tport;
 struct sbp_tpg *VAR_10 = VAR_9->tpg;
 int VAR_11;
 u64 VAR_12;
 struct sbp_login_descriptor *VAR_13;

 VAR_11 = FUNC_10(&VAR_12, VAR_7);
 if (VAR_11 != VAR_0) {
  FUNC_9("failed to read peer GUID: %d\n", VAR_11);

  VAR_7->status.status = FUNC_4(
   FUNC_1(VAR_5) |
   FUNC_2(VAR_3));
  return;
 }

 FUNC_8("mgt_agent RECONNECT from %016llx\n", VAR_12);

 VAR_13 = FUNC_11(VAR_10,
  FUNC_0(FUNC_3(VAR_7->orb.misc)));

 if (!VAR_13) {
  FUNC_7("mgt_agent RECONNECT unknown login ID\n");

  VAR_7->status.status = FUNC_4(
   FUNC_1(VAR_4) |
   FUNC_2(VAR_1));
  return;
 }

 if (VAR_13->sess->guid != VAR_12) {
  FUNC_7("mgt_agent RECONNECT login GUID doesn't match\n");

  VAR_7->status.status = FUNC_4(
   FUNC_1(VAR_4) |
   FUNC_2(VAR_1));
  return;
 }

 FUNC_12(&VAR_13->sess->lock);
 if (VAR_13->sess->card)
  FUNC_6(VAR_13->sess->card);


 VAR_13->sess->generation = VAR_7->generation;
 VAR_13->sess->node_id = VAR_7->node_addr;
 VAR_13->sess->card = FUNC_5(VAR_7->card);
 VAR_13->sess->speed = VAR_7->speed;
 FUNC_13(&VAR_13->sess->lock);

 VAR_7->status.status = FUNC_4(
  FUNC_1(VAR_4) |
  FUNC_2(VAR_2));
}

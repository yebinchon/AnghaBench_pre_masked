
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iscsi_session {TYPE_4__* se_sess; TYPE_3__* tpg; TYPE_2__* sess_ops; scalar_t__ tsih; } ;
struct iscsi_param {int value; } ;
struct iscsi_node_attrib {int default_erl; } ;
struct iscsi_conn {int param_list; TYPE_1__* conn_transport; TYPE_3__* tpg; struct iscsi_session* sess; } ;
struct TYPE_8__ {int sup_prot_ops; } ;
struct TYPE_7__ {int tpgt; int param_list; scalar_t__ ntsih; } ;
struct TYPE_6__ {scalar_t__ SessionType; } ;
struct TYPE_5__ {scalar_t__ transport_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct iscsi_conn*,char*,...) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 struct iscsi_param* FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 struct iscsi_node_attrib* FUNC_5 (struct iscsi_session*) ;
 int FUNC_6 (struct iscsi_conn*,int ,int ) ;
 int FUNC_7 (int ,int ,unsigned long*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,unsigned long) ;

__attribute__((used)) static int FUNC_10(
 struct iscsi_conn *VAR_7)
{
 struct iscsi_node_attrib *VAR_8;
 struct iscsi_session *VAR_9 = VAR_7->sess;
 bool VAR_10 = 0;

 VAR_9->tpg = VAR_7->tpg;





 VAR_9->tsih = ++VAR_9->tpg->ntsih;
 if (!VAR_9->tsih)
  VAR_9->tsih = ++VAR_9->tpg->ntsih;




 if (FUNC_1(&VAR_7->param_list,
    VAR_7->tpg->param_list, 1) < 0) {
  FUNC_6(VAR_7, VAR_2,
    VAR_1);
  return -1;
 }

 if (VAR_7->conn_transport->transport_type == VAR_0)
  VAR_10 = 1;

 FUNC_4(VAR_7->param_list, VAR_10);

 if (VAR_9->sess_ops->SessionType)
  return FUNC_3(
    VAR_7->param_list);

 VAR_8 = FUNC_5(VAR_9);
 if (FUNC_0(VAR_7, "TargetPortalGroupTag=%hu", VAR_9->tpg->tpgt))
  return -1;






 if (FUNC_0(VAR_7, "ErrorRecoveryLevel=%d", VAR_8->default_erl))
  return -1;




 if (VAR_10) {
  struct iscsi_param *VAR_11;
  unsigned long VAR_12, VAR_13;
  int VAR_14;

  if (FUNC_0(VAR_7, "RDMAExtensions=Yes"))
   return -1;





  VAR_11 = FUNC_2("MaxRecvDataSegmentLength",
        VAR_7->param_list);
  if (!VAR_11) {
   FUNC_6(VAR_7, VAR_2,
    VAR_1);
   return -1;
  }
  VAR_14 = FUNC_7(VAR_11->value, 0, &VAR_12);
  if (VAR_14 < 0) {
   FUNC_6(VAR_7, VAR_2,
    VAR_1);
   return -1;
  }
  VAR_13 = VAR_12 % VAR_3;
  if (!VAR_13)
   goto check_prot;

  if (VAR_12 < VAR_3)
   VAR_12 = VAR_3;
  else
   VAR_12 -= VAR_13;

  FUNC_9("Aligning ISER MaxRecvDataSegmentLength: %lu down"
   " to PAGE_SIZE\n", VAR_12);

  if (FUNC_0(VAR_7, "MaxRecvDataSegmentLength=%lu\n", VAR_12))
   return -1;




check_prot:
  if (VAR_9->se_sess->sup_prot_ops &
     (VAR_6 | VAR_5 |
      VAR_4)) {

   if (FUNC_0(VAR_7, "ImmediateData=No"))
    return -1;

   if (FUNC_0(VAR_7, "InitialR2T=Yes"))
    return -1;

   FUNC_8("Forcing ImmediateData=No + InitialR2T=Yes for"
     " T10-PI enabled ISER session\n");
  }
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcm_qla2xxx_lport {int lport_fcport_map; int lport_loopid_map; } ;
struct tcm_qla2xxx_fc_loopid {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct tcm_qla2xxx_lport *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(&VAR_1->lport_fcport_map);
 if (VAR_2) {
  FUNC_4("Unable to initialize lport->lport_fcport_map btree\n");
  return VAR_2;
 }

 VAR_1->lport_loopid_map =
  FUNC_5(FUNC_0(65536,
       sizeof(struct tcm_qla2xxx_fc_loopid)));
 if (!VAR_1->lport_loopid_map) {
  FUNC_4("Unable to allocate lport->lport_loopid_map of %zu bytes\n",
      sizeof(struct tcm_qla2xxx_fc_loopid) * 65536);
  FUNC_1(&VAR_1->lport_fcport_map);
  return -VAR_0;
 }
 FUNC_3("qla2xxx: Allocated lport_loopid_map of %zu bytes\n",
        sizeof(struct tcm_qla2xxx_fc_loopid) * 65536);
 return 0;
}

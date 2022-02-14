
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {scalar_t__ cfg_enable_fc4_type; } ;
struct lpfc_nodelist {int nlp_DID; int nlp_type; int nlp_flag; struct lpfc_vport* vport; struct fc_rport* rport; } ;
struct fc_rport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct fc_rport*) ;
 int FUNC_1 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_2 (struct lpfc_vport*,int ,int ,char*,int ,struct fc_rport*) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_nodelist *VAR_4)
{
 struct fc_rport *VAR_5 = VAR_4->rport;
 struct lpfc_vport *VAR_6 = VAR_4->vport;

 if (VAR_6->cfg_enable_fc4_type == VAR_3)
  return;

 FUNC_1(VAR_6, VAR_2,
  "rport delete:    did:x%x flg:x%x type x%x",
  VAR_4->nlp_DID, VAR_4->nlp_flag, VAR_4->nlp_type);

 FUNC_2(VAR_6, VAR_0, VAR_1,
    "3184 rport unregister x%06x, rport x%px\n",
    VAR_4->nlp_DID, VAR_5);

 FUNC_0(VAR_5);

 return;
}

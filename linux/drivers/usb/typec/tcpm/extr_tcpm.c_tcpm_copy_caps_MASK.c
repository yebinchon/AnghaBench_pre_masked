
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; int type; int prefer_role; } ;
struct tcpm_port {int self_powered; TYPE_1__ typec_caps; int operating_snk_mw; int snk_vdo; int nr_snk_vdo; int snk_pdo; void* nr_snk_pdo; int src_pdo; void* nr_src_pdo; } ;
struct tcpc_config {int self_powered; int data; int type; int default_role; int operating_snk_mw; int nr_snk_vdo; int snk_vdo; int nr_snk_pdo; int snk_pdo; int nr_src_pdo; int src_pdo; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct tcpm_port*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct tcpm_port *VAR_1,
     const struct tcpc_config *VAR_2)
{
 if (FUNC_2(VAR_1, VAR_2->src_pdo, VAR_2->nr_src_pdo) ||
     FUNC_2(VAR_1, VAR_2->snk_pdo, VAR_2->nr_snk_pdo))
  return -VAR_0;

 VAR_1->nr_src_pdo = FUNC_0(VAR_1->src_pdo, VAR_2->src_pdo,
       VAR_2->nr_src_pdo);
 VAR_1->nr_snk_pdo = FUNC_0(VAR_1->snk_pdo, VAR_2->snk_pdo,
       VAR_2->nr_snk_pdo);

 VAR_1->nr_snk_vdo = FUNC_1(VAR_1->snk_vdo, VAR_2->snk_vdo,
       VAR_2->nr_snk_vdo);

 VAR_1->operating_snk_mw = VAR_2->operating_snk_mw;

 VAR_1->typec_caps.prefer_role = VAR_2->default_role;
 VAR_1->typec_caps.type = VAR_2->type;
 VAR_1->typec_caps.data = VAR_2->data;
 VAR_1->self_powered = VAR_2->self_powered;

 return 0;
}

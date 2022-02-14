
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fcoe_port {struct bnx2fc_interface* priv; } ;
struct bnx2fc_rport {int context_id; int ctx_base; struct fcoe_port* port; } ;
struct bnx2fc_interface {struct bnx2fc_hba* hba; } ;
struct bnx2fc_hba {int pcidev; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;

int FUNC_2(struct bnx2fc_rport *VAR_3)
{
 u32 VAR_4 = VAR_3->context_id;
 struct fcoe_port *VAR_5 = VAR_3->port;
 u32 VAR_6;
 resource_size_t VAR_7;
 struct bnx2fc_interface *VAR_8 = VAR_5->priv;
 struct bnx2fc_hba *VAR_9 = VAR_8->hba;

 VAR_7 = FUNC_1(VAR_9->pcidev,
     VAR_1);
 VAR_6 = (1 << VAR_0) * (VAR_4 & 0x1FFFF);
 VAR_3->ctx_base = FUNC_0(VAR_7 + VAR_6, 4);
 if (!VAR_3->ctx_base)
  return -VAR_2;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {struct sk_buff* skb; } ;
struct TYPE_4__ {TYPE_1__ rdq; } ;
struct mlxsw_pci_queue_elem_info {char* elem; TYPE_2__ u; } ;
struct mlxsw_pci {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct mlxsw_pci*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_pci *VAR_1,
       struct mlxsw_pci_queue_elem_info *VAR_2)
{
 struct sk_buff *VAR_3;
 char *VAR_4;

 VAR_3 = VAR_2->u.rdq.skb;
 VAR_4 = VAR_2->elem;

 FUNC_1(VAR_1, VAR_4, 0, VAR_0);
 FUNC_0(VAR_3);
}

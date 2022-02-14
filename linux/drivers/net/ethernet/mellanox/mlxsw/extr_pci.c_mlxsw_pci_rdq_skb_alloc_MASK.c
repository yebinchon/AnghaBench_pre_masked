
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct TYPE_3__ {struct sk_buff* skb; } ;
struct TYPE_4__ {TYPE_1__ rdq; } ;
struct mlxsw_pci_queue_elem_info {char* elem; TYPE_2__ u; } ;
struct mlxsw_pci {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct mlxsw_pci*,char*,int ,int ,size_t,int ) ;
 struct sk_buff* FUNC_2 (int *,size_t) ;

__attribute__((used)) static int FUNC_3(struct mlxsw_pci *VAR_3,
       struct mlxsw_pci_queue_elem_info *VAR_4)
{
 size_t VAR_5 = VAR_2;
 char *VAR_6 = VAR_4->elem;
 struct sk_buff *VAR_7;
 int VAR_8;

 VAR_4->u.rdq.skb = ((void*)0);
 VAR_7 = FUNC_2(((void*)0), VAR_5);
 if (!VAR_7)
  return -VAR_1;



 VAR_8 = FUNC_1(VAR_3, VAR_6, 0, VAR_7->data,
         VAR_5, VAR_0);
 if (VAR_8)
  goto err_frag_map;

 VAR_4->u.rdq.skb = VAR_7;
 return 0;

err_frag_map:
 FUNC_0(VAR_7);
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_work; struct sk_buff* tx_pending; } ;
struct st21nfca_hci_info {TYPE_1__ dep_info; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct st21nfca_hci_info *VAR_0,
      struct sk_buff *VAR_1)
{
 VAR_0->dep_info.tx_pending = VAR_1;
 FUNC_0(&VAR_0->dep_info.tx_work);
}

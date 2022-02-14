
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb_priv {int td_list; } ;
struct uhci_td {int list; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct uhci_td *VAR_0, struct urb_priv *VAR_1)
{
 FUNC_0(&VAR_0->list, &VAR_1->td_list);
}

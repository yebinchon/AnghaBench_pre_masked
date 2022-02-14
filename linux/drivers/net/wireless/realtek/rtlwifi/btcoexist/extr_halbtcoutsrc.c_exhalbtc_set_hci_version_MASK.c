
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int hci_version; } ;
struct btc_coexist {TYPE_1__ stack_info; } ;


 int FUNC_0 (struct btc_coexist*) ;

void FUNC_1(struct btc_coexist *VAR_0, u16 VAR_1)
{
 if (!FUNC_0(VAR_0))
  return;

 VAR_0->stack_info.hci_version = VAR_1;
}

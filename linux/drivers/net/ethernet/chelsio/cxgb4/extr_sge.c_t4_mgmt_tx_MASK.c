
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int * ctrlq; } ;
struct adapter {TYPE_1__ sge; } ;


 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(struct adapter *VAR_0, struct sk_buff *VAR_1)
{
 int VAR_2;

 FUNC_1();
 VAR_2 = FUNC_0(&VAR_0->sge.ctrlq[0], VAR_1);
 FUNC_2();
 return VAR_2;
}

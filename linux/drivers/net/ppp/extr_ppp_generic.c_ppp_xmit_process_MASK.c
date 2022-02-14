
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ppp {int dev; int xmit_recursion; } ;


 int FUNC_0 (struct ppp*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 int * FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct ppp *VAR_0, struct sk_buff *VAR_1)
{
 FUNC_2();

 if (FUNC_7(*FUNC_6(VAR_0->xmit_recursion)))
  goto err;

 (*FUNC_6(VAR_0->xmit_recursion))++;
 FUNC_0(VAR_0, VAR_1);
 (*FUNC_6(VAR_0->xmit_recursion))--;

 FUNC_3();

 return;

err:
 FUNC_3();

 FUNC_1(VAR_1);

 if (FUNC_4())
  FUNC_5(VAR_0->dev, "recursion detected\n");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ionic_lif {int dummy; } ;
struct ionic {int lifbits; int lifs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ionic_lif*) ;
 struct ionic_lif* FUNC_2 (struct ionic*,int ) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct ionic *VAR_0)
{
 struct ionic_lif *VAR_1;

 FUNC_0(&VAR_0->lifs);


 FUNC_3(0, VAR_0->lifbits);
 VAR_1 = FUNC_2(VAR_0, 0);

 return FUNC_1(VAR_1);
}

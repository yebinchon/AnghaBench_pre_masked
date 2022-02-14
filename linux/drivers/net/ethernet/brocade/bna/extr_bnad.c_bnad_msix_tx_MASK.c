
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnad {int dummy; } ;
struct bna_tcb {struct bnad* bnad; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct bnad*,struct bna_tcb*) ;

__attribute__((used)) static irqreturn_t
FUNC_1(int VAR_1, void *VAR_2)
{
 struct bna_tcb *VAR_3 = (struct bna_tcb *)VAR_2;
 struct bnad *VAR_4 = VAR_3->bnad;

 FUNC_0(VAR_4, VAR_3);

 return VAR_0;
}

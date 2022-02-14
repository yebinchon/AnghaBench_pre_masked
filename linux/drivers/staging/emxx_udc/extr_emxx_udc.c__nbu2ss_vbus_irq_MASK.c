
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbu2ss_udc {int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct nbu2ss_udc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct nbu2ss_udc *VAR_3 = (struct nbu2ss_udc *)VAR_2;

 FUNC_1(&VAR_3->lock);
 FUNC_0(VAR_3);
 FUNC_2(&VAR_3->lock);

 return VAR_0;
}

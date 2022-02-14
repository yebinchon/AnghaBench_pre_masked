
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_msi {int lock; int used; } ;


 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct rcar_msi *VAR_0, unsigned long VAR_1)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(VAR_1, VAR_0->used);
 FUNC_2(&VAR_0->lock);
}

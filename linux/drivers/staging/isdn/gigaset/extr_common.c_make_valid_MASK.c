
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gigaset_driver {int lock; } ;
struct cardstate {unsigned int flags; struct gigaset_driver* driver; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct cardstate *VAR_0, unsigned VAR_1)
{
 unsigned long VAR_2;
 struct gigaset_driver *VAR_3 = VAR_0->driver;
 FUNC_0(&VAR_3->lock, VAR_2);
 VAR_0->flags |= VAR_1;
 FUNC_1(&VAR_3->lock, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gigaset_driver {unsigned int minors; int lock; struct cardstate* cs; scalar_t__ blocked; } ;
struct cardstate {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static struct cardstate *FUNC_2(struct gigaset_driver *VAR_1)
{
 unsigned long VAR_2;
 unsigned VAR_3;
 struct cardstate *VAR_4;
 struct cardstate *VAR_5 = ((void*)0);

 FUNC_0(&VAR_1->lock, VAR_2);
 if (VAR_1->blocked)
  goto exit;
 for (VAR_3 = 0; VAR_3 < VAR_1->minors; ++VAR_3) {
  VAR_4 = VAR_1->cs + VAR_3;
  if (!(VAR_4->flags & VAR_0)) {
   VAR_4->flags = VAR_0;
   VAR_5 = VAR_4;
   break;
  }
 }
exit:
 FUNC_1(&VAR_1->lock, VAR_2);
 return VAR_5;
}

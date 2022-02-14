
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_erofs_collector {scalar_t__ mode; struct z_erofs_collection* cl; int vector; } ;
struct z_erofs_collection {int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct z_erofs_collection*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static bool FUNC_3(struct z_erofs_collector *VAR_1)
{
 struct z_erofs_collection *VAR_2 = VAR_1->cl;

 if (!VAR_2)
  return 0;

 FUNC_2(&VAR_1->vector, 0);
 FUNC_0(&VAR_2->lock);





 if (VAR_1->mode < VAR_0)
  FUNC_1(VAR_2);

 VAR_1->cl = ((void*)0);
 return 1;
}

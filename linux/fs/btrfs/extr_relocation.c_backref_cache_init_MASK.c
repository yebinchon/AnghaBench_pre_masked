
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backref_cache {int leaves; int detached; int changed; int * pending; int rb_root; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct backref_cache *VAR_2)
{
 int VAR_3;
 VAR_2->rb_root = VAR_1;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(&VAR_2->pending[VAR_3]);
 FUNC_0(&VAR_2->changed);
 FUNC_0(&VAR_2->detached);
 FUNC_0(&VAR_2->leaves);
}

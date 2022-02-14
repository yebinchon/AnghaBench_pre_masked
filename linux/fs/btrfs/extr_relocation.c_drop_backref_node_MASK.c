
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backref_node {int rb_node; int lower; int list; int upper; } ;
struct backref_cache {int rb_root; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct backref_node*) ;
 int FUNC_3 (struct backref_cache*,struct backref_node*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static void FUNC_7(struct backref_cache *VAR_0,
         struct backref_node *VAR_1)
{
 FUNC_0(!FUNC_5(&VAR_1->upper));

 FUNC_2(VAR_1);
 FUNC_4(&VAR_1->list);
 FUNC_4(&VAR_1->lower);
 if (!FUNC_1(&VAR_1->rb_node))
  FUNC_6(&VAR_1->rb_node, &VAR_0->rb_root);
 FUNC_3(VAR_0, VAR_1);
}

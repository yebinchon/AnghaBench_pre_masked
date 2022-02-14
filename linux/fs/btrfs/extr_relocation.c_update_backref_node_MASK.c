
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rb_node {int dummy; } ;
struct backref_node {int rb_node; int bytenr; } ;
struct backref_cache {int rb_root; } ;


 int VAR_0 ;
 int FUNC_0 (struct rb_node*,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 struct rb_node* FUNC_2 (int *,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct backref_cache *VAR_1,
    struct backref_node *VAR_2, u64 VAR_3)
{
 struct rb_node *VAR_4;
 FUNC_1(&VAR_2->rb_node, &VAR_1->rb_root);
 VAR_2->bytenr = VAR_3;
 VAR_4 = FUNC_2(&VAR_1->rb_root, VAR_2->bytenr, &VAR_2->rb_node);
 if (VAR_4)
  FUNC_0(VAR_4, -VAR_0, VAR_3);
}

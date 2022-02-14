
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rb_node {int dummy; } ;
struct ovl_readdir_data {int err; TYPE_1__* root; int list; } ;
struct ovl_cache_entry {int node; int l_node; } ;
struct TYPE_2__ {struct rb_node* rb_node; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (char const*,int,struct rb_node***,struct rb_node**) ;
 struct ovl_cache_entry* FUNC_2 (struct ovl_readdir_data*,char const*,int,int ,unsigned int) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,struct rb_node*,struct rb_node**) ;

__attribute__((used)) static int FUNC_5(struct ovl_readdir_data *VAR_1,
      const char *VAR_2, int VAR_3, u64 VAR_4,
      unsigned int VAR_5)
{
 struct rb_node **VAR_6 = &VAR_1->root->rb_node;
 struct rb_node *VAR_7 = ((void*)0);
 struct ovl_cache_entry *VAR_8;

 if (FUNC_1(VAR_2, VAR_3, &VAR_6, &VAR_7))
  return 0;

 VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_8 == ((void*)0)) {
  VAR_1->err = -VAR_0;
  return -VAR_0;
 }

 FUNC_0(&VAR_8->l_node, VAR_1->list);
 FUNC_4(&VAR_8->node, VAR_7, VAR_6);
 FUNC_3(&VAR_8->node, VAR_1->root);

 return 0;
}

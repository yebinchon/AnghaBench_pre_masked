
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_mod_elem {int op; int slot; int node; int generation; int blockptr; int key; int logical; } ;
struct extent_buffer {int start; } ;
typedef int gfp_t ;
typedef enum mod_log_op { ____Placeholder_mod_log_op } mod_log_op ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct extent_buffer*,int) ;
 int FUNC_2 (struct extent_buffer*,int *,int) ;
 int FUNC_3 (struct extent_buffer*,int) ;
 struct tree_mod_elem* FUNC_4 (int,int ) ;

__attribute__((used)) static struct tree_mod_elem *
FUNC_5(struct extent_buffer *VAR_1, int VAR_2,
      enum mod_log_op VAR_3, gfp_t VAR_4)
{
 struct tree_mod_elem *VAR_5;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_4);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->logical = VAR_1->start;
 if (VAR_3 != VAR_0) {
  FUNC_2(VAR_1, &VAR_5->key, VAR_2);
  VAR_5->blockptr = FUNC_1(VAR_1, VAR_2);
 }
 VAR_5->op = VAR_3;
 VAR_5->slot = VAR_2;
 VAR_5->generation = FUNC_3(VAR_1, VAR_2);
 FUNC_0(&VAR_5->node);

 return VAR_5;
}

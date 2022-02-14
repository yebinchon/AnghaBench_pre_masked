
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_state {int dummy; } ;
struct fscache_object {int lock; int lookup_jif; int n_obj_ops; int n_ops; int debug_id; struct fscache_object* parent; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct fscache_state const* FUNC_5 (int ) ;

__attribute__((used)) static const struct fscache_state *FUNC_6(struct fscache_object *VAR_2,
       int VAR_3)
{
 struct fscache_object *VAR_4 = VAR_2->parent;

 FUNC_1("{OBJ%x},%d", VAR_2->debug_id, VAR_3);

 FUNC_0(VAR_4 != ((void*)0));

 FUNC_3(&VAR_4->lock);
 VAR_4->n_ops++;
 VAR_4->n_obj_ops++;
 VAR_2->lookup_jif = VAR_1;
 FUNC_4(&VAR_4->lock);

 FUNC_2("");
 return FUNC_5(VAR_0);
}

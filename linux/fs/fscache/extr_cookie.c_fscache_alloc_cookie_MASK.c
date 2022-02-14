
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_cookie_def {int type; } ;
struct fscache_cookie {size_t key_len; size_t aux_len; int flags; int stores; int backing_objects; int stores_lock; int lock; int type; void* netfs_data; struct fscache_cookie* parent; struct fscache_cookie_def const* def; int n_active; int n_children; int usage; int aux; int inline_aux; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_3 ;
 int FUNC_2 (int *,int) ;
 int VAR_4 ;
 int FUNC_3 (struct fscache_cookie*) ;
 scalar_t__ FUNC_4 (struct fscache_cookie*,void const*,size_t) ;
 struct fscache_cookie* FUNC_5 (int ,int ) ;
 int FUNC_6 (void const*,int,int ) ;
 int FUNC_7 (int ,void const*,int) ;
 int FUNC_8 (int *) ;

struct fscache_cookie *FUNC_9(
 struct fscache_cookie *VAR_5,
 const struct fscache_cookie_def *VAR_6,
 const void *VAR_7, size_t VAR_8,
 const void *VAR_9, size_t VAR_10,
 void *VAR_11,
 loff_t VAR_12)
{
 struct fscache_cookie *VAR_13;


 VAR_13 = FUNC_5(VAR_4, VAR_1);
 if (!VAR_13)
  return ((void*)0);

 VAR_13->key_len = VAR_8;
 VAR_13->aux_len = VAR_10;

 if (FUNC_4(VAR_13, VAR_7, VAR_8) < 0)
  goto nomem;

 if (VAR_13->aux_len <= sizeof(VAR_13->inline_aux)) {
  FUNC_7(VAR_13->inline_aux, VAR_9, VAR_13->aux_len);
 } else {
  VAR_13->aux = FUNC_6(VAR_9, VAR_13->aux_len, VAR_1);
  if (!VAR_13->aux)
   goto nomem;
 }

 FUNC_2(&VAR_13->usage, 1);
 FUNC_2(&VAR_13->n_children, 0);




 FUNC_2(&VAR_13->n_active, 1);

 VAR_13->def = VAR_6;
 VAR_13->parent = VAR_5;
 VAR_13->netfs_data = VAR_11;
 VAR_13->flags = (1 << VAR_0);
 VAR_13->type = VAR_6->type;
 FUNC_8(&VAR_13->lock);
 FUNC_8(&VAR_13->stores_lock);
 FUNC_0(&VAR_13->backing_objects);



 FUNC_1(&VAR_13->stores, VAR_2 & ~VAR_3);
 return VAR_13;

nomem:
 FUNC_3(VAR_13);
 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_state {int dummy; } ;
struct fscache_object {scalar_t__ n_ops; scalar_t__ n_children; scalar_t__ n_in_progress; int dependents; int lock; int flags; scalar_t__ oob_event_mask; int debug_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct fscache_object*) ;
 int FUNC_3 (struct fscache_object*) ;
 int FUNC_4 (struct fscache_object*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 struct fscache_state const* FUNC_9 (int ) ;

__attribute__((used)) static const struct fscache_state *FUNC_10(struct fscache_object *VAR_5,
             int VAR_6)
{
 FUNC_0("{OBJ%x,%d,%d},%d",
        VAR_5->debug_id, VAR_5->n_ops, VAR_5->n_children, VAR_6);

 FUNC_3(VAR_5);
 VAR_5->oob_event_mask = 0;

 if (FUNC_8(VAR_2, &VAR_5->flags)) {

  FUNC_1(VAR_1, &VAR_5->flags);
  FUNC_2(VAR_5);
 }

 if (FUNC_5(&VAR_5->dependents) &&
     VAR_5->n_ops == 0 &&
     VAR_5->n_children == 0)
  return FUNC_9(VAR_0);

 if (VAR_5->n_in_progress == 0) {
  FUNC_6(&VAR_5->lock);
  if (VAR_5->n_ops > 0 && VAR_5->n_in_progress == 0)
   FUNC_4(VAR_5);
  FUNC_7(&VAR_5->lock);
 }

 if (!FUNC_5(&VAR_5->dependents))
  return FUNC_9(VAR_3);

 return FUNC_9(VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fscache_state {int dummy; } ;
struct fscache_operation {int flags; } ;
struct fscache_object {TYPE_2__* cache; int flags; struct fscache_cookie* cookie; int debug_id; } ;
struct fscache_cookie {int lock; int flags; int stores; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int invalidate_object; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct fscache_object*) ;
 int FUNC_5 (struct fscache_cookie*) ;
 int FUNC_6 (struct fscache_object*) ;
 int FUNC_7 (struct fscache_cookie*,struct fscache_operation*,int ,int *,int *) ;
 int VAR_10 ;
 int FUNC_8 (struct fscache_operation*) ;
 scalar_t__ FUNC_9 (struct fscache_object*,struct fscache_operation*) ;
 int FUNC_10 (struct fscache_object*) ;
 int FUNC_11 (struct fscache_object*) ;
 int FUNC_12 (struct fscache_operation*) ;
 struct fscache_operation* FUNC_13 (int,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 int FUNC_19 (struct fscache_cookie*,int *,struct fscache_operation*,int ) ;
 struct fscache_state const* FUNC_20 (int ) ;
 int FUNC_21 (int *,int ) ;

__attribute__((used)) static const struct fscache_state *FUNC_22(struct fscache_object *VAR_11,
             int VAR_12)
{
 struct fscache_operation *VAR_13;
 struct fscache_cookie *VAR_14 = VAR_11->cookie;

 FUNC_1("{OBJ%x},%d", VAR_11->debug_id, VAR_12);




 if (!FUNC_11(VAR_11)) {
  FUNC_0(FUNC_14(&VAR_11->cookie->stores));
  FUNC_15(VAR_3, &VAR_11->flags);
  FUNC_2(" [no cookie]");
  return FUNC_20(VAR_8);
 }


 FUNC_5(VAR_14);
 FUNC_3(VAR_2, &VAR_11->flags);
 FUNC_4(VAR_11);


 VAR_13 = FUNC_13(sizeof(*VAR_13), VAR_7);
 if (!VAR_13)
  goto nomem;

 FUNC_7(VAR_14, VAR_13, VAR_11->cache->ops->invalidate_object,
          ((void*)0), ((void*)0));
 VAR_13->flags = VAR_4 |
  (1 << VAR_5) |
  (1 << VAR_6);
 FUNC_19(VAR_14, ((void*)0), VAR_13, VAR_10);

 FUNC_16(&VAR_14->lock);
 if (FUNC_9(VAR_11, VAR_13) < 0)
  goto submit_op_failed;
 FUNC_17(&VAR_14->lock);
 FUNC_8(VAR_13);





 FUNC_15(VAR_1, &VAR_14->flags);




 if (FUNC_18(VAR_0, &VAR_14->flags))
  FUNC_21(&VAR_14->flags, VAR_0);
 FUNC_2(" [ok]");
 return FUNC_20(VAR_9);

nomem:
 FUNC_6(VAR_11);
 FUNC_10(VAR_11);
 FUNC_2(" [ENOMEM]");
 return FUNC_20(VAR_8);

submit_op_failed:
 FUNC_6(VAR_11);
 FUNC_17(&VAR_14->lock);
 FUNC_10(VAR_11);
 FUNC_12(VAR_13);
 FUNC_2(" [EIO]");
 return FUNC_20(VAR_8);
}

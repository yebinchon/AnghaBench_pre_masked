
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_operation {scalar_t__ state; int flags; } ;
struct fscache_object {int cookie; } ;
typedef enum fscache_operation_state { ____Placeholder_fscache_operation_state } fscache_operation_state ;
typedef int atomic_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (struct fscache_object*) ;
 int FUNC_3 (struct fscache_operation*,int) ;
 scalar_t__ FUNC_4 (struct fscache_object*) ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,struct fscache_operation*,int ) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int *,int ,int ) ;

int FUNC_10(struct fscache_object *VAR_7,
       struct fscache_operation *VAR_8,
       atomic_t *VAR_9,
       atomic_t *VAR_10)
{
 int VAR_11;

 if (!FUNC_6(VAR_3, &VAR_8->flags))
  goto check_if_dead;

 FUNC_0(">>> WT");
 if (VAR_9)
  FUNC_5(VAR_9);
 if (FUNC_9(&VAR_8->flags, VAR_3,
   VAR_4) != 0) {
  FUNC_7(VAR_7->cookie, VAR_8, VAR_6);
  VAR_11 = FUNC_3(VAR_8, 0);
  if (VAR_11 == 0)
   return -VAR_1;



  FUNC_9(&VAR_8->flags, VAR_3,
       VAR_5);
 }
 FUNC_0("<<< GO");

check_if_dead:
 if (VAR_8->state == VAR_2) {
  if (VAR_10)
   FUNC_5(VAR_10);
  FUNC_1(" = -ENOBUFS [cancelled]");
  return -VAR_0;
 }
 if (FUNC_8(FUNC_4(VAR_7) ||
       FUNC_2(VAR_7))) {
  enum fscache_operation_state VAR_12 = VAR_8->state;
  FUNC_7(VAR_7->cookie, VAR_8, VAR_6);
  FUNC_3(VAR_8, 1);
  if (VAR_10)
   FUNC_5(VAR_10);
  FUNC_1(" = -ENOBUFS [obj dead %d]", VAR_12);
  return -VAR_0;
 }
 return 0;
}

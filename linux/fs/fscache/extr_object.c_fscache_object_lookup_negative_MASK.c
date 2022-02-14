
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fscache_object {int flags; TYPE_1__* state; int debug_id; struct fscache_cookie* cookie; } ;
struct fscache_cookie {int flags; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,int ) ;

void FUNC_9(struct fscache_object *VAR_5)
{
 struct fscache_cookie *VAR_6 = VAR_5->cookie;

 FUNC_1("{OBJ%x,%s}", VAR_5->debug_id, VAR_5->state->name);

 if (!FUNC_7(VAR_3, &VAR_5->flags)) {
  FUNC_5(&VAR_4);




  FUNC_6(VAR_1, &VAR_6->flags);
  FUNC_3(VAR_2, &VAR_6->flags);

  FUNC_0("wake up lookup %p", &VAR_6->flags);
  FUNC_4(VAR_0, &VAR_6->flags);
  FUNC_8(&VAR_6->flags, VAR_0);
 }
 FUNC_2("");
}

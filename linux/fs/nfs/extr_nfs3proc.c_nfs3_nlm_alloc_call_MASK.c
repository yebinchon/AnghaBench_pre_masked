
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_lock_context {TYPE_1__* open_context; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 struct nfs_lock_context *VAR_2 = VAR_1;
 if (VAR_2 && FUNC_2(VAR_0, &VAR_2->open_context->flags)) {
  FUNC_0(VAR_2->open_context);
  FUNC_1(VAR_2->open_context);
 }
}

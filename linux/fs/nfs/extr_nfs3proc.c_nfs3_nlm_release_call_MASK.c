
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {int flags; } ;
struct nfs_lock_context {struct nfs_open_context* open_context; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfs_lock_context*) ;
 int FUNC_1 (struct nfs_open_context*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 struct nfs_lock_context *VAR_2 = VAR_1;
 struct nfs_open_context *VAR_3;
 if (VAR_2 && FUNC_2(VAR_0, &VAR_2->open_context->flags)) {
  VAR_3 = VAR_2->open_context;
  FUNC_0(VAR_2);
  FUNC_1(VAR_3);
 }
}

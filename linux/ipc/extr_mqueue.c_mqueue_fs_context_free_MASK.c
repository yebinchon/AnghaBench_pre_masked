
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mqueue_fs_context {int ipc_ns; } ;
struct fs_context {struct mqueue_fs_context* fs_private; } ;


 int FUNC_0 (struct mqueue_fs_context*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct fs_context *VAR_0)
{
 struct mqueue_fs_context *VAR_1 = VAR_0->fs_private;

 FUNC_1(VAR_1->ipc_ns);
 FUNC_0(VAR_1);
}

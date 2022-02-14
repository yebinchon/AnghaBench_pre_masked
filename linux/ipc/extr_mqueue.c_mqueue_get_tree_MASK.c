
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mqueue_fs_context {int ipc_ns; } ;
struct fs_context {struct mqueue_fs_context* fs_private; } ;


 int FUNC_0 (struct fs_context*,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct fs_context *VAR_1)
{
 struct mqueue_fs_context *VAR_2 = VAR_1->fs_private;

 return FUNC_0(VAR_1, VAR_0, VAR_2->ipc_ns);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_args {int dummy; } ;
struct fs_context {struct gfs2_args* fs_private; } ;


 int FUNC_0 (struct gfs2_args*) ;

__attribute__((used)) static void FUNC_1(struct fs_context *VAR_0)
{
 struct gfs2_args *VAR_1 = VAR_0->fs_private;

 FUNC_0(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct parent_paths_ctx {int refs; TYPE_1__* sctx; } ;
struct fs_path {int dummy; } ;
struct TYPE_2__ {int parent_root; } ;


 int FUNC_0 (int ,int ,struct fs_path*,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_1(int VAR_0, u64 VAR_1, int VAR_2, struct fs_path *VAR_3,
        void *VAR_4)
{
 struct parent_paths_ctx *VAR_5 = VAR_4;

 return FUNC_0(VAR_5->sctx->parent_root, VAR_1, VAR_3, VAR_5->sctx,
     VAR_5->refs);
}

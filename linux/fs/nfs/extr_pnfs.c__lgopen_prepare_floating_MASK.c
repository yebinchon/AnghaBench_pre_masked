
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pnfs_layout_range {int length; int offset; int iomode; } ;
struct nfs_open_context {int dummy; } ;
struct TYPE_3__ {int * lg_res; } ;
struct TYPE_4__ {int fmode; int * lg_args; } ;
struct nfs4_opendata {TYPE_1__ o_res; TYPE_2__ o_arg; struct nfs4_layoutget* lgp; } ;
struct nfs4_layoutget {int res; int args; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nfs4_layoutget* FUNC_0 (int *,struct nfs_open_context*,int *,struct pnfs_layout_range*,int ) ;

__attribute__((used)) static void FUNC_1(struct nfs4_opendata *VAR_6,
         struct nfs_open_context *VAR_7)
{
 struct pnfs_layout_range VAR_8 = {
  .iomode = (VAR_6->o_arg.fmode & VAR_0) ?
     VAR_3: VAR_2,
  .offset = 0,
  .length = VAR_4,
 };
 struct nfs4_layoutget *VAR_9;

 VAR_9 = FUNC_0(((void*)0), VAR_7, &VAR_5,
          &VAR_8, VAR_1);
 if (!VAR_9)
  return;
 VAR_6->lgp = VAR_9;
 VAR_6->o_arg.lg_args = &VAR_9->args;
 VAR_6->o_res.lg_res = &VAR_9->res;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rvu {int dummy; } ;
struct TYPE_2__ {int pcifunc; } ;
struct nix_txsch_free_req {int flags; TYPE_1__ hdr; } ;
struct msg_rsp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rvu*,int ) ;
 int FUNC_1 (struct rvu*,struct nix_txsch_free_req*) ;

int FUNC_2(struct rvu *VAR_1,
        struct nix_txsch_free_req *VAR_2,
        struct msg_rsp *VAR_3)
{
 if (VAR_2->flags & VAR_0)
  return FUNC_0(VAR_1, VAR_2->hdr.pcifunc);
 else
  return FUNC_1(VAR_1, VAR_2);
}

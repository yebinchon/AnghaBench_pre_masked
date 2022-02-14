
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rvu_hwinfo {int * block; } ;
struct rvu {struct rvu_hwinfo* hw; } ;
struct TYPE_2__ {int pcifunc; } ;
struct nix_vtag_config {scalar_t__ cfg_type; TYPE_1__ hdr; } ;
struct msg_rsp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rvu*,int,int,struct nix_vtag_config*) ;
 int FUNC_1 (struct rvu*,int ,int ) ;
 int FUNC_2 (struct rvu*,int *,int ,int ) ;

int FUNC_3(struct rvu *VAR_3,
      struct nix_vtag_config *VAR_4,
      struct msg_rsp *VAR_5)
{
 struct rvu_hwinfo *VAR_6 = VAR_3->hw;
 u16 VAR_7 = VAR_4->hdr.pcifunc;
 int VAR_8, VAR_9, VAR_10;

 VAR_8 = FUNC_1(VAR_3, VAR_0, VAR_7);
 if (VAR_8 < 0)
  return VAR_1;

 VAR_9 = FUNC_2(VAR_3, &VAR_6->block[VAR_8], VAR_7, 0);
 if (VAR_9 < 0)
  return VAR_1;

 if (VAR_4->cfg_type) {
  VAR_10 = FUNC_0(VAR_3, VAR_9, VAR_8, VAR_4);
  if (VAR_10)
   return VAR_2;
 } else {

  return 0;
 }

 return 0;
}

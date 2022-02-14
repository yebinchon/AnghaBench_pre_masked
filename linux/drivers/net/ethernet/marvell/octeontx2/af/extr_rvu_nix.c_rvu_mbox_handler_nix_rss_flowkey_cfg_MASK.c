
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rvu_hwinfo {int * block; } ;
struct rvu {struct rvu_hwinfo* hw; } ;
struct nix_rss_flowkey_cfg_rsp {int alg_idx; } ;
struct TYPE_2__ {int pcifunc; } ;
struct nix_rss_flowkey_cfg {int mcam_index; int group; int flowkey_cfg; TYPE_1__ hdr; } ;
struct nix_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nix_hw*,int ) ;
 struct nix_hw* FUNC_1 (struct rvu_hwinfo*,int) ;
 int FUNC_2 (struct rvu*,int,int ) ;
 int FUNC_3 (struct rvu*,int ,int ) ;
 int FUNC_4 (struct rvu*,int *,int ,int ) ;
 int FUNC_5 (struct rvu*,int ,int,int ,int,int ) ;

int FUNC_6(struct rvu *VAR_3,
      struct nix_rss_flowkey_cfg *VAR_4,
      struct nix_rss_flowkey_cfg_rsp *VAR_5)
{
 struct rvu_hwinfo *VAR_6 = VAR_3->hw;
 u16 VAR_7 = VAR_4->hdr.pcifunc;
 int VAR_8, VAR_9, VAR_10;
 struct nix_hw *VAR_11;

 VAR_10 = FUNC_3(VAR_3, VAR_0, VAR_7);
 if (VAR_10 < 0)
  return VAR_2;

 VAR_9 = FUNC_4(VAR_3, &VAR_6->block[VAR_10], VAR_7, 0);
 if (VAR_9 < 0)
  return VAR_2;

 VAR_11 = FUNC_1(VAR_3->hw, VAR_10);
 if (!VAR_11)
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_11, VAR_4->flowkey_cfg);

 if (VAR_8 < 0) {
  VAR_8 = FUNC_2(VAR_3, VAR_10,
        VAR_4->flowkey_cfg);
  if (VAR_8 < 0)
   return VAR_8;
 }
 VAR_5->alg_idx = VAR_8;
 FUNC_5(VAR_3, VAR_7, VAR_9, VAR_4->group,
           VAR_8, VAR_4->mcam_index);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct rvu_pfvf {int dummy; } ;
struct rvu_hwinfo {int total_pfs; int total_vfs; int max_vfs_per_pf; struct rvu_block* block; } ;
struct TYPE_2__ {int max; int bmap; } ;
struct rvu_block {size_t addr; int lfshift; int multislot; void* fn_map; TYPE_1__ lf; int name; int lfreset_reg; int msixcfg_reg; int lfcfg_reg; int vf_lfcnt_reg; int pf_lfcnt_reg; int lookup_reg; int type; int implemented; } ;
struct rvu {int dev; int rsrc_lock; void* hwvf; void* pf; struct rvu_hwinfo* hw; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 void* FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct rvu*) ;
 int FUNC_4 (struct rvu*) ;
 int FUNC_5 (struct rvu*) ;
 int FUNC_6 (struct rvu*) ;
 int FUNC_7 (struct rvu*) ;
 int FUNC_8 (struct rvu*,size_t,int ) ;
 int FUNC_9 (struct rvu*,struct rvu_block*) ;
 int FUNC_10 (struct rvu*) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static int FUNC_12(struct rvu *VAR_58)
{
 struct rvu_hwinfo *VAR_59 = VAR_58->hw;
 struct rvu_block *VAR_60;
 int VAR_61, VAR_62;
 u64 VAR_63;


 VAR_63 = FUNC_8(VAR_58, VAR_3, VAR_31);
 VAR_59->total_pfs = (VAR_63 >> 32) & 0xFF;
 VAR_59->total_vfs = (VAR_63 >> 20) & 0xFFF;
 VAR_59->max_vfs_per_pf = (VAR_63 >> 40) & 0xFF;


 VAR_60 = &VAR_59->block[VAR_2];
 if (!VAR_60->implemented)
  goto nix;
 VAR_63 = FUNC_8(VAR_58, VAR_2, VAR_26);
 VAR_60->lf.max = (VAR_63 >> 16) & 0xFFF;
 VAR_60->addr = VAR_2;
 VAR_60->type = VAR_9;
 VAR_60->lfshift = 8;
 VAR_60->lookup_reg = VAR_28;
 VAR_60->pf_lfcnt_reg = VAR_40;
 VAR_60->vf_lfcnt_reg = VAR_34;
 VAR_60->lfcfg_reg = VAR_29;
 VAR_60->msixcfg_reg = VAR_30;
 VAR_60->lfreset_reg = VAR_27;
 FUNC_11(VAR_60->name, "NPA");
 VAR_62 = FUNC_2(&VAR_60->lf);
 if (VAR_62)
  return VAR_62;

nix:

 VAR_60 = &VAR_59->block[VAR_1];
 if (!VAR_60->implemented)
  goto sso;
 VAR_63 = FUNC_8(VAR_58, VAR_1, VAR_21);
 VAR_60->lf.max = VAR_63 & 0xFFF;
 VAR_60->addr = VAR_1;
 VAR_60->type = VAR_8;
 VAR_60->lfshift = 8;
 VAR_60->lookup_reg = VAR_23;
 VAR_60->pf_lfcnt_reg = VAR_39;
 VAR_60->vf_lfcnt_reg = VAR_33;
 VAR_60->lfcfg_reg = VAR_24;
 VAR_60->msixcfg_reg = VAR_25;
 VAR_60->lfreset_reg = VAR_22;
 FUNC_11(VAR_60->name, "NIX");
 VAR_62 = FUNC_2(&VAR_60->lf);
 if (VAR_62)
  return VAR_62;

sso:

 VAR_60 = &VAR_59->block[VAR_4];
 if (!VAR_60->implemented)
  goto ssow;
 VAR_63 = FUNC_8(VAR_58, VAR_4, VAR_48);
 VAR_60->lf.max = VAR_63 & 0xFFFF;
 VAR_60->addr = VAR_4;
 VAR_60->type = VAR_10;
 VAR_60->multislot = 1;
 VAR_60->lfshift = 3;
 VAR_60->lookup_reg = VAR_50;
 VAR_60->pf_lfcnt_reg = VAR_42;
 VAR_60->vf_lfcnt_reg = VAR_36;
 VAR_60->lfcfg_reg = VAR_51;
 VAR_60->msixcfg_reg = VAR_52;
 VAR_60->lfreset_reg = VAR_49;
 FUNC_11(VAR_60->name, "SSO GROUP");
 VAR_62 = FUNC_2(&VAR_60->lf);
 if (VAR_62)
  return VAR_62;

ssow:

 VAR_60 = &VAR_59->block[VAR_5];
 if (!VAR_60->implemented)
  goto tim;
 VAR_60->lf.max = (VAR_63 >> 56) & 0xFF;
 VAR_60->addr = VAR_5;
 VAR_60->type = VAR_11;
 VAR_60->multislot = 1;
 VAR_60->lfshift = 3;
 VAR_60->lookup_reg = VAR_45;
 VAR_60->pf_lfcnt_reg = VAR_41;
 VAR_60->vf_lfcnt_reg = VAR_35;
 VAR_60->lfcfg_reg = VAR_46;
 VAR_60->msixcfg_reg = VAR_47;
 VAR_60->lfreset_reg = VAR_44;
 FUNC_11(VAR_60->name, "SSOWS");
 VAR_62 = FUNC_2(&VAR_60->lf);
 if (VAR_62)
  return VAR_62;

tim:

 VAR_60 = &VAR_59->block[VAR_6];
 if (!VAR_60->implemented)
  goto cpt;
 VAR_63 = FUNC_8(VAR_58, VAR_6, VAR_53);
 VAR_60->lf.max = VAR_63 & 0xFFFF;
 VAR_60->addr = VAR_6;
 VAR_60->type = VAR_12;
 VAR_60->multislot = 1;
 VAR_60->lfshift = 3;
 VAR_60->lookup_reg = VAR_55;
 VAR_60->pf_lfcnt_reg = VAR_43;
 VAR_60->vf_lfcnt_reg = VAR_37;
 VAR_60->lfcfg_reg = VAR_56;
 VAR_60->msixcfg_reg = VAR_57;
 VAR_60->lfreset_reg = VAR_54;
 FUNC_11(VAR_60->name, "TIM");
 VAR_62 = FUNC_2(&VAR_60->lf);
 if (VAR_62)
  return VAR_62;

cpt:

 VAR_60 = &VAR_59->block[VAR_0];
 if (!VAR_60->implemented)
  goto init;
 VAR_63 = FUNC_8(VAR_58, VAR_0, VAR_14);
 VAR_60->lf.max = VAR_63 & 0xFF;
 VAR_60->addr = VAR_0;
 VAR_60->type = VAR_7;
 VAR_60->multislot = 1;
 VAR_60->lfshift = 3;
 VAR_60->lookup_reg = VAR_16;
 VAR_60->pf_lfcnt_reg = VAR_38;
 VAR_60->vf_lfcnt_reg = VAR_32;
 VAR_60->lfcfg_reg = VAR_17;
 VAR_60->msixcfg_reg = VAR_18;
 VAR_60->lfreset_reg = VAR_15;
 FUNC_11(VAR_60->name, "CPT");
 VAR_62 = FUNC_2(&VAR_60->lf);
 if (VAR_62)
  return VAR_62;

init:

 VAR_58->pf = FUNC_0(VAR_58->dev, VAR_59->total_pfs,
          sizeof(struct rvu_pfvf), VAR_20);
 if (!VAR_58->pf)
  return -VAR_19;

 VAR_58->hwvf = FUNC_0(VAR_58->dev, VAR_59->total_vfs,
     sizeof(struct rvu_pfvf), VAR_20);
 if (!VAR_58->hwvf)
  return -VAR_19;

 FUNC_1(&VAR_58->rsrc_lock);

 VAR_62 = FUNC_10(VAR_58);
 if (VAR_62)
  return VAR_62;

 for (VAR_61 = 0; VAR_61 < VAR_13; VAR_61++) {
  VAR_60 = &VAR_59->block[VAR_61];
  if (!VAR_60->lf.bmap)
   continue;


  VAR_60->fn_map = FUNC_0(VAR_58->dev, VAR_60->lf.max,
          sizeof(u16), VAR_20);
  if (!VAR_60->fn_map)
   return -VAR_19;




  FUNC_9(VAR_58, VAR_60);
 }

 VAR_62 = FUNC_7(VAR_58);
 if (VAR_62)
  goto exit;

 VAR_62 = FUNC_4(VAR_58);
 if (VAR_62)
  goto exit;

 VAR_62 = FUNC_6(VAR_58);
 if (VAR_62)
  goto cgx_err;

 VAR_62 = FUNC_5(VAR_58);
 if (VAR_62)
  goto cgx_err;

 return 0;

cgx_err:
 FUNC_3(VAR_58);
exit:
 return VAR_62;
}

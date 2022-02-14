
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rvu_hwinfo {int cgx; int lmac_per_cgx; int cgx_links; int lbk_links; int sdp_links; int nix0; struct rvu_block* block; } ;
struct rvu_block {int dummy; } ;
struct rvu {int dev; struct rvu_hwinfo* hw; } ;
struct nix_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
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
 int FUNC_0 (int ,int,int ) ;
 scalar_t__ FUNC_1 (struct rvu*) ;
 int FUNC_2 (struct rvu*,int ,int) ;
 int FUNC_3 (struct rvu*,struct rvu_block*) ;
 int FUNC_4 (struct rvu*,int) ;
 int FUNC_5 (struct rvu*,int) ;
 int FUNC_6 (struct rvu*,int) ;
 int FUNC_7 (struct rvu*,int ,int) ;
 int FUNC_8 (struct rvu*,int ,int) ;
 int FUNC_9 (struct rvu*,int ,int) ;
 int FUNC_10 (struct rvu*,int ,int ) ;
 int FUNC_11 (struct rvu*,int,int ) ;
 int FUNC_12 (struct rvu*,int,int ,int) ;

int FUNC_13(struct rvu *VAR_34)
{
 struct rvu_hwinfo *VAR_35 = VAR_34->hw;
 struct rvu_block *VAR_36;
 int VAR_37, VAR_38;
 u64 VAR_39;

 VAR_37 = FUNC_10(VAR_34, VAR_1, 0);
 if (VAR_37 < 0)
  return 0;
 VAR_36 = &VAR_35->block[VAR_37];





 if (FUNC_1(VAR_34))
  FUNC_12(VAR_34, VAR_37, VAR_4,
       FUNC_11(VAR_34, VAR_37, VAR_4) | 0x5EULL);


 VAR_38 = FUNC_4(VAR_34, VAR_37);
 if (VAR_38)
  return VAR_38;


 VAR_39 = FUNC_11(VAR_34, VAR_37, VAR_6);
 VAR_35->cgx = (VAR_39 >> 12) & 0xF;
 VAR_35->lmac_per_cgx = (VAR_39 >> 8) & 0xF;
 VAR_35->cgx_links = VAR_35->cgx * VAR_35->lmac_per_cgx;
 VAR_35->lbk_links = 1;
 VAR_35->sdp_links = 1;


 VAR_38 = FUNC_3(VAR_34, VAR_36);
 if (VAR_38)
  return VAR_38;


 FUNC_12(VAR_34, VAR_37, VAR_5, 0x0ULL);

 if (VAR_37 == VAR_0) {
  VAR_35->nix0 = FUNC_0(VAR_34->dev,
     sizeof(struct nix_hw), VAR_3);
  if (!VAR_35->nix0)
   return -VAR_2;

  VAR_38 = FUNC_9(VAR_34, VAR_35->nix0, VAR_37);
  if (VAR_38)
   return VAR_38;

  VAR_38 = FUNC_2(VAR_34, VAR_35->nix0, VAR_37);
  if (VAR_38)
   return VAR_38;

  VAR_38 = FUNC_8(VAR_34, VAR_35->nix0, VAR_37);
  if (VAR_38)
   return VAR_38;


  FUNC_7(VAR_34, VAR_35->nix0, VAR_37);





  FUNC_12(VAR_34, VAR_37, VAR_14,
       (VAR_18 << 8) | (VAR_23 << 4) | 0x0F);
  FUNC_12(VAR_34, VAR_37, VAR_12,
       (VAR_19 << 8) | (VAR_24 << 4) | 0x0F);
  FUNC_12(VAR_34, VAR_37, VAR_7,
       (VAR_21 << 8) | (VAR_29 << 4) | 0x0F);
  FUNC_12(VAR_34, VAR_37, VAR_13,
       (VAR_19 << 8) | (VAR_25 << 4) | 0x0F);
  FUNC_12(VAR_34, VAR_37, VAR_8,
       (VAR_21 << 8) | (VAR_30 << 4) | 0x0F);
  FUNC_12(VAR_34, VAR_37, VAR_16,
       (VAR_20 << 8) | (VAR_27 << 4) | 0x0F);
  FUNC_12(VAR_34, VAR_37, VAR_10,
       (VAR_22 << 8) | (VAR_32 << 4) | 0x0F);
  FUNC_12(VAR_34, VAR_37, VAR_17,
       (VAR_20 << 8) | (VAR_28 << 4) | 0x0F);
  FUNC_12(VAR_34, VAR_37, VAR_11,
       (VAR_22 << 8) | (VAR_33 << 4) | 0x0F);
  FUNC_12(VAR_34, VAR_37, VAR_15,
       (VAR_20 << 8) | (VAR_26 << 4) | 0x0F);
  FUNC_12(VAR_34, VAR_37, VAR_9,
       (VAR_22 << 8) | (VAR_31 << 4) |
       0x0F);

  VAR_38 = FUNC_6(VAR_34, VAR_37);
  if (VAR_38)
   return VAR_38;


  FUNC_5(VAR_34, VAR_37);
 }
 return 0;
}

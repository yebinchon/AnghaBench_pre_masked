
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct rvu_pfvf {int nixlf; } ;
struct rvu {int dev; int hw; } ;
struct nix_mark_format_cfg_rsp {int mark_format_idx; } ;
struct TYPE_2__ {int pcifunc; } ;
struct nix_mark_format_cfg {scalar_t__ r_val; scalar_t__ r_mask; scalar_t__ y_val; scalar_t__ y_mask; scalar_t__ offset; TYPE_1__ hdr; } ;
struct nix_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int) ;
 struct nix_hw* FUNC_1 (int ,int) ;
 int FUNC_2 (struct rvu*,int ,int) ;
 int FUNC_3 (int) ;
 struct rvu_pfvf* FUNC_4 (struct rvu*,int) ;
 int FUNC_5 (struct rvu*,struct nix_hw*,int,int) ;

int FUNC_6(struct rvu *VAR_5,
      struct nix_mark_format_cfg *VAR_6,
      struct nix_mark_format_cfg_rsp *VAR_7)
{
 u16 VAR_8 = VAR_6->hdr.pcifunc;
 struct nix_hw *VAR_9;
 struct rvu_pfvf *VAR_10;
 int VAR_11, VAR_12;
 u32 VAR_13;

 VAR_10 = FUNC_4(VAR_5, VAR_8);
 VAR_11 = FUNC_2(VAR_5, VAR_0, VAR_8);
 if (!VAR_10->nixlf || VAR_11 < 0)
  return VAR_2;

 VAR_9 = FUNC_1(VAR_5->hw, VAR_11);
 if (!VAR_9)
  return -VAR_1;

 VAR_13 = (((u32)VAR_6->offset & 0x7) << 16) |
       (((u32)VAR_6->y_mask & 0xF) << 12) |
       (((u32)VAR_6->y_val & 0xF) << 8) |
       (((u32)VAR_6->r_mask & 0xF) << 4) | ((u32)VAR_6->r_val & 0xF);

 VAR_12 = FUNC_5(VAR_5, VAR_9, VAR_11, VAR_13);
 if (VAR_12 < 0) {
  FUNC_0(VAR_5->dev, "No mark_format_ctl for (pf:%d, vf:%d)",
   FUNC_3(VAR_8), VAR_8 & VAR_4);
  return VAR_3;
 }

 VAR_7->mark_format_idx = VAR_12;
 return 0;
}

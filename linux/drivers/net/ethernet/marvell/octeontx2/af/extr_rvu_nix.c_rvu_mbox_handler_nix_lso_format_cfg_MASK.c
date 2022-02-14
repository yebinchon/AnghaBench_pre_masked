
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct rvu_pfvf {int nixlf; } ;
struct rvu {int hw; } ;
struct nix_lso_format_cfg_rsp {int lso_format_idx; } ;
struct TYPE_3__ {int pcifunc; } ;
struct nix_lso_format_cfg {int* fields; int field_mask; TYPE_1__ hdr; } ;
struct TYPE_4__ {int in_use; int total; } ;
struct nix_hw {TYPE_2__ lso; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;
 struct nix_hw* FUNC_1 (int ,int) ;
 int FUNC_2 (struct rvu*,int ,int ) ;
 struct rvu_pfvf* FUNC_3 (struct rvu*,int ) ;
 int FUNC_4 (struct rvu*,int,int ) ;
 int FUNC_5 (struct rvu*,int,int ,int) ;

int FUNC_6(struct rvu *VAR_5,
     struct nix_lso_format_cfg *VAR_6,
     struct nix_lso_format_cfg_rsp *VAR_7)
{
 u16 VAR_8 = VAR_6->hdr.pcifunc;
 struct nix_hw *VAR_9;
 struct rvu_pfvf *VAR_10;
 int VAR_11, VAR_12, VAR_13;
 u64 VAR_14;

 VAR_10 = FUNC_3(VAR_5, VAR_8);
 VAR_11 = FUNC_2(VAR_5, VAR_0, VAR_8);
 if (!VAR_10->nixlf || VAR_11 < 0)
  return VAR_2;

 VAR_9 = FUNC_1(VAR_5->hw, VAR_11);
 if (!VAR_9)
  return -VAR_1;


 for (VAR_12 = 0; VAR_12 < VAR_9->lso.in_use; VAR_12++) {
  for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
   VAR_14 = FUNC_4(VAR_5, VAR_11,
      FUNC_0(VAR_12, VAR_13));
   if (VAR_6->fields[VAR_13] != (VAR_14 & VAR_6->field_mask))
    break;
  }

  if (VAR_13 == VAR_4)
   break;
 }

 if (VAR_12 < VAR_9->lso.in_use) {

  VAR_7->lso_format_idx = VAR_12;
  return 0;
 }

 if (VAR_9->lso.in_use == VAR_9->lso.total)
  return VAR_3;

 VAR_7->lso_format_idx = VAR_9->lso.in_use++;

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++)
  FUNC_5(VAR_5, VAR_11,
       FUNC_0(VAR_7->lso_format_idx, VAR_13),
       VAR_6->fields[VAR_13]);

 return 0;
}

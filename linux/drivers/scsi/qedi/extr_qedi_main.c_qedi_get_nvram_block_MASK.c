
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int abs_pf_id; } ;
struct TYPE_6__ {TYPE_1__ common; } ;
struct qedi_ctx {TYPE_4__* iscsi_image; TYPE_2__ dev_info; } ;
struct nvm_iscsi_block {int id; } ;
struct TYPE_7__ {struct nvm_iscsi_block* block; } ;
struct TYPE_8__ {TYPE_3__ iscsi_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static struct nvm_iscsi_block *
FUNC_0(struct qedi_ctx *VAR_7)
{
 int VAR_8;
 u8 VAR_9;
 u32 VAR_10;
 struct nvm_iscsi_block *VAR_11;

 VAR_9 = VAR_7->dev_info.common.abs_pf_id;
 VAR_11 = &VAR_7->iscsi_image->iscsi_cfg.block[0];
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++, VAR_11++) {
  VAR_10 = ((VAR_11->id) & VAR_2) >>
   VAR_3;
  if (VAR_10 & (VAR_1 |
    VAR_4) &&
   (VAR_9 == (VAR_11->id & VAR_5)
    >> VAR_6))
   return VAR_11;
 }
 return ((void*)0);
}

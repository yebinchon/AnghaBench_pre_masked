
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct super_block {int dummy; } ;
struct pbr_sector_t {scalar_t__ bpb; } ;
struct fs_info_t {scalar_t__ vol_flag; scalar_t__ vol_type; TYPE_1__* pbr_bh; int PBR_sector; } ;
struct bpbex_t {int vol_flags; } ;
struct TYPE_6__ {struct fs_info_t fs_info; } ;
struct TYPE_5__ {scalar_t__ b_data; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct super_block*,int ,TYPE_1__**,int) ;
 int FUNC_4 (struct super_block*,int ,TYPE_1__*,int) ;

void FUNC_5(struct super_block *VAR_3, u32 VAR_4)
{
 struct pbr_sector_t *VAR_5;
 struct bpbex_t *VAR_6;
 struct fs_info_t *VAR_7 = &(FUNC_0(VAR_3)->fs_info);

 if (VAR_7->vol_flag == VAR_4)
  return;

 VAR_7->vol_flag = VAR_4;

 if (VAR_7->vol_type == VAR_0) {
  if (!VAR_7->pbr_bh) {
   if (FUNC_3(VAR_3, VAR_7->PBR_sector,
     &VAR_7->pbr_bh, 1) != VAR_1)
    return;
  }

  VAR_5 = (struct pbr_sector_t *)VAR_7->pbr_bh->b_data;
  VAR_6 = (struct bpbex_t *)VAR_5->bpb;
  FUNC_1(VAR_6->vol_flags, (u16)VAR_4);




  if ((VAR_4 == VAR_2) && (!FUNC_2(VAR_7->pbr_bh)))
   FUNC_4(VAR_3, VAR_7->PBR_sector, VAR_7->pbr_bh, 1);
  else
   FUNC_4(VAR_3, VAR_7->PBR_sector, VAR_7->pbr_bh, 0);
 }
}

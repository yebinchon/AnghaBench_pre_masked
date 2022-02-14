
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_5__ {int fmr_owner; int fmr_length; int fmr_physical; } ;
struct ext4_fsmap {scalar_t__ fmr_physical; scalar_t__ fmr_flags; int fmr_owner; scalar_t__ fmr_length; } ;
struct ext4_getfsmap_info {TYPE_2__ gfi_high; int gfi_dev; struct ext4_fsmap gfi_low; } ;
struct TYPE_4__ {scalar_t__ j_blk_offset; scalar_t__ j_maxlen; } ;
typedef TYPE_1__ journal_t ;
struct TYPE_6__ {TYPE_1__* s_journal; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,struct ext4_getfsmap_info*,struct ext4_fsmap*) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int FUNC_3 (struct super_block*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct super_block*,int ,int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_1, struct ext4_fsmap *VAR_2,
    struct ext4_getfsmap_info *VAR_3)
{
 journal_t *VAR_4 = FUNC_0(VAR_1)->s_journal;
 struct ext4_fsmap VAR_5;


 VAR_3->gfi_low = VAR_2[0];
 VAR_3->gfi_low.fmr_length = 0;

 FUNC_2(&VAR_3->gfi_high, 0xFF, sizeof(VAR_3->gfi_high));

 FUNC_4(VAR_1, VAR_3->gfi_dev, 0,
   VAR_3->gfi_low.fmr_physical,
   VAR_3->gfi_low.fmr_length,
   VAR_3->gfi_low.fmr_owner);

 FUNC_3(VAR_1, VAR_3->gfi_dev, 0,
   VAR_3->gfi_high.fmr_physical,
   VAR_3->gfi_high.fmr_length,
   VAR_3->gfi_high.fmr_owner);

 if (VAR_2[0].fmr_physical > 0)
  return 0;


 VAR_5.fmr_physical = VAR_4->j_blk_offset;
 VAR_5.fmr_length = VAR_4->j_maxlen;
 VAR_5.fmr_owner = VAR_0;
 VAR_5.fmr_flags = 0;

 return FUNC_1(VAR_1, VAR_3, &VAR_5);
}

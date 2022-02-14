
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct udf_sb_info {struct buffer_head* s_lvid_bh; } ;
struct super_block {scalar_t__ s_blocksize; } ;
struct TYPE_2__ {scalar_t__ extLength; } ;
struct logicalVolIntegrityDesc {TYPE_1__ nextIntegrityExt; } ;
struct kernel_extent_ad {scalar_t__ extLength; int extLocation; } ;
struct buffer_head {scalar_t__ b_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 struct kernel_extent_ad FUNC_2 (TYPE_1__) ;
 struct buffer_head* FUNC_3 (struct super_block*,int ,int ,scalar_t__*) ;
 int FUNC_4 (struct super_block*,char*,int) ;

__attribute__((used)) static void FUNC_5(struct super_block *VAR_2, struct kernel_extent_ad VAR_3)
{
 struct buffer_head *VAR_4, *VAR_5;
 uint16_t VAR_6;
 struct udf_sb_info *VAR_7 = FUNC_0(VAR_2);
 struct logicalVolIntegrityDesc *VAR_8;
 int VAR_9 = 0;

 while (++VAR_9 <= VAR_1) {
  VAR_5 = ((void*)0);
  while (VAR_3.extLength > 0 &&
   (VAR_4 = FUNC_3(VAR_2, VAR_3.extLocation,
     VAR_3.extLocation, &VAR_6))) {
   if (VAR_6 != VAR_0) {
    FUNC_1(VAR_4);
    break;
   }

   FUNC_1(VAR_5);
   VAR_5 = VAR_4;

   VAR_3.extLength -= VAR_2->s_blocksize;
   VAR_3.extLocation++;
  }

  if (!VAR_5)
   return;

  FUNC_1(VAR_7->s_lvid_bh);
  VAR_7->s_lvid_bh = VAR_5;

  VAR_8 = (struct logicalVolIntegrityDesc *)VAR_5->b_data;
  if (VAR_8->nextIntegrityExt.extLength == 0)
   return;

  VAR_3 = FUNC_2(VAR_8->nextIntegrityExt);
 }

 FUNC_4(VAR_2, "Too many LVID indirections (max %u), ignoring.\n",
  VAR_1);
 FUNC_1(VAR_7->s_lvid_bh);
 VAR_7->s_lvid_bh = ((void*)0);
}

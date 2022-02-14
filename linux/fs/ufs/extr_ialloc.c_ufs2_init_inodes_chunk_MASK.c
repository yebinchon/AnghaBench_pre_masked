
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ufs_sb_private_info {scalar_t__ s_sbbase; int s_ipg; scalar_t__ s_fpb; int s_inopb; } ;
struct TYPE_4__ {int cg_initediblk; } ;
struct TYPE_5__ {TYPE_1__ cg_u2; } ;
struct ufs_cylinder_group {TYPE_2__ cg_u; } ;
struct ufs_cg_private_info {int c_cgx; } ;
struct super_block {int s_flags; int s_blocksize; } ;
struct buffer_head {int b_data; } ;
typedef scalar_t__ sector_t ;
struct TYPE_6__ {struct ufs_sb_private_info* s_uspi; } ;


 int VAR_0 ;
 int FUNC_0 (struct ufs_cg_private_info*) ;
 int FUNC_1 (char*,...) ;
 TYPE_3__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct super_block*,int *,int ) ;
 scalar_t__ FUNC_5 (struct super_block*,int ) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (int ,int ,int ) ;
 struct buffer_head* FUNC_9 (struct super_block*,scalar_t__) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_16(struct super_block *VAR_1,
       struct ufs_cg_private_info *VAR_2,
       struct ufs_cylinder_group *VAR_3)
{
 struct buffer_head *VAR_4;
 struct ufs_sb_private_info *VAR_5 = FUNC_2(VAR_1)->s_uspi;
 sector_t VAR_6 = VAR_5->s_sbbase +
  FUNC_14(VAR_2->c_cgx * VAR_5->s_ipg +
         FUNC_5(VAR_1, VAR_3->cg_u.cg_u2.cg_initediblk));
 sector_t VAR_7 = VAR_6 + VAR_5->s_fpb;

 FUNC_1("ENTER cgno %d\n", VAR_2->c_cgx);

 for (; VAR_6 < VAR_7; ++VAR_6) {
  VAR_4 = FUNC_9(VAR_1, VAR_6);
  FUNC_6(VAR_4);
  FUNC_8(VAR_4->b_data, 0, VAR_1->s_blocksize);
  FUNC_10(VAR_4);
  FUNC_7(VAR_4);
  FUNC_15(VAR_4);
  if (VAR_1->s_flags & VAR_0)
   FUNC_11(VAR_4);
  FUNC_3(VAR_4);
 }

 FUNC_4(VAR_1, &VAR_3->cg_u.cg_u2.cg_initediblk, VAR_5->s_inopb);
 FUNC_12(FUNC_0(VAR_2));
 if (VAR_1->s_flags & VAR_0)
  FUNC_13(FUNC_0(VAR_2));

 FUNC_1("EXIT\n");
}

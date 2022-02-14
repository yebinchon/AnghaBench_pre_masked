
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ufs_sb_private_info {scalar_t__ s_ncg; } ;
struct ufs_sb_info {scalar_t__* s_cgno; unsigned int s_cg_loaded; struct ufs_cg_private_info** s_ucpi; struct ufs_sb_private_info* s_uspi; } ;
struct ufs_cylinder_group {void* cg_irotor; void* cg_frotor; void* cg_rotor; } ;
struct ufs_cg_private_info {int c_irotor; int c_frotor; int c_rotor; } ;
struct super_block {int dummy; } ;
struct TYPE_4__ {unsigned int count; int * bh; } ;


 TYPE_1__* FUNC_0 (struct ufs_cg_private_info*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ufs_sb_info* FUNC_2 (struct super_block*) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (struct super_block*,int ) ;
 struct ufs_cylinder_group* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct super_block*,char*,char*) ;

void FUNC_8 (struct super_block * VAR_2, unsigned VAR_3)
{
 struct ufs_sb_info * VAR_4 = FUNC_2(VAR_2);
 struct ufs_sb_private_info * VAR_5;
 struct ufs_cg_private_info * VAR_6;
 struct ufs_cylinder_group * VAR_7;
 unsigned VAR_8;

 FUNC_1("ENTER, bitmap_nr %u\n", VAR_3);

 VAR_5 = VAR_4->s_uspi;
 if (VAR_4->s_cgno[VAR_3] == VAR_0) {
  FUNC_1("EXIT\n");
  return;
 }
 VAR_6 = VAR_4->s_ucpi[VAR_3];
 VAR_7 = FUNC_5(FUNC_0(VAR_6));

 if (VAR_5->s_ncg > VAR_1 && VAR_3 >= VAR_4->s_cg_loaded) {
  FUNC_7 (VAR_2, "ufs_put_cylinder", "internal error");
  return;
 }




 VAR_7->cg_rotor = FUNC_4(VAR_2, VAR_6->c_rotor);
 VAR_7->cg_frotor = FUNC_4(VAR_2, VAR_6->c_frotor);
 VAR_7->cg_irotor = FUNC_4(VAR_2, VAR_6->c_irotor);
 FUNC_6 (FUNC_0(VAR_6));
 for (VAR_8 = 1; VAR_8 < FUNC_0(VAR_6)->count; VAR_8++) {
  FUNC_3 (FUNC_0(VAR_6)->bh[VAR_8]);
 }

 VAR_4->s_cgno[VAR_3] = VAR_0;
 FUNC_1("EXIT\n");
}

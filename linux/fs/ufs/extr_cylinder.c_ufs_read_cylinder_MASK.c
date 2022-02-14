
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ufs_sb_private_info {int s_cgsize; } ;
struct ufs_sb_info {unsigned int* s_cgno; TYPE_3__** s_ucg; struct ufs_cg_private_info** s_ucpi; struct ufs_sb_private_info* s_uspi; } ;
struct TYPE_6__ {int cg_nclusterblks; int cg_clusteroff; int cg_clustersumoff; } ;
struct TYPE_7__ {TYPE_1__ cg_44; } ;
struct ufs_cylinder_group {TYPE_2__ cg_u; int cg_nextfreeoff; int cg_freeoff; int cg_iusedoff; int cg_boff; int cg_btotoff; int cg_irotor; int cg_frotor; int cg_rotor; int cg_ndblk; int cg_niblk; int cg_ncyl; int cg_cgx; } ;
struct ufs_cg_private_info {void* c_nclusterblks; void* c_clusteroff; void* c_clustersumoff; void* c_nextfreeoff; void* c_freeoff; void* c_iusedoff; void* c_boff; void* c_btotoff; void* c_irotor; void* c_frotor; void* c_rotor; void* c_ndblk; void* c_niblk; void* c_ncyl; void* c_cgx; } ;
struct super_block {int s_blocksize_bits; } ;
struct TYPE_9__ {int count; scalar_t__ fragment; TYPE_3__** bh; } ;
struct TYPE_8__ {scalar_t__ b_data; } ;


 TYPE_5__* FUNC_0 (struct ufs_cg_private_info*) ;
 int FUNC_1 (char*,...) ;
 unsigned int VAR_0 ;
 struct ufs_sb_info* FUNC_2 (struct super_block*) ;
 int FUNC_3 (TYPE_3__*) ;
 void* FUNC_4 (struct super_block*,int ) ;
 void* FUNC_5 (struct super_block*,int ) ;
 TYPE_3__* FUNC_6 (struct super_block*,scalar_t__) ;
 scalar_t__ FUNC_7 (unsigned int) ;
 int FUNC_8 (struct super_block*,char*,char*,unsigned int) ;

__attribute__((used)) static void FUNC_9 (struct super_block * VAR_1,
 unsigned VAR_2, unsigned VAR_3)
{
 struct ufs_sb_info * VAR_4 = FUNC_2(VAR_1);
 struct ufs_sb_private_info * VAR_5;
 struct ufs_cg_private_info * VAR_6;
 struct ufs_cylinder_group * VAR_7;
 unsigned VAR_8, VAR_9;

 FUNC_1("ENTER, cgno %u, bitmap_nr %u\n", VAR_2, VAR_3);
 VAR_5 = VAR_4->s_uspi;
 VAR_6 = VAR_4->s_ucpi[VAR_3];
 VAR_7 = (struct ufs_cylinder_group *)VAR_4->s_ucg[VAR_2]->b_data;

 FUNC_0(VAR_6)->fragment = FUNC_7(VAR_2);
 FUNC_0(VAR_6)->count = VAR_5->s_cgsize >> VAR_1->s_blocksize_bits;



 FUNC_0(VAR_6)->bh[0] = VAR_4->s_ucg[VAR_2];
 for (VAR_8 = 1; VAR_8 < FUNC_0(VAR_6)->count; VAR_8++)
  if (!(FUNC_0(VAR_6)->bh[VAR_8] = FUNC_6(VAR_1, FUNC_0(VAR_6)->fragment + VAR_8)))
   goto failed;
 VAR_4->s_cgno[VAR_3] = VAR_2;

 VAR_6->c_cgx = FUNC_5(VAR_1, VAR_7->cg_cgx);
 VAR_6->c_ncyl = FUNC_4(VAR_1, VAR_7->cg_ncyl);
 VAR_6->c_niblk = FUNC_4(VAR_1, VAR_7->cg_niblk);
 VAR_6->c_ndblk = FUNC_5(VAR_1, VAR_7->cg_ndblk);
 VAR_6->c_rotor = FUNC_5(VAR_1, VAR_7->cg_rotor);
 VAR_6->c_frotor = FUNC_5(VAR_1, VAR_7->cg_frotor);
 VAR_6->c_irotor = FUNC_5(VAR_1, VAR_7->cg_irotor);
 VAR_6->c_btotoff = FUNC_5(VAR_1, VAR_7->cg_btotoff);
 VAR_6->c_boff = FUNC_5(VAR_1, VAR_7->cg_boff);
 VAR_6->c_iusedoff = FUNC_5(VAR_1, VAR_7->cg_iusedoff);
 VAR_6->c_freeoff = FUNC_5(VAR_1, VAR_7->cg_freeoff);
 VAR_6->c_nextfreeoff = FUNC_5(VAR_1, VAR_7->cg_nextfreeoff);
 VAR_6->c_clustersumoff = FUNC_5(VAR_1, VAR_7->cg_u.cg_44.cg_clustersumoff);
 VAR_6->c_clusteroff = FUNC_5(VAR_1, VAR_7->cg_u.cg_44.cg_clusteroff);
 VAR_6->c_nclusterblks = FUNC_5(VAR_1, VAR_7->cg_u.cg_44.cg_nclusterblks);
 FUNC_1("EXIT\n");
 return;

failed:
 for (VAR_9 = 1; VAR_9 < VAR_8; VAR_9++)
  FUNC_3 (VAR_4->s_ucg[VAR_9]);
 VAR_4->s_cgno[VAR_3] = VAR_0;
 FUNC_8 (VAR_1, "ufs_read_cylinder", "can't read cylinder group block %u", VAR_2);
}

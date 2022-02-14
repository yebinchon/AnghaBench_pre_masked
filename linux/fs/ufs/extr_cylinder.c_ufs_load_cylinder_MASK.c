
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_sb_private_info {unsigned int s_ncg; } ;
struct ufs_sb_info {unsigned int* s_cgno; unsigned int s_cg_loaded; struct ufs_cg_private_info** s_ucpi; struct ufs_sb_private_info* s_uspi; } ;
struct ufs_cg_private_info {int dummy; } ;
struct super_block {int dummy; } ;


 int FUNC_0 (char*,...) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 struct ufs_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,char*,char*) ;
 int FUNC_3 (struct super_block*,int) ;
 int FUNC_4 (struct super_block*,unsigned int,unsigned int) ;

struct ufs_cg_private_info * FUNC_5 (
 struct super_block * VAR_2, unsigned VAR_3)
{
 struct ufs_sb_info * VAR_4 = FUNC_1(VAR_2);
 struct ufs_sb_private_info * VAR_5;
 struct ufs_cg_private_info * VAR_6;
 unsigned VAR_7, VAR_8, VAR_9;

 FUNC_0("ENTER, cgno %u\n", VAR_3);

 VAR_5 = VAR_4->s_uspi;
 if (VAR_3 >= VAR_5->s_ncg) {
  FUNC_2 (VAR_2, "ufs_load_cylinder", "internal error, high number of cg");
  return ((void*)0);
 }



 if (VAR_4->s_cgno[0] == VAR_3) {
  FUNC_0("EXIT\n");
  return VAR_4->s_ucpi[0];
 }



 if (VAR_5->s_ncg <= VAR_1) {
  if (VAR_4->s_cgno[VAR_3] != VAR_0) {
   if (VAR_4->s_cgno[VAR_3] != VAR_3) {
    FUNC_2 (VAR_2, "ufs_load_cylinder", "internal error, wrong number of cg in cache");
    FUNC_0("EXIT (FAILED)\n");
    return ((void*)0);
   }
   else {
    FUNC_0("EXIT\n");
    return VAR_4->s_ucpi[VAR_3];
   }
  } else {
   FUNC_4 (VAR_2, VAR_3, VAR_3);
   FUNC_0("EXIT\n");
   return VAR_4->s_ucpi[VAR_3];
  }
 }




 for (VAR_8 = 0; VAR_8 < VAR_4->s_cg_loaded && VAR_4->s_cgno[VAR_8] != VAR_3; VAR_8++);
 if (VAR_8 < VAR_4->s_cg_loaded && VAR_4->s_cgno[VAR_8] == VAR_3) {
  VAR_7 = VAR_4->s_cgno[VAR_8];
  VAR_6 = VAR_4->s_ucpi[VAR_8];
  for (VAR_9 = VAR_8; VAR_9 > 0; VAR_9--) {
   VAR_4->s_cgno[VAR_9] = VAR_4->s_cgno[VAR_9-1];
   VAR_4->s_ucpi[VAR_9] = VAR_4->s_ucpi[VAR_9-1];
  }
  VAR_4->s_cgno[0] = VAR_7;
  VAR_4->s_ucpi[0] = VAR_6;




 } else {
  if (VAR_4->s_cg_loaded < VAR_1)
   VAR_4->s_cg_loaded++;
  else
   FUNC_3 (VAR_2, VAR_1-1);
  VAR_6 = VAR_4->s_ucpi[VAR_4->s_cg_loaded - 1];
  for (VAR_9 = VAR_4->s_cg_loaded - 1; VAR_9 > 0; VAR_9--) {
   VAR_4->s_cgno[VAR_9] = VAR_4->s_cgno[VAR_9-1];
   VAR_4->s_ucpi[VAR_9] = VAR_4->s_ucpi[VAR_9-1];
  }
  VAR_4->s_ucpi[0] = VAR_6;
  FUNC_4 (VAR_2, VAR_3, 0);
 }
 FUNC_0("EXIT\n");
 return VAR_4->s_ucpi[0];
}

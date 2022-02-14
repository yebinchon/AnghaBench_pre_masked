
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_sb_info {int s_dirtyclusters_counter; int s_freeclusters_counter; } ;
typedef int s64 ;


 int VAR_0 ;
 struct ext4_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_2)
{
 s64 VAR_3, VAR_4;
 struct ext4_sb_info *VAR_5 = FUNC_0(VAR_2);
 VAR_3 =
  FUNC_1(&VAR_5->s_freeclusters_counter);
 VAR_4 =
  FUNC_1(&VAR_5->s_dirtyclusters_counter);



 if (VAR_4 && (VAR_3 < 2 * VAR_4))
  FUNC_2(VAR_2, VAR_1);

 if (2 * VAR_3 < 3 * VAR_4 ||
     VAR_3 < (VAR_4 + VAR_0)) {




  return 1;
 }
 return 0;
}

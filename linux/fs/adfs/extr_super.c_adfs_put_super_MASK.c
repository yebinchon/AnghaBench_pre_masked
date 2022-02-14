
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct adfs_sb_info {int s_map_size; TYPE_1__* s_map; } ;
struct TYPE_2__ {int dm_bh; } ;


 struct adfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct adfs_sb_info*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_1)
{
 int VAR_2;
 struct adfs_sb_info *VAR_3 = FUNC_0(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_3->s_map_size; VAR_2++)
  FUNC_1(VAR_3->s_map[VAR_2].dm_bh);
 FUNC_2(VAR_3->s_map);
 FUNC_3(VAR_3, VAR_0);
}

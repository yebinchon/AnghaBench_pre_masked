
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
struct hpfs_dirent {scalar_t__ last; } ;
struct dnode {int dummy; } ;
typedef int dnode_secno ;


 struct hpfs_dirent* FUNC_0 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_1 (struct dnode*) ;
 struct hpfs_dirent* FUNC_2 (struct dnode*) ;
 int FUNC_3 (struct quad_buffer_head*) ;
 int FUNC_4 (struct super_block*,char*,int ,int) ;
 struct dnode* FUNC_5 (struct super_block*,int ,struct quad_buffer_head*) ;

__attribute__((used)) static struct hpfs_dirent *FUNC_6(struct super_block *VAR_0, dnode_secno VAR_1, int VAR_2,
       struct quad_buffer_head *VAR_3, struct dnode **VAR_4)
{
 int VAR_5;
 struct hpfs_dirent *VAR_6, *VAR_7;
 struct dnode *VAR_8;
 VAR_8 = FUNC_5(VAR_0, VAR_1, VAR_3);
 if (!VAR_8) return ((void*)0);
 if (VAR_4) *VAR_4=VAR_8;
 VAR_6 = FUNC_2(VAR_8);
 VAR_7 = FUNC_1(VAR_8);
 for (VAR_5 = 1; VAR_6 < VAR_7; VAR_5++, VAR_6 = FUNC_0(VAR_6)) {
  if (VAR_5 == VAR_2) {
   return VAR_6;
  }
  if (VAR_6->last) break;
 }
 FUNC_3(VAR_3);
 FUNC_4(VAR_0, "map_nth_dirent: n too high; dnode = %08x, requested %08x", VAR_1, VAR_2);
 return ((void*)0);
}

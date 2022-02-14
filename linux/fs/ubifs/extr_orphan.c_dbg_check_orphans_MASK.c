
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int dummy; } ;
struct check_info {int missing; int node; int root; scalar_t__ leaf_cnt; scalar_t__ tot_inos; scalar_t__ last_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ubifs_info*) ;
 int VAR_5 ;
 int FUNC_3 (struct ubifs_info*,struct check_info*) ;
 int FUNC_4 (struct ubifs_info*,int *,int *,struct check_info*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ubifs_info*,char*,...) ;

__attribute__((used)) static int FUNC_8(struct ubifs_info *VAR_6)
{
 struct check_info VAR_7;
 int VAR_8;

 if (!FUNC_2(VAR_6))
  return 0;

 VAR_7.last_ino = 0;
 VAR_7.tot_inos = 0;
 VAR_7.missing = 0;
 VAR_7.leaf_cnt = 0;
 VAR_7.root = VAR_3;
 VAR_7.node = FUNC_6(VAR_4, VAR_2);
 if (!VAR_7.node) {
  FUNC_7(VAR_6, "out of memory");
  return -VAR_1;
 }

 VAR_8 = FUNC_3(VAR_6, &VAR_7);
 if (VAR_8)
  goto out;

 VAR_8 = FUNC_4(VAR_6, &VAR_5, ((void*)0), &VAR_7);
 if (VAR_8) {
  FUNC_7(VAR_6, "cannot scan TNC, error %d", VAR_8);
  goto out;
 }

 if (VAR_7.missing) {
  FUNC_7(VAR_6, "%lu missing orphan(s)", VAR_7.missing);
  VAR_8 = -VAR_0;
  goto out;
 }

 FUNC_0("last inode number is %lu", VAR_7.last_ino);
 FUNC_0("total number of inodes is %lu", VAR_7.tot_inos);
 FUNC_0("total number of leaf nodes is %llu", VAR_7.leaf_cnt);

out:
 FUNC_1(&VAR_7.root);
 FUNC_5(VAR_7.node);
 return VAR_8;
}

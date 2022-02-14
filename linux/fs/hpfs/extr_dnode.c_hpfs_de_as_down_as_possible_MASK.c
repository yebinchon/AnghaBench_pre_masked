
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct quad_buffer_head {scalar_t__ data; } ;
struct hpfs_dirent {int down; } ;
struct dnode {int up; } ;
typedef scalar_t__ dnode_secno ;
struct TYPE_2__ {scalar_t__ sb_chk; } ;


 scalar_t__ FUNC_0 (struct hpfs_dirent*) ;
 int FUNC_1 (struct quad_buffer_head*) ;
 int FUNC_2 (struct super_block*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_3 (struct super_block*) ;
 scalar_t__ FUNC_4 (struct super_block*,scalar_t__,int*,int*,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 struct hpfs_dirent* FUNC_6 (struct super_block*,scalar_t__,int,struct quad_buffer_head*,int *) ;

dnode_secno FUNC_7(struct super_block *VAR_0, dnode_secno VAR_1)
{
 struct quad_buffer_head VAR_2;
 dnode_secno VAR_3 = VAR_1;
 dnode_secno VAR_4 = 0;
 struct hpfs_dirent *VAR_5;
 int VAR_6, VAR_7 = 0;

 again:
 if (FUNC_3(VAR_0)->sb_chk)
  if (FUNC_4(VAR_0, VAR_3, &VAR_6, &VAR_7, "hpfs_de_as_down_as_possible"))
   return VAR_3;
 if (!(VAR_5 = FUNC_6(VAR_0, VAR_3, 1, &VAR_2, ((void*)0)))) return VAR_1;
 if (FUNC_3(VAR_0)->sb_chk)
  if (VAR_4 && FUNC_5(((struct dnode *)VAR_2.data)->up) != VAR_4)
   FUNC_2(VAR_0, "hpfs_de_as_down_as_possible: bad up pointer; dnode %08x, down %08x points to %08x", VAR_4, VAR_3, FUNC_5(((struct dnode *)VAR_2.data)->up));
 if (!VAR_5->down) {
  FUNC_1(&VAR_2);
  return VAR_3;
 }
 VAR_4 = VAR_3;
 VAR_3 = FUNC_0(VAR_5);
 FUNC_1(&VAR_2);
 goto again;
}

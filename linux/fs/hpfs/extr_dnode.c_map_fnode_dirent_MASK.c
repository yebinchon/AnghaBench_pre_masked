
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
struct hpfs_dirent {int last; int namelen; int name; int fnode; scalar_t__ down; } ;
struct TYPE_5__ {TYPE_1__* external; } ;
struct fnode {unsigned char* name; int len; TYPE_2__ u; int up; } ;
struct dnode {int up; scalar_t__ root_dnode; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ fnode_secno ;
typedef scalar_t__ dnode_secno ;
struct TYPE_6__ {scalar_t__ sb_chk; } ;
struct TYPE_4__ {int disk_secno; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_2 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_3 (struct dnode*) ;
 struct hpfs_dirent* FUNC_4 (struct dnode*) ;
 int FUNC_5 (struct fnode*) ;
 int FUNC_6 (struct quad_buffer_head*) ;
 int FUNC_7 (struct super_block*,unsigned char*,int,int ,int ,int ) ;
 int FUNC_8 (struct super_block*,char*,scalar_t__,...) ;
 struct dnode* FUNC_9 (struct super_block*,scalar_t__,struct quad_buffer_head*) ;
 struct fnode* FUNC_10 (struct super_block*,scalar_t__,struct buffer_head**) ;
 TYPE_3__* FUNC_11 (struct super_block*) ;
 scalar_t__ FUNC_12 (struct super_block*,scalar_t__,int*,int*,char*) ;
 int FUNC_13 (unsigned char*) ;
 unsigned char* FUNC_14 (int,int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (unsigned char*,unsigned char*,int) ;
 int FUNC_17 (unsigned char*,int,int) ;
 int FUNC_18 (char*) ;

struct hpfs_dirent *FUNC_19(struct super_block *VAR_1, fnode_secno VAR_2,
         struct fnode *VAR_3, struct quad_buffer_head *VAR_4)
{
 unsigned char *VAR_5;
 unsigned char *VAR_6;
 int VAR_7, VAR_8;
 struct dnode *VAR_9;
 dnode_secno VAR_10, VAR_11;
 struct fnode *VAR_12;
 struct buffer_head *VAR_13;
 struct hpfs_dirent *VAR_14, *VAR_15;
 int VAR_16;
 int VAR_17, VAR_18 = 0;
 int VAR_19, VAR_20 = 0;
 VAR_5 = VAR_3->name;
 if (!(VAR_6 = FUNC_14(256, VAR_0))) {
  FUNC_18("out of memory, can't map dirent\n");
  return ((void*)0);
 }
 if (VAR_3->len <= 15)
  FUNC_16(VAR_6, VAR_5, VAR_7 = VAR_8 = VAR_3->len);
 else {
  FUNC_16(VAR_6, VAR_5, 15);
  FUNC_17(VAR_6 + 15, 0xff, 256 - 15);

  VAR_7 = 15; VAR_8 = 256;
 }
 if (!(VAR_12 = FUNC_10(VAR_1, FUNC_15(VAR_3->up), &VAR_13))) {
  FUNC_13(VAR_6);
  return ((void*)0);
 }
 if (!FUNC_5(VAR_12)) {
  FUNC_0(VAR_13);
  FUNC_8(VAR_1, "fnode %08x has non-directory parent %08x", VAR_2, FUNC_15(VAR_3->up));
  FUNC_13(VAR_6);
  return ((void*)0);
 }
 VAR_10 = FUNC_15(VAR_12->u.external[0].disk_secno);
 FUNC_0(VAR_13);
 go_down:
 VAR_11 = 0;
 go_up:
 if (!(VAR_9 = FUNC_9(VAR_1, VAR_10, VAR_4))) {
  FUNC_13(VAR_6);
  return ((void*)0);
 }
 VAR_15 = FUNC_3(VAR_9);
 VAR_14 = FUNC_4(VAR_9);
 if (VAR_11) {
  while (VAR_14 < VAR_15) {
   if (VAR_14->down) if (FUNC_1(VAR_14) == VAR_11) goto f;
   VAR_14 = FUNC_2(VAR_14);
  }
  FUNC_8(VAR_1, "pointer to dnode %08x not found in dnode %08x", VAR_11, VAR_10);
  FUNC_6(VAR_4);
  FUNC_13(VAR_6);
  return ((void*)0);
 }
 next_de:
 if (FUNC_15(VAR_14->fnode) == VAR_2) {
  FUNC_13(VAR_6);
  return VAR_14;
 }
 VAR_16 = FUNC_7(VAR_1, VAR_5, VAR_7, VAR_14->name, VAR_14->namelen, VAR_14->last);
 if (VAR_16 < 0 && VAR_14->down) {
  VAR_10 = FUNC_1(VAR_14);
  FUNC_6(VAR_4);
  if (FUNC_11(VAR_1)->sb_chk)
   if (FUNC_12(VAR_1, VAR_10, &VAR_17, &VAR_18, "map_fnode_dirent #1")) {
    FUNC_13(VAR_6);
    return ((void*)0);
  }
  goto go_down;
 }
 f:
 if (FUNC_15(VAR_14->fnode) == VAR_2) {
  FUNC_13(VAR_6);
  return VAR_14;
 }
 VAR_16 = FUNC_7(VAR_1, VAR_6, VAR_8, VAR_14->name, VAR_14->namelen, VAR_14->last);
 if (VAR_16 < 0 && !VAR_14->last) goto not_found;
 if ((VAR_14 = FUNC_2(VAR_14)) < VAR_15) goto next_de;
 if (VAR_9->root_dnode) goto not_found;
 VAR_11 = VAR_10;
 VAR_10 = FUNC_15(VAR_9->up);
 FUNC_6(VAR_4);
 if (FUNC_11(VAR_1)->sb_chk)
  if (FUNC_12(VAR_1, VAR_11, &VAR_19, &VAR_20, "map_fnode_dirent #2")) {
   FUNC_13(VAR_6);
   return ((void*)0);
  }
 goto go_up;
 not_found:
 FUNC_6(VAR_4);
 FUNC_8(VAR_1, "dirent for fnode %08x not found", VAR_2);
 FUNC_13(VAR_6);
 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
typedef void* time64_t ;
struct ubifs_znode {int level; struct ubifs_zbranch* zbranch; void* time; } ;
struct ubifs_zbranch {int key; struct ubifs_znode* znode; } ;
struct ubifs_info {struct ubifs_zbranch zroot; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ubifs_znode*) ;
 int FUNC_1 (struct ubifs_znode*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (union ubifs_key const*,char*) ;
 int FUNC_4 (struct ubifs_info*,union ubifs_key const*) ;
 scalar_t__ FUNC_5 (struct ubifs_info*,union ubifs_key const*) ;
 scalar_t__ FUNC_6 (struct ubifs_info*,union ubifs_key const*,int *) ;
 void* FUNC_7 () ;
 int FUNC_8 (struct ubifs_info*,struct ubifs_znode**,int*) ;
 int FUNC_9 (struct ubifs_info*,int) ;
 struct ubifs_znode* FUNC_10 (struct ubifs_info*,struct ubifs_zbranch*,struct ubifs_znode*,int) ;
 int FUNC_11 (struct ubifs_info*,struct ubifs_znode*,union ubifs_key const*,int*) ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct ubifs_info *VAR_2, const union ubifs_key *VAR_3,
   struct ubifs_znode **VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7;
 struct ubifs_znode *VAR_8;
 time64_t VAR_9 = FUNC_7();

 FUNC_3(VAR_3, "search key ");
 FUNC_9(VAR_2, FUNC_5(VAR_2, VAR_3) < VAR_1);

 VAR_8 = VAR_2->zroot.znode;
 if (FUNC_12(!VAR_8)) {
  VAR_8 = FUNC_10(VAR_2, &VAR_2->zroot, ((void*)0), 0);
  if (FUNC_0(VAR_8))
   return FUNC_1(VAR_8);
 }

 VAR_8->time = VAR_9;

 while (1) {
  struct ubifs_zbranch *VAR_10;

  VAR_7 = FUNC_11(VAR_2, VAR_8, VAR_3, VAR_5);

  if (VAR_8->level == 0)
   break;

  if (*VAR_5 < 0)
   *VAR_5 = 0;
  VAR_10 = &VAR_8->zbranch[*VAR_5];

  if (VAR_10->znode) {
   VAR_8->time = VAR_9;
   VAR_8 = VAR_10->znode;
   continue;
  }


  VAR_8 = FUNC_10(VAR_2, VAR_10, VAR_8, *VAR_5);
  if (FUNC_0(VAR_8))
   return FUNC_1(VAR_8);
 }

 *VAR_4 = VAR_8;
 if (VAR_7 || !FUNC_4(VAR_2, VAR_3) || *VAR_5 != -1) {
  FUNC_2("found %d, lvl %d, n %d", VAR_7, VAR_8->level, *VAR_5);
  return VAR_7;
 }
 VAR_6 = FUNC_8(VAR_2, &VAR_8, VAR_5);
 if (VAR_6 == -VAR_0) {
  FUNC_2("found 0, lvl %d, n -1", VAR_8->level);
  *VAR_5 = -1;
  return 0;
 }
 if (FUNC_12(VAR_6 < 0))
  return VAR_6;
 if (FUNC_6(VAR_2, VAR_3, &VAR_8->zbranch[*VAR_5].key)) {
  FUNC_2("found 0, lvl %d, n -1", VAR_8->level);
  *VAR_5 = -1;
  return 0;
 }

 FUNC_2("found 1, lvl %d, n %d", VAR_8->level, *VAR_5);
 *VAR_4 = VAR_8;
 return 1;
}

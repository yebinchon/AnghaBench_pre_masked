
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
typedef void* time64_t ;
struct ubifs_znode {int level; scalar_t__ cnext; struct ubifs_zbranch* zbranch; void* time; } ;
struct ubifs_zbranch {int key; struct ubifs_znode* znode; } ;
struct ubifs_info {struct ubifs_zbranch zroot; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ubifs_znode*) ;
 int FUNC_1 (struct ubifs_znode*) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (union ubifs_key const*,char*) ;
 struct ubifs_znode* FUNC_4 (struct ubifs_info*,struct ubifs_znode*) ;
 struct ubifs_znode* FUNC_5 (struct ubifs_info*,struct ubifs_zbranch*) ;
 int FUNC_6 (struct ubifs_info*,union ubifs_key const*) ;
 scalar_t__ FUNC_7 (struct ubifs_info*,union ubifs_key const*,int *) ;
 void* FUNC_8 () ;
 int FUNC_9 (struct ubifs_info*,struct ubifs_znode**,int*) ;
 struct ubifs_znode* FUNC_10 (struct ubifs_info*,struct ubifs_zbranch*,struct ubifs_znode*,int) ;
 int FUNC_11 (struct ubifs_info*,struct ubifs_znode*,union ubifs_key const*,int*) ;
 int FUNC_12 (struct ubifs_znode*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct ubifs_info *VAR_1, const union ubifs_key *VAR_2,
          struct ubifs_znode **VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6;
 struct ubifs_znode *VAR_7;
 time64_t VAR_8 = FUNC_8();

 FUNC_3(VAR_2, "search and dirty key ");

 VAR_7 = VAR_1->zroot.znode;
 if (FUNC_13(!VAR_7)) {
  VAR_7 = FUNC_10(VAR_1, &VAR_1->zroot, ((void*)0), 0);
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);
 }

 VAR_7 = FUNC_5(VAR_1, &VAR_1->zroot);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_7->time = VAR_8;

 while (1) {
  struct ubifs_zbranch *VAR_9;

  VAR_6 = FUNC_11(VAR_1, VAR_7, VAR_2, VAR_4);

  if (VAR_7->level == 0)
   break;

  if (*VAR_4 < 0)
   *VAR_4 = 0;
  VAR_9 = &VAR_7->zbranch[*VAR_4];

  if (VAR_9->znode) {
   VAR_7->time = VAR_8;
   VAR_7 = FUNC_5(VAR_1, VAR_9);
   if (FUNC_0(VAR_7))
    return FUNC_1(VAR_7);
   continue;
  }


  VAR_7 = FUNC_10(VAR_1, VAR_9, VAR_7, *VAR_4);
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);
  VAR_7 = FUNC_5(VAR_1, VAR_9);
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);
 }

 *VAR_3 = VAR_7;
 if (VAR_6 || !FUNC_6(VAR_1, VAR_2) || *VAR_4 != -1) {
  FUNC_2("found %d, lvl %d, n %d", VAR_6, VAR_7->level, *VAR_4);
  return VAR_6;
 }





 VAR_5 = FUNC_9(VAR_1, &VAR_7, VAR_4);
 if (VAR_5 == -VAR_0) {
  *VAR_4 = -1;
  FUNC_2("found 0, lvl %d, n -1", VAR_7->level);
  return 0;
 }
 if (FUNC_13(VAR_5 < 0))
  return VAR_5;
 if (FUNC_7(VAR_1, VAR_2, &VAR_7->zbranch[*VAR_4].key)) {
  *VAR_4 = -1;
  FUNC_2("found 0, lvl %d, n -1", VAR_7->level);
  return 0;
 }

 if (VAR_7->cnext || !FUNC_12(VAR_7)) {
  VAR_7 = FUNC_4(VAR_1, VAR_7);
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);
 }

 FUNC_2("found 1, lvl %d, n %d", VAR_7->level, *VAR_4);
 *VAR_3 = VAR_7;
 return 1;
}

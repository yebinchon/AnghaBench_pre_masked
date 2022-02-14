
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {int level; int child_cnt; TYPE_1__* zbranch; } ;
struct TYPE_4__ {int lnum; int offs; struct ubifs_znode* znode; } ;
struct ubifs_info {TYPE_2__ zroot; } ;
struct TYPE_3__ {int lnum; int offs; int key; } ;


 int VAR_0 ;
 struct ubifs_znode* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ubifs_znode*) ;
 scalar_t__ VAR_1 ;
 struct ubifs_znode* FUNC_2 (struct ubifs_info*,struct ubifs_znode*,int) ;
 int FUNC_3 (struct ubifs_info*,union ubifs_key*) ;
 scalar_t__ FUNC_4 (struct ubifs_info*,union ubifs_key*) ;
 scalar_t__ FUNC_5 (struct ubifs_info*,int *,union ubifs_key*) ;
 struct ubifs_znode* FUNC_6 (struct ubifs_info*,struct ubifs_znode*) ;
 struct ubifs_znode* FUNC_7 (struct ubifs_info*,struct ubifs_znode*) ;
 int FUNC_8 (struct ubifs_info*,int) ;
 struct ubifs_znode* FUNC_9 (struct ubifs_info*,TYPE_2__*,int *,int ) ;
 int FUNC_10 (struct ubifs_info*,struct ubifs_znode*,union ubifs_key*,int*) ;

__attribute__((used)) static struct ubifs_znode *FUNC_11(struct ubifs_info *VAR_2,
     union ubifs_key *VAR_3, int VAR_4,
     int VAR_5, int VAR_6)
{
 struct ubifs_znode *VAR_7, *VAR_8;
 int VAR_9, VAR_10;

 FUNC_8(VAR_2, FUNC_4(VAR_2, VAR_3) < VAR_1);





 if (VAR_4 < 0)
  return FUNC_0(-VAR_0);


 VAR_7 = VAR_2->zroot.znode;
 if (!VAR_7) {
  VAR_7 = FUNC_9(VAR_2, &VAR_2->zroot, ((void*)0), 0);
  if (FUNC_1(VAR_7))
   return VAR_7;
 }

 if (VAR_2->zroot.lnum == VAR_5 && VAR_2->zroot.offs == VAR_6)
  return VAR_7;

 if (VAR_4 >= VAR_7->level)
  return ((void*)0);
 while (1) {
  FUNC_10(VAR_2, VAR_7, VAR_3, &VAR_9);
  if (VAR_9 < 0) {
   VAR_7 = FUNC_6(VAR_2, VAR_7);
   if (!VAR_7)
    return ((void*)0);
   if (FUNC_1(VAR_7))
    return VAR_7;
   FUNC_10(VAR_2, VAR_7, VAR_3, &VAR_9);
   FUNC_8(VAR_2, VAR_9 >= 0);
  }
  if (VAR_7->level == VAR_4 + 1)
   break;
  VAR_7 = FUNC_2(VAR_2, VAR_7, VAR_9);
  if (FUNC_1(VAR_7))
   return VAR_7;
 }

 if (VAR_7->zbranch[VAR_9].lnum == VAR_5 && VAR_7->zbranch[VAR_9].offs == VAR_6)
  return FUNC_2(VAR_2, VAR_7, VAR_9);

 if (!FUNC_3(VAR_2, VAR_3))
  return ((void*)0);




 VAR_8 = VAR_7;
 VAR_10 = VAR_9;

 while (1) {

  if (VAR_9)
   VAR_9 -= 1;
  else {
   VAR_7 = FUNC_6(VAR_2, VAR_7);
   if (!VAR_7)
    break;
   if (FUNC_1(VAR_7))
    return VAR_7;
   VAR_9 = VAR_7->child_cnt - 1;
  }

  if (VAR_7->zbranch[VAR_9].lnum == VAR_5 &&
      VAR_7->zbranch[VAR_9].offs == VAR_6)
   return FUNC_2(VAR_2, VAR_7, VAR_9);

  if (FUNC_5(VAR_2, &VAR_7->zbranch[VAR_9].key, VAR_3) < 0)
   break;
 }

 VAR_7 = VAR_8;
 VAR_9 = VAR_10;

 while (1) {

  if (++VAR_9 >= VAR_7->child_cnt) {
   VAR_7 = FUNC_7(VAR_2, VAR_7);
   if (!VAR_7)
    break;
   if (FUNC_1(VAR_7))
    return VAR_7;
   VAR_9 = 0;
  }

  if (VAR_7->zbranch[VAR_9].lnum == VAR_5 &&
      VAR_7->zbranch[VAR_9].offs == VAR_6)
   return FUNC_2(VAR_2, VAR_7, VAR_9);

  if (FUNC_5(VAR_2, &VAR_7->zbranch[VAR_9].key, VAR_3) > 0)
   break;
 }
 return ((void*)0);
}

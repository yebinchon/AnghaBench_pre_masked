
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_zbranch {int key; } ;
struct ubifs_info {int dummy; } ;
struct check_info {scalar_t__ last_ino; int tot_inos; int missing; int leaf_cnt; int root; TYPE_1__* node; } ;
typedef scalar_t__ ino_t ;
struct TYPE_2__ {scalar_t__ nlink; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct ubifs_info*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ubifs_info*,int *) ;
 scalar_t__ FUNC_3 (struct ubifs_info*,int *) ;
 int FUNC_4 (struct ubifs_info*,char*,unsigned long,...) ;
 int FUNC_5 (struct ubifs_info*,struct ubifs_zbranch*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct ubifs_info *VAR_1, struct ubifs_zbranch *VAR_2,
       void *VAR_3)
{
 struct check_info *VAR_4 = VAR_3;
 ino_t VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_1, &VAR_2->key);
 if (VAR_5 != VAR_4->last_ino) {

  if (FUNC_3(VAR_1, &VAR_2->key) != VAR_0)
   FUNC_4(VAR_1, "found orphan node ino %lu, type %d",
      (unsigned long)VAR_5, FUNC_3(VAR_1, &VAR_2->key));
  VAR_4->last_ino = VAR_5;
  VAR_4->tot_inos += 1;
  VAR_6 = FUNC_5(VAR_1, VAR_2, VAR_4->node);
  if (VAR_6) {
   FUNC_4(VAR_1, "node read failed, error %d", VAR_6);
   return VAR_6;
  }
  if (VAR_4->node->nlink == 0)

   if (!FUNC_0(&VAR_4->root, VAR_5) &&
       !FUNC_1(VAR_1, VAR_5)) {
    FUNC_4(VAR_1, "missing orphan, ino %lu",
       (unsigned long)VAR_5);
    VAR_4->missing += 1;
   }
 }
 VAR_4->leaf_cnt += 1;
 return 0;
}

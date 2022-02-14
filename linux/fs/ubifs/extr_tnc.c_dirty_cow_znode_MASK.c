
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_znode {int flags; } ;
struct ubifs_zbranch {scalar_t__ len; scalar_t__ offs; scalar_t__ lnum; struct ubifs_znode* znode; } ;
struct ubifs_info {int clean_zn_cnt; int dirty_zn_cnt; } ;


 int VAR_0 ;
 struct ubifs_znode* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ubifs_znode*) ;
 int FUNC_2 (struct ubifs_info*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ubifs_znode* FUNC_5 (struct ubifs_info*,struct ubifs_znode*) ;
 int FUNC_6 (struct ubifs_info*,scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,int *) ;
 int VAR_1 ;
 int FUNC_8 (struct ubifs_znode*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static struct ubifs_znode *FUNC_10(struct ubifs_info *VAR_2,
        struct ubifs_zbranch *VAR_3)
{
 struct ubifs_znode *VAR_4 = VAR_3->znode;
 struct ubifs_znode *VAR_5;
 int VAR_6;

 if (!FUNC_8(VAR_4)) {

  if (!FUNC_7(VAR_0, &VAR_4->flags)) {
   FUNC_4(&VAR_2->dirty_zn_cnt);
   FUNC_3(&VAR_2->clean_zn_cnt);
   FUNC_3(&VAR_1);
   VAR_6 = FUNC_2(VAR_2, VAR_3->lnum, VAR_3->len);
   if (FUNC_9(VAR_6))
    return FUNC_0(VAR_6);
  }
  return VAR_4;
 }

 VAR_5 = FUNC_5(VAR_2, VAR_4);
 if (FUNC_1(VAR_5))
  return VAR_5;

 if (VAR_3->len) {
  VAR_6 = FUNC_6(VAR_2, VAR_3->lnum, VAR_3->offs);
  if (FUNC_9(VAR_6))
   return FUNC_0(VAR_6);
  VAR_6 = FUNC_2(VAR_2, VAR_3->lnum, VAR_3->len);
 } else
  VAR_6 = 0;

 VAR_3->znode = VAR_5;
 VAR_3->lnum = 0;
 VAR_3->offs = 0;
 VAR_3->len = 0;

 if (FUNC_9(VAR_6))
  return FUNC_0(VAR_6);
 return VAR_5;
}

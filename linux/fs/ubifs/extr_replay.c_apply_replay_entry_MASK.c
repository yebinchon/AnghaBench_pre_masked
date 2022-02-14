
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {scalar_t__ need_recovery; } ;
struct replay_entry {int new_size; scalar_t__ deletion; int key; int hash; int len; int offs; int lnum; int nm; int sqnum; } ;
typedef int ino_t ;




 int FUNC_0 (int *,char*,int ,int ,int ,scalar_t__,int ) ;
 int FUNC_1 (struct ubifs_info*,struct replay_entry*) ;
 scalar_t__ FUNC_2 (struct ubifs_info*,int *) ;
 int FUNC_3 (struct ubifs_info*,int *) ;
 int FUNC_4 (struct ubifs_info*,int *) ;
 int FUNC_5 (struct ubifs_info*,struct replay_entry*) ;
 int FUNC_6 (struct ubifs_info*,int *,scalar_t__,int ) ;
 int FUNC_7 (struct ubifs_info*,int *,int ,int ,int ,int ) ;
 int FUNC_8 (struct ubifs_info*,int *,int ,int ,int ,int ,int *) ;
 int FUNC_9 (struct ubifs_info*,int *) ;
 int FUNC_10 (struct ubifs_info*,int ) ;
 int FUNC_11 (struct ubifs_info*,int *,int *) ;

__attribute__((used)) static int FUNC_12(struct ubifs_info *VAR_0, struct replay_entry *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->key, "LEB %d:%d len %d deletion %d sqnum %llu key ",
   VAR_1->lnum, VAR_1->offs, VAR_1->len, VAR_1->deletion, VAR_1->sqnum);

 if (FUNC_2(VAR_0, &VAR_1->key)) {
  if (VAR_1->deletion)
   VAR_2 = FUNC_11(VAR_0, &VAR_1->key, &VAR_1->nm);
  else
   VAR_2 = FUNC_8(VAR_0, &VAR_1->key, VAR_1->lnum, VAR_1->offs,
            VAR_1->len, VAR_1->hash, &VAR_1->nm);
 } else {
  if (VAR_1->deletion)
   switch (FUNC_4(VAR_0, &VAR_1->key)) {
   case 129:
   {
    ino_t VAR_3 = FUNC_3(VAR_0, &VAR_1->key);

    if (FUNC_1(VAR_0, VAR_1)) {
     VAR_2 = 0;
     break;
    }

    VAR_2 = FUNC_10(VAR_0, VAR_3);
    break;
   }
   case 128:
    VAR_2 = FUNC_5(VAR_0, VAR_1);
    break;
   default:
    VAR_2 = FUNC_9(VAR_0, &VAR_1->key);
    break;
   }
  else
   VAR_2 = FUNC_7(VAR_0, &VAR_1->key, VAR_1->lnum, VAR_1->offs,
         VAR_1->len, VAR_1->hash);
  if (VAR_2)
   return VAR_2;

  if (VAR_0->need_recovery)
   VAR_2 = FUNC_6(VAR_0, &VAR_1->key, VAR_1->deletion,
             VAR_1->new_size);
 }

 return VAR_2;
}

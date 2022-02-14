
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
typedef int u8 ;
struct ubifs_info {scalar_t__ highest_inum; int replay_list; } ;
struct replay_entry {int lnum; int offs; int len; int deletion; unsigned long long sqnum; int list; void* new_size; void* old_size; int key; int hash; } ;
typedef void* loff_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (union ubifs_key*,char*,int,int) ;
 int FUNC_2 (struct ubifs_info*,union ubifs_key*,int *) ;
 scalar_t__ FUNC_3 (struct ubifs_info*,union ubifs_key*) ;
 struct replay_entry* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct ubifs_info*,int const*,int ) ;

__attribute__((used)) static int FUNC_7(struct ubifs_info *VAR_2, int VAR_3, int VAR_4, int VAR_5,
         const u8 *VAR_6, union ubifs_key *VAR_7,
         unsigned long long VAR_8, int VAR_9, int *VAR_10,
         loff_t VAR_11, loff_t VAR_12)
{
 struct replay_entry *VAR_13;

 FUNC_1(VAR_7, "add LEB %d:%d, key ", VAR_3, VAR_4);

 if (FUNC_3(VAR_2, VAR_7) >= VAR_2->highest_inum)
  VAR_2->highest_inum = FUNC_3(VAR_2, VAR_7);

 VAR_13 = FUNC_4(sizeof(struct replay_entry), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 if (!VAR_9)
  *VAR_10 += FUNC_0(VAR_5, 8);
 VAR_13->lnum = VAR_3;
 VAR_13->offs = VAR_4;
 VAR_13->len = VAR_5;
 FUNC_6(VAR_2, VAR_6, VAR_13->hash);
 VAR_13->deletion = !!VAR_9;
 VAR_13->sqnum = VAR_8;
 FUNC_2(VAR_2, VAR_7, &VAR_13->key);
 VAR_13->old_size = VAR_11;
 VAR_13->new_size = VAR_12;

 FUNC_5(&VAR_13->list, &VAR_2->replay_list);
 return 0;
}

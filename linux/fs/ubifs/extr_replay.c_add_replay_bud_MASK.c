
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int replay_buds; int log_hash; } ;
struct ubifs_bud {int lnum; int start; int jhead; unsigned long long sqnum; int list; struct ubifs_bud* bud; int log_hash; } ;
struct bud_entry {int lnum; int start; int jhead; unsigned long long sqnum; int list; struct bud_entry* bud; int log_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int,int) ;
 int FUNC_3 (struct ubifs_bud*) ;
 struct ubifs_bud* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct ubifs_info*,struct ubifs_bud*) ;
 int FUNC_7 (struct ubifs_info*) ;
 int FUNC_8 (struct ubifs_info*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct ubifs_info *VAR_2, int VAR_3, int VAR_4, int VAR_5,
     unsigned long long VAR_6)
{
 struct ubifs_bud *VAR_7;
 struct bud_entry *VAR_8;
 int VAR_9;

 FUNC_2("add replay bud LEB %d:%d, head %d", VAR_3, VAR_4, VAR_5);

 VAR_7 = FUNC_4(sizeof(struct ubifs_bud), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_4(sizeof(struct bud_entry), VAR_1);
 if (!VAR_8) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_7->lnum = VAR_3;
 VAR_7->start = VAR_4;
 VAR_7->jhead = VAR_5;
 VAR_7->log_hash = FUNC_7(VAR_2);
 if (FUNC_0(VAR_7->log_hash)) {
  VAR_9 = FUNC_1(VAR_7->log_hash);
  goto out;
 }

 FUNC_8(VAR_2, VAR_2->log_hash, VAR_7->log_hash);

 FUNC_6(VAR_2, VAR_7);

 VAR_8->bud = VAR_7;
 VAR_8->sqnum = VAR_6;
 FUNC_5(&VAR_8->list, &VAR_2->replay_buds);

 return 0;
out:
 FUNC_3(VAR_7);
 FUNC_3(VAR_8);

 return VAR_9;
}

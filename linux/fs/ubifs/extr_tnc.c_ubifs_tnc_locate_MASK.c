
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {struct ubifs_zbranch* zbranch; } ;
struct ubifs_zbranch {int lnum; int offs; } ;
struct ubifs_info {int gc_seq; int tnc_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*,union ubifs_key const*,struct ubifs_zbranch*,void*) ;
 scalar_t__ FUNC_1 (struct ubifs_info*,union ubifs_key const*) ;
 scalar_t__ FUNC_2 (struct ubifs_info*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ubifs_info*,struct ubifs_zbranch*,void*) ;
 scalar_t__ FUNC_6 (struct ubifs_info*,int) ;
 int FUNC_7 (struct ubifs_info*,union ubifs_key const*,struct ubifs_znode**,int*) ;
 int FUNC_8 (struct ubifs_info*,struct ubifs_zbranch*,void*) ;

int FUNC_9(struct ubifs_info *VAR_1, const union ubifs_key *VAR_2,
       void *VAR_3, int *VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9 = 0, VAR_10;
 struct ubifs_znode *VAR_11;
 struct ubifs_zbranch VAR_12, *VAR_13;

again:
 FUNC_3(&VAR_1->tnc_mutex);
 VAR_6 = FUNC_7(VAR_1, VAR_2, &VAR_11, &VAR_7);
 if (!VAR_6) {
  VAR_8 = -VAR_0;
  goto out;
 } else if (VAR_6 < 0) {
  VAR_8 = VAR_6;
  goto out;
 }
 VAR_13 = &VAR_11->zbranch[VAR_7];
 if (VAR_4) {
  *VAR_4 = VAR_13->lnum;
  *VAR_5 = VAR_13->offs;
 }
 if (FUNC_1(VAR_1, VAR_2)) {




  VAR_8 = FUNC_5(VAR_1, VAR_13, VAR_3);
  goto out;
 }
 if (VAR_9) {
  VAR_8 = FUNC_8(VAR_1, VAR_13, VAR_3);
  goto out;
 }

 VAR_12 = VAR_11->zbranch[VAR_7];
 VAR_10 = VAR_1->gc_seq;
 FUNC_4(&VAR_1->tnc_mutex);

 if (FUNC_6(VAR_1, VAR_12.lnum)) {

  VAR_8 = FUNC_8(VAR_1, &VAR_12, VAR_3);
  return VAR_8;
 }

 VAR_8 = FUNC_0(VAR_1, VAR_2, &VAR_12, VAR_3);
 if (VAR_8 <= 0 || FUNC_2(VAR_1, VAR_12.lnum, VAR_10)) {




  VAR_9 = 1;
  goto again;
 }
 return 0;

out:
 FUNC_4(&VAR_1->tnc_mutex);
 return VAR_8;
}

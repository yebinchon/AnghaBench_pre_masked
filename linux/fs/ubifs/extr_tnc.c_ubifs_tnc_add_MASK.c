
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
typedef int u8 ;
struct ubifs_znode {struct ubifs_zbranch* zbranch; } ;
struct ubifs_zbranch {int lnum; int offs; int len; int hash; int key; int * znode; } ;
struct ubifs_info {int tnc_mutex; } ;


 int FUNC_0 (struct ubifs_info*,int ) ;
 int FUNC_1 (union ubifs_key const*,char*,int,int,int) ;
 int FUNC_2 (struct ubifs_info*,union ubifs_key const*,int *) ;
 int FUNC_3 (struct ubifs_zbranch*) ;
 int FUNC_4 (struct ubifs_info*,union ubifs_key const*,struct ubifs_znode**,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ubifs_info*,struct ubifs_znode*,struct ubifs_zbranch*,int) ;
 int FUNC_8 (struct ubifs_info*,int,int) ;
 int FUNC_9 (struct ubifs_info*,int const*,int ) ;

int FUNC_10(struct ubifs_info *VAR_0, const union ubifs_key *VAR_1, int VAR_2,
    int VAR_3, int VAR_4, const u8 *VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = 0;
 struct ubifs_znode *VAR_9;

 FUNC_5(&VAR_0->tnc_mutex);
 FUNC_1(VAR_1, "%d:%d, len %d, key ", VAR_2, VAR_3, VAR_4);
 VAR_6 = FUNC_4(VAR_0, VAR_1, &VAR_9, &VAR_7);
 if (!VAR_6) {
  struct ubifs_zbranch VAR_10;

  VAR_10.znode = ((void*)0);
  VAR_10.lnum = VAR_2;
  VAR_10.offs = VAR_3;
  VAR_10.len = VAR_4;
  FUNC_9(VAR_0, VAR_5, VAR_10.hash);
  FUNC_2(VAR_0, VAR_1, &VAR_10.key);
  VAR_8 = FUNC_7(VAR_0, VAR_9, &VAR_10, VAR_7 + 1);
 } else if (VAR_6 == 1) {
  struct ubifs_zbranch *VAR_11 = &VAR_9->zbranch[VAR_7];

  FUNC_3(VAR_11);
  VAR_8 = FUNC_8(VAR_0, VAR_11->lnum, VAR_11->len);
  VAR_11->lnum = VAR_2;
  VAR_11->offs = VAR_3;
  VAR_11->len = VAR_4;
  FUNC_9(VAR_0, VAR_5, VAR_11->hash);
 } else
  VAR_8 = VAR_6;
 if (!VAR_8)
  VAR_8 = FUNC_0(VAR_0, 0);
 FUNC_6(&VAR_0->tnc_mutex);

 return VAR_8;
}

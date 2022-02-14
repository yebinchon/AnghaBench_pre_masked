
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_zbranch {int offs; int lnum; int hash; int len; union ubifs_key key; } ;
struct ubifs_wbuf {int dummy; } ;
struct ubifs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (union ubifs_key*,char*) ;
 int FUNC_1 (struct ubifs_info*,void*,union ubifs_key*) ;
 int FUNC_2 (struct ubifs_info*,union ubifs_key*) ;
 int FUNC_3 (struct ubifs_info*,union ubifs_key*,union ubifs_key*) ;
 int FUNC_4 (struct ubifs_info*,void*,int ,int ,int ) ;
 int FUNC_5 (struct ubifs_info*,void*) ;
 int FUNC_6 (struct ubifs_info*,char*,int ,int ) ;
 struct ubifs_wbuf* FUNC_7 (struct ubifs_info*,int ) ;
 int FUNC_8 (struct ubifs_info*,void*,int ) ;
 int FUNC_9 (struct ubifs_info*,void*,int,int ,int ,int ) ;
 int FUNC_10 (struct ubifs_wbuf*,void*,int,int ,int ,int ) ;

int FUNC_11(struct ubifs_info *VAR_2, struct ubifs_zbranch *VAR_3,
   void *VAR_4)
{
 union ubifs_key VAR_5, *VAR_6 = &VAR_3->key;
 int VAR_7, VAR_8 = FUNC_2(VAR_2, VAR_6);
 struct ubifs_wbuf *VAR_9;





 VAR_9 = FUNC_7(VAR_2, VAR_3->lnum);
 if (VAR_9)
  VAR_7 = FUNC_10(VAR_9, VAR_4, VAR_8, VAR_3->len,
        VAR_3->lnum, VAR_3->offs);
 else
  VAR_7 = FUNC_9(VAR_2, VAR_4, VAR_8, VAR_3->len, VAR_3->lnum,
          VAR_3->offs);

 if (VAR_7) {
  FUNC_0(VAR_6, "key ");
  return VAR_7;
 }


 FUNC_1(VAR_2, VAR_4 + VAR_1, &VAR_5);
 if (!FUNC_3(VAR_2, VAR_6, &VAR_5)) {
  FUNC_6(VAR_2, "bad key in node at LEB %d:%d",
     VAR_3->lnum, VAR_3->offs);
  FUNC_0(VAR_6, "looked for key ");
  FUNC_0(&VAR_5, "but found node's key ");
  FUNC_5(VAR_2, VAR_4);
  return -VAR_0;
 }

 VAR_7 = FUNC_8(VAR_2, VAR_4, VAR_3->hash);
 if (VAR_7) {
  FUNC_4(VAR_2, VAR_4, VAR_3->hash, VAR_3->lnum, VAR_3->offs);
  return VAR_7;
 }

 return 0;
}

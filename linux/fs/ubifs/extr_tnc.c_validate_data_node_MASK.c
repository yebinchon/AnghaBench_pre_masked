
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_zbranch {int lnum; scalar_t__ offs; int len; union ubifs_key key; int hash; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_ch {scalar_t__ node_type; int len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (union ubifs_key*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ubifs_info*,void*,union ubifs_key*) ;
 int FUNC_3 (struct ubifs_info*,union ubifs_key*,union ubifs_key*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ubifs_info*,void*,int ,int,scalar_t__) ;
 int FUNC_6 (struct ubifs_info*,void*,int,scalar_t__,int ,int ) ;
 int FUNC_7 (struct ubifs_info*,void*) ;
 int FUNC_8 (struct ubifs_info*,char*,int,...) ;
 int FUNC_9 (struct ubifs_info*,void*,int ) ;

__attribute__((used)) static int FUNC_10(struct ubifs_info *VAR_3, void *VAR_4,
         struct ubifs_zbranch *VAR_5)
{
 union ubifs_key VAR_6;
 struct ubifs_ch *VAR_7 = VAR_4;
 int VAR_8, VAR_9;

 if (VAR_7->node_type != VAR_1) {
  FUNC_8(VAR_3, "bad node type (%d but expected %d)",
     VAR_7->node_type, VAR_1);
  goto out_err;
 }

 VAR_8 = FUNC_6(VAR_3, VAR_4, VAR_5->lnum, VAR_5->offs, 0, 0);
 if (VAR_8) {
  FUNC_8(VAR_3, "expected node type %d", VAR_1);
  goto out;
 }

 VAR_8 = FUNC_9(VAR_3, VAR_4, VAR_5->hash);
 if (VAR_8) {
  FUNC_5(VAR_3, VAR_4, VAR_5->hash, VAR_5->lnum, VAR_5->offs);
  return VAR_8;
 }

 VAR_9 = FUNC_4(VAR_7->len);
 if (VAR_9 != VAR_5->len) {
  FUNC_8(VAR_3, "bad node length %d, expected %d", VAR_9, VAR_5->len);
  goto out_err;
 }


 FUNC_2(VAR_3, VAR_4 + VAR_2, &VAR_6);
 if (!FUNC_3(VAR_3, &VAR_5->key, &VAR_6)) {
  FUNC_8(VAR_3, "bad key in node at LEB %d:%d",
     VAR_5->lnum, VAR_5->offs);
  FUNC_0(&VAR_5->key, "looked for key ");
  FUNC_0(&VAR_6, "found node's key ");
  goto out_err;
 }

 return 0;

out_err:
 VAR_8 = -VAR_0;
out:
 FUNC_8(VAR_3, "bad node at LEB %d:%d", VAR_5->lnum, VAR_5->offs);
 FUNC_7(VAR_3, VAR_4);
 FUNC_1();
 return VAR_8;
}

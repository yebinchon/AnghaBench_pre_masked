
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_zbranch {int len; int offs; int lnum; } ;
struct ubifs_info {scalar_t__ replaying; } ;
struct ubifs_dent_node {int key; } ;


 int FUNC_0 (union ubifs_key const*,char*,int ,int ,int ) ;
 int FUNC_1 (union ubifs_key const*,char*,int ,int ) ;
 int FUNC_2 (struct ubifs_info*,int *,union ubifs_key*) ;
 int FUNC_3 (struct ubifs_info*,union ubifs_key const*) ;
 scalar_t__ FUNC_4 (struct ubifs_info*,union ubifs_key const*,union ubifs_key*) ;
 int FUNC_5 (struct ubifs_info*,void*,int ,struct ubifs_zbranch*) ;

__attribute__((used)) static int FUNC_6(struct ubifs_info *VAR_0, const union ubifs_key *VAR_1,
         struct ubifs_zbranch *VAR_2, void *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_1, "LEB %d:%d, key ", VAR_2->lnum, VAR_2->offs);

 VAR_4 = FUNC_5(VAR_0, VAR_3, FUNC_3(VAR_0, VAR_1), VAR_2);
 if (VAR_4 == 1) {
  union ubifs_key VAR_5;
  struct ubifs_dent_node *VAR_6 = VAR_3;


  FUNC_2(VAR_0, &VAR_6->key, &VAR_5);
  if (FUNC_4(VAR_0, VAR_1, &VAR_5) != 0)
   VAR_4 = 0;
 }
 if (VAR_4 == 0 && VAR_0->replaying)
  FUNC_0(VAR_1, "dangling branch LEB %d:%d len %d, key ",
   VAR_2->lnum, VAR_2->offs, VAR_2->len);
 return VAR_4;
}

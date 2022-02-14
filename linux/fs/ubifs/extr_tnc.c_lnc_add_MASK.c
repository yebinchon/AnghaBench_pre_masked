
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_zbranch {scalar_t__ len; void* leaf; int key; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_dent_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct ubifs_info*,int *) ;
 void* FUNC_2 (void const*,scalar_t__,int ) ;
 int FUNC_3 (struct ubifs_info*,int) ;
 int FUNC_4 (struct ubifs_info*,struct ubifs_dent_node const*) ;
 int FUNC_5 (struct ubifs_info*,struct ubifs_dent_node const*) ;

__attribute__((used)) static int FUNC_6(struct ubifs_info *VAR_1, struct ubifs_zbranch *VAR_2,
     const void *VAR_3)
{
 int VAR_4;
 void *VAR_5;
 const struct ubifs_dent_node *VAR_6 = VAR_3;

 FUNC_3(VAR_1, !VAR_2->leaf);
 FUNC_3(VAR_1, VAR_2->len != 0);
 FUNC_3(VAR_1, FUNC_1(VAR_1, &VAR_2->key));

 VAR_4 = FUNC_5(VAR_1, VAR_6);
 if (VAR_4) {
  FUNC_0();
  FUNC_4(VAR_1, VAR_6);
  return VAR_4;
 }

 VAR_5 = FUNC_2(VAR_3, VAR_2->len, VAR_0);
 if (!VAR_5)

  return 0;

 VAR_2->leaf = VAR_5;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_zbranch {scalar_t__ len; int key; scalar_t__ leaf; } ;
struct ubifs_info {scalar_t__ replaying; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*,int *,struct ubifs_zbranch*,void*) ;
 int FUNC_1 (struct ubifs_info*,int *) ;
 int FUNC_2 (struct ubifs_info*,struct ubifs_zbranch*,void*) ;
 int FUNC_3 (void*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct ubifs_info*,int) ;
 int FUNC_5 (struct ubifs_info*,struct ubifs_zbranch*,void*) ;

__attribute__((used)) static int FUNC_6(struct ubifs_info *VAR_1, struct ubifs_zbranch *VAR_2,
    void *VAR_3)
{
 int VAR_4;

 FUNC_4(VAR_1, FUNC_1(VAR_1, &VAR_2->key));

 if (VAR_2->leaf) {

  FUNC_4(VAR_1, VAR_2->len != 0);
  FUNC_3(VAR_3, VAR_2->leaf, VAR_2->len);
  return 0;
 }

 if (VAR_1->replaying) {
  VAR_4 = FUNC_0(VAR_1, &VAR_2->key, VAR_2, VAR_3);




  if (VAR_4 == 0)
   VAR_4 = -VAR_0;
  else if (VAR_4 == 1)
   VAR_4 = 0;
 } else {
  VAR_4 = FUNC_5(VAR_1, VAR_2, VAR_3);
 }
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 return VAR_4;
}

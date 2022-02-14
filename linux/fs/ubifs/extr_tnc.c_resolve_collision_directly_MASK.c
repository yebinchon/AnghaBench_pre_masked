
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {TYPE_1__* zbranch; } ;
struct ubifs_info {int dummy; } ;
struct TYPE_2__ {int key; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ubifs_info*,int *,union ubifs_key const*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (struct ubifs_info*,struct ubifs_znode**,int*) ;
 int FUNC_3 (struct ubifs_info*,struct ubifs_znode**,int*) ;

__attribute__((used)) static int FUNC_4(struct ubifs_info *VAR_1,
          const union ubifs_key *VAR_2,
          struct ubifs_znode **VAR_3, int *VAR_4,
          int VAR_5, int VAR_6)
{
 struct ubifs_znode *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = *VAR_3;
 VAR_8 = *VAR_4;
 if (FUNC_1(&VAR_7->zbranch[VAR_8], VAR_5, VAR_6))
  return 1;


 while (1) {
  VAR_9 = FUNC_3(VAR_1, &VAR_7, &VAR_8);
  if (VAR_9 == -VAR_0)
   break;
  if (VAR_9 < 0)
   return VAR_9;
  if (FUNC_0(VAR_1, &VAR_7->zbranch[VAR_8].key, VAR_2))
   break;
  if (FUNC_1(&VAR_7->zbranch[VAR_8], VAR_5, VAR_6)) {
   *VAR_3 = VAR_7;
   *VAR_4 = VAR_8;
   return 1;
  }
 }


 VAR_7 = *VAR_3;
 VAR_8 = *VAR_4;
 while (1) {
  VAR_9 = FUNC_2(VAR_1, &VAR_7, &VAR_8);
  if (VAR_9 == -VAR_0)
   return 0;
  if (VAR_9 < 0)
   return VAR_9;
  if (FUNC_0(VAR_1, &VAR_7->zbranch[VAR_8].key, VAR_2))
   return 0;
  *VAR_3 = VAR_7;
  *VAR_4 = VAR_8;
  if (FUNC_1(&VAR_7->zbranch[VAR_8], VAR_5, VAR_6))
   return 1;
 }
}

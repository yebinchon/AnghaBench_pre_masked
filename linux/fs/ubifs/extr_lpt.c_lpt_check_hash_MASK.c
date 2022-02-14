
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ubifs_info {TYPE_1__* mst_node; } ;
struct TYPE_2__ {int hash_lpt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubifs_info*) ;
 scalar_t__ FUNC_1 (struct ubifs_info*,int ,int *) ;
 int FUNC_2 (struct ubifs_info*,char*) ;
 int FUNC_3 (struct ubifs_info*,int *) ;

__attribute__((used)) static int FUNC_4(struct ubifs_info *VAR_2)
{
 int VAR_3;
 u8 VAR_4[VAR_1];

 if (!FUNC_0(VAR_2))
  return 0;

 VAR_3 = FUNC_3(VAR_2, VAR_4);
 if (VAR_3)
  return VAR_3;

 if (FUNC_1(VAR_2, VAR_2->mst_node->hash_lpt, VAR_4)) {
  VAR_3 = -VAR_0;
  FUNC_2(VAR_2, "Failed to authenticate LPT");
 } else {
  VAR_3 = 0;
 }

 return VAR_3;
}

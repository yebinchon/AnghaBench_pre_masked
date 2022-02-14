
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_znode {struct ubifs_znode* parent; scalar_t__ iip; } ;
struct ubifs_info {int dummy; } ;


 int FUNC_0 (struct ubifs_info const*,struct ubifs_znode*) ;
 struct ubifs_znode* FUNC_1 (struct ubifs_znode*,scalar_t__) ;
 struct ubifs_znode* FUNC_2 (struct ubifs_znode*) ;
 scalar_t__ FUNC_3 (int) ;

struct ubifs_znode *FUNC_4(const struct ubifs_info *VAR_0,
          struct ubifs_znode *VAR_1)
{
 struct ubifs_znode *VAR_2;

 FUNC_0(VAR_0, VAR_1);
 if (FUNC_3(!VAR_1->parent))
  return ((void*)0);


 VAR_2 = FUNC_1(VAR_1->parent, VAR_1->iip + 1);
 if (!VAR_2)

  return VAR_1->parent;


 return FUNC_2(VAR_2);
}

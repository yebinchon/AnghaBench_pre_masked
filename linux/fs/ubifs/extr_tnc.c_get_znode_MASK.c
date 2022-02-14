
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_znode {struct ubifs_zbranch* zbranch; } ;
struct ubifs_zbranch {struct ubifs_znode* znode; } ;
struct ubifs_info {int dummy; } ;


 struct ubifs_znode* FUNC_0 (struct ubifs_info*,struct ubifs_zbranch*,struct ubifs_znode*,int) ;

__attribute__((used)) static struct ubifs_znode *FUNC_1(struct ubifs_info *VAR_0,
         struct ubifs_znode *VAR_1, int VAR_2)
{
 struct ubifs_zbranch *VAR_3;

 VAR_3 = &VAR_1->zbranch[VAR_2];
 if (VAR_3->znode)
  VAR_1 = VAR_3->znode;
 else
  VAR_1 = FUNC_0(VAR_0, VAR_3, VAR_1, VAR_2);
 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dnode_of_data {scalar_t__ nid; scalar_t__ ofs_in_node; struct page* node_page; int inode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct dnode_of_data*) ;
 int FUNC_5 (struct dnode_of_data*) ;

__attribute__((used)) static int FUNC_6(struct dnode_of_data *VAR_1)
{
 struct page *VAR_2;
 int VAR_3;

 if (VAR_1->nid == 0)
  return 1;


 VAR_2 = FUNC_3(FUNC_0(VAR_1->inode), VAR_1->nid);
 if (FUNC_1(VAR_2) && FUNC_2(VAR_2) == -VAR_0)
  return 1;
 else if (FUNC_1(VAR_2))
  return FUNC_2(VAR_2);


 VAR_1->node_page = VAR_2;
 VAR_1->ofs_in_node = 0;
 FUNC_4(VAR_1);
 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3)
  return VAR_3;

 return 1;
}

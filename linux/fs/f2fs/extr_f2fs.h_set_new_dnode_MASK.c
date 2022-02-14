
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct dnode_of_data {int nid; struct page* node_page; struct page* inode_page; struct inode* inode; } ;
typedef int nid_t ;


 int FUNC_0 (struct dnode_of_data*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct dnode_of_data *VAR_0, struct inode *VAR_1,
  struct page *VAR_2, struct page *VAR_3, nid_t VAR_4)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->inode = VAR_1;
 VAR_0->inode_page = VAR_2;
 VAR_0->node_page = VAR_3;
 VAR_0->nid = VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dnode_of_data {int * inode_page; int * node_page; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline void FUNC_1(struct dnode_of_data *VAR_0)
{
 if (VAR_0->node_page)
  FUNC_0(VAR_0->node_page, 1);
 if (VAR_0->inode_page && VAR_0->node_page != VAR_0->inode_page)
  FUNC_0(VAR_0->inode_page, 0);
 VAR_0->node_page = ((void*)0);
 VAR_0->inode_page = ((void*)0);
}

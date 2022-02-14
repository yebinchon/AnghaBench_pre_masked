
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dnode_of_data {scalar_t__ ofs_in_node; int node_page; } ;
typedef scalar_t__ pgoff_t ;


 scalar_t__ FUNC_0 (int ,struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct dnode_of_data*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (struct dnode_of_data*,scalar_t__) ;
 int FUNC_5 (struct dnode_of_data*) ;
 int FUNC_6 (struct dnode_of_data*,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (struct dnode_of_data*,struct inode*,int *,int *,int ) ;

int FUNC_9(struct inode *VAR_2, pgoff_t VAR_3, pgoff_t VAR_4)
{
 int VAR_5;

 while (VAR_3 < VAR_4) {
  struct dnode_of_data VAR_6;
  pgoff_t VAR_7, VAR_8;

  FUNC_8(&VAR_6, VAR_2, ((void*)0), ((void*)0), 0);
  VAR_5 = FUNC_3(&VAR_6, VAR_3, VAR_1);
  if (VAR_5) {
   if (VAR_5 == -VAR_0) {
    VAR_3 = FUNC_4(&VAR_6,
        VAR_3);
    continue;
   }
   return VAR_5;
  }

  VAR_7 = FUNC_0(VAR_6.node_page, VAR_2);
  VAR_8 = FUNC_7(VAR_7 - VAR_6.ofs_in_node, VAR_4 - VAR_3);

  FUNC_2(FUNC_1(VAR_2), VAR_8 == 0 || VAR_8 > VAR_7);

  FUNC_6(&VAR_6, VAR_8);
  FUNC_5(&VAR_6);

  VAR_3 += VAR_8;
 }
 return 0;
}

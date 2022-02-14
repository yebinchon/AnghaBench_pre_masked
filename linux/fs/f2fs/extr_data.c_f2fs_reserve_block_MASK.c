
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dnode_of_data {scalar_t__ data_blkaddr; scalar_t__ inode_page; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dnode_of_data*,int ,int ) ;
 int FUNC_1 (struct dnode_of_data*) ;
 int FUNC_2 (struct dnode_of_data*) ;

int FUNC_3(struct dnode_of_data *VAR_2, pgoff_t VAR_3)
{
 bool VAR_4 = VAR_2->inode_page ? 0 : 1;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_0);
 if (VAR_5)
  return VAR_5;

 if (VAR_2->data_blkaddr == VAR_1)
  VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 || VAR_4)
  FUNC_1(VAR_2);
 return VAR_5;
}

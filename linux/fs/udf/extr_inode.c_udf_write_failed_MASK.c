
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_inode_info {scalar_t__ i_alloc_type; int i_data_sem; } ;
struct inode {scalar_t__ i_size; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,scalar_t__) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct address_space *VAR_1, loff_t VAR_2)
{
 struct inode *VAR_3 = VAR_1->host;
 struct udf_inode_info *VAR_4 = FUNC_0(VAR_3);
 loff_t VAR_5 = VAR_3->i_size;

 if (VAR_2 > VAR_5) {
  FUNC_2(VAR_3, VAR_5);
  if (VAR_4->i_alloc_type != VAR_0) {
   FUNC_1(&VAR_4->i_data_sem);
   FUNC_3(VAR_3);
   FUNC_4(VAR_3);
   FUNC_5(&VAR_4->i_data_sem);
  }
 }
}

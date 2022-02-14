
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_node {int i; } ;
typedef int block_t ;
typedef int __le32 ;


 struct f2fs_node* FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int * FUNC_2 (struct f2fs_node*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline block_t FUNC_7(struct inode *VAR_0,
   struct page *VAR_1, unsigned int VAR_2)
{
 struct f2fs_node *VAR_3;
 __le32 *VAR_4;
 int VAR_5 = 0;
 bool VAR_6 = FUNC_1(VAR_1);

 VAR_3 = FUNC_0(VAR_1);


 if (VAR_6) {
  if (!VAR_0)
   VAR_5 = FUNC_6(&VAR_3->i);
  else if (FUNC_3(VAR_0))
   VAR_5 = FUNC_4(VAR_0);
 }

 VAR_4 = FUNC_2(VAR_3);
 return FUNC_5(VAR_4[VAR_5 + VAR_2]);
}

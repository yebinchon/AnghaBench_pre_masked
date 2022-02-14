
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {TYPE_1__* i_mapping; } ;
struct address_space_operations {int (* is_partially_uptodate ) (struct page*,unsigned int,unsigned int) ;} ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {struct address_space_operations* a_ops; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 unsigned int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct page*) ;
 unsigned int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct page*) ;

__attribute__((used)) static bool
FUNC_9(struct inode *VAR_3, struct page *VAR_4, loff_t *VAR_5,
  int VAR_6)
{
 const struct address_space_operations *VAR_7 = VAR_3->i_mapping->a_ops;
 unsigned int VAR_8 = FUNC_2(VAR_3), VAR_9;
 bool VAR_10 = VAR_6 == VAR_1;
 loff_t VAR_11 = FUNC_5(VAR_4);

 if (FUNC_1(*VAR_5 >= VAR_11 + VAR_0))
  return 0;

 if (*VAR_5 < VAR_11) {




  if (VAR_6 == VAR_2)
   return 1;
  *VAR_5 = VAR_11;
 }




 if (VAR_8 == VAR_0 || !VAR_7->is_partially_uptodate)
  return FUNC_0(VAR_4) == VAR_10;

 FUNC_3(VAR_4);
 if (FUNC_7(VAR_4->mapping != VAR_3->i_mapping))
  goto out_unlock_not_found;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9 += VAR_8) {
  if (FUNC_4(*VAR_5) >= VAR_9 + VAR_8)
   continue;
  if (VAR_7->is_partially_uptodate(VAR_4, VAR_9, VAR_8) == VAR_10) {
   FUNC_8(VAR_4);
   return 1;
  }
  *VAR_5 = VAR_11 + VAR_9 + VAR_8;
 }

out_unlock_not_found:
 FUNC_8(VAR_4);
 return 0;
}

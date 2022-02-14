
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct page {int index; int lru; } ;
struct list_head {int dummy; } ;
struct inode {int i_mapping; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct page*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct list_head*) ;
 struct page* FUNC_3 (struct list_head*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static struct page *
FUNC_6(struct inode *VAR_2, struct list_head *VAR_3, loff_t VAR_4,
  loff_t VAR_5, loff_t *VAR_6)
{
 while (!FUNC_2(VAR_3)) {
  struct page *VAR_7 = FUNC_3(VAR_3);

  if (FUNC_4(VAR_7) >= (u64)VAR_4 + VAR_5)
   break;

  FUNC_1(&VAR_7->lru);
  if (!FUNC_0(VAR_7, VAR_2->i_mapping, VAR_7->index,
    VAR_0))
   return VAR_7;







  *VAR_6 += VAR_1;
  FUNC_5(VAR_7);
 }

 return ((void*)0);
}

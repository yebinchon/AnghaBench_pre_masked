
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (struct address_space*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3,
   struct address_space *VAR_4, loff_t VAR_5,
   unsigned VAR_6, unsigned VAR_7, struct page **VAR_8,
   void **VAR_9)
{
 struct page *VAR_10;

 if (FUNC_1(VAR_5 >= VAR_2))
  return -VAR_0;
 VAR_10 = FUNC_3(VAR_4, 0, VAR_7);
 if (!VAR_10)
  return -VAR_1;
 *VAR_8 = VAR_10;

 if (!FUNC_0(VAR_10))
  FUNC_2(VAR_10);
 return 0;
}

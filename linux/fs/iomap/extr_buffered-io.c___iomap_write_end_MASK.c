
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct iomap {int dummy; } ;
struct inode {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int ,unsigned int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_0, loff_t VAR_1, unsigned VAR_2,
  unsigned VAR_3, struct page *VAR_4, struct iomap *VAR_5)
{
 FUNC_1(VAR_4);
 if (FUNC_5(VAR_3 < VAR_2 && !FUNC_0(VAR_4)))
  return 0;
 FUNC_3(VAR_4, FUNC_4(VAR_1), VAR_2);
 FUNC_2(VAR_4);
 return VAR_3;
}

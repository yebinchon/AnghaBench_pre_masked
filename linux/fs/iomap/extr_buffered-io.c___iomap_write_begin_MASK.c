
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct iomap_page {int dummy; } ;
struct iomap {int dummy; } ;
struct inode {int dummy; } ;
typedef int loff_t ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct iomap_page*,int*,int,unsigned int*,unsigned int*) ;
 struct iomap_page* FUNC_3 (struct inode*,struct page*) ;
 int FUNC_4 (struct inode*,int,struct page*,unsigned int,unsigned int,unsigned int,unsigned int,struct iomap*) ;
 unsigned int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_0, loff_t VAR_1, unsigned VAR_2,
  struct page *VAR_3, struct iomap *VAR_4)
{
 struct iomap_page *VAR_5 = FUNC_3(VAR_0, VAR_3);
 loff_t VAR_6 = FUNC_1(VAR_0);
 loff_t VAR_7 = VAR_1 & ~(VAR_6 - 1);
 loff_t VAR_8 = (VAR_1 + VAR_2 + VAR_6 - 1) & ~(VAR_6 - 1);
 unsigned VAR_9 = FUNC_5(VAR_1), VAR_10 = VAR_9 + VAR_2, VAR_11, VAR_12;
 int VAR_13 = 0;

 if (FUNC_0(VAR_3))
  return 0;

 do {
  FUNC_2(VAR_0, VAR_5, &VAR_7,
    VAR_8 - VAR_7, &VAR_11, &VAR_12);
  if (VAR_12 == 0)
   break;

  if ((VAR_9 > VAR_11 && VAR_9 < VAR_11 + VAR_12) ||
      (VAR_10 > VAR_11 && VAR_10 < VAR_11 + VAR_12)) {
   VAR_13 = FUNC_4(VAR_0, VAR_7, VAR_3,
     VAR_11, VAR_12, VAR_9, VAR_10, VAR_4);
   if (VAR_13)
    break;
  }

 } while ((VAR_7 += VAR_12) < VAR_8);

 return VAR_13;
}

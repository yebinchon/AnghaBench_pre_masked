
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct iov_iter {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (struct page*,unsigned long,int,struct iov_iter*) ;

__attribute__((used)) static size_t
FUNC_1(struct page *VAR_3, unsigned long VAR_4,
   struct iov_iter *VAR_5, unsigned long VAR_6)
{
 size_t VAR_7 = 0;
 int VAR_8, VAR_9;


 VAR_8 = VAR_4 >> VAR_1;
 VAR_4 = VAR_4 & ~VAR_0;

 while (VAR_6) {
  size_t VAR_10;
  VAR_9 = VAR_2;
  if (VAR_4)
   VAR_9 -= VAR_4;
  if (VAR_9 > VAR_6)
   VAR_9 = VAR_6;
  VAR_10 = FUNC_0(&VAR_3[VAR_8], VAR_4, VAR_9, VAR_5);
  VAR_7 += VAR_10;
  if (VAR_10 != VAR_9)
   return VAR_7;
  VAR_4 = 0;
  VAR_6 -= VAR_9;
  VAR_8++;
 }
 return VAR_7;
}

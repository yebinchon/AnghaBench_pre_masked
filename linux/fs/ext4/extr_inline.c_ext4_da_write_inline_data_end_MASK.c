
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {scalar_t__ i_size; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (struct inode*,scalar_t__,unsigned int,unsigned int,struct page*) ;
 int FUNC_1 (struct inode*,scalar_t__) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

int FUNC_5(struct inode *VAR_0, loff_t VAR_1,
      unsigned VAR_2, unsigned VAR_3,
      struct page *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0) {
  FUNC_4(VAR_4);
  FUNC_3(VAR_4);
  return VAR_5;
 }
 VAR_3 = VAR_5;
 if (VAR_1+VAR_3 > VAR_0->i_size)
  FUNC_1(VAR_0, VAR_1+VAR_3);
 FUNC_4(VAR_4);
 FUNC_3(VAR_4);







 FUNC_2(VAR_0);

 return VAR_3;
}

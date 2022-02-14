
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct iomap {unsigned int inline_data; } ;
struct inode {int dummy; } ;
typedef unsigned int loff_t ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (struct page*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (unsigned int,void*,unsigned int) ;
 unsigned int FUNC_7 (unsigned int) ;

__attribute__((used)) static int
FUNC_8(struct inode *VAR_1, struct page *VAR_2,
  struct iomap *VAR_3, loff_t VAR_4, unsigned VAR_5)
{
 void *VAR_6;

 FUNC_2(!FUNC_1(VAR_2));
 FUNC_0(VAR_4 + VAR_5 > VAR_0 - FUNC_7(VAR_3->inline_data));

 VAR_6 = FUNC_3(VAR_2);
 FUNC_6(VAR_3->inline_data + VAR_4, VAR_6 + VAR_4, VAR_5);
 FUNC_4(VAR_6);

 FUNC_5(VAR_1);
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;
typedef unsigned int loff_t ;


 int FUNC_0 (struct address_space*,unsigned int,unsigned int,unsigned int,struct page**,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct address_space*,unsigned int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, struct address_space *VAR_2,
   loff_t VAR_3, unsigned VAR_4, unsigned VAR_5,
   struct page **VAR_6, void **VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_0);
 if (FUNC_2(VAR_8))
  FUNC_1(VAR_2, VAR_3 + VAR_4);

 return VAR_8;
}

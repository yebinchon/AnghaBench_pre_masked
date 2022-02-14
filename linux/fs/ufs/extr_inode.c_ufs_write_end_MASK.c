
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (struct file*,struct address_space*,scalar_t__,unsigned int,unsigned int,struct page*,void*) ;
 int FUNC_1 (struct address_space*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, struct address_space *VAR_1,
   loff_t VAR_2, unsigned VAR_3, unsigned VAR_4,
   struct page *VAR_5, void *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_7 < VAR_3)
  FUNC_1(VAR_1, VAR_2 + VAR_3);
 return VAR_7;
}

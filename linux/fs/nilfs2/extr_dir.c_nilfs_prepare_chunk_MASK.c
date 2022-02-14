
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (struct page*,scalar_t__,unsigned int,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;

__attribute__((used)) static int FUNC_2(struct page *VAR_1, unsigned int VAR_2,
          unsigned int VAR_3)
{
 loff_t VAR_4 = FUNC_1(VAR_1) + VAR_2;

 return FUNC_0(VAR_1, VAR_4, VAR_3 - VAR_2, VAR_0);
}

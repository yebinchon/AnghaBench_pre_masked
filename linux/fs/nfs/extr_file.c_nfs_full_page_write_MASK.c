
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct page*) ;

__attribute__((used)) static bool FUNC_1(struct page *VAR_1, loff_t VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_1);
 unsigned int VAR_5 = VAR_2 & (VAR_0 - 1);
 unsigned int VAR_6 = VAR_5 + VAR_3;

 return !VAR_4 || (VAR_6 >= VAR_4 && !VAR_5);
}

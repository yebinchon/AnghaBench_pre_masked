
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (int,struct page**) ;
 int FUNC_1 (int,struct page**) ;
 int FUNC_2 (int,struct page**) ;

int FUNC_3(int VAR_0, struct page **VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2 < 0)
  FUNC_1(VAR_0, VAR_1);

 return VAR_2;
}

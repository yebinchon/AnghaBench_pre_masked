
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_fmt {unsigned int code; } ;


 unsigned int FUNC_0 (struct vpfe_fmt*) ;
 struct vpfe_fmt* VAR_0 ;

__attribute__((used)) static struct vpfe_fmt *FUNC_1(unsigned int VAR_1)
{
 struct vpfe_fmt *VAR_2;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_2 = &VAR_0[VAR_3];
  if (VAR_2->code == VAR_1)
   return VAR_2;
 }

 return ((void*)0);
}

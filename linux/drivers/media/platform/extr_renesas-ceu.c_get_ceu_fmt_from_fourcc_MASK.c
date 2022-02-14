
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceu_fmt {unsigned int fourcc; } ;


 unsigned int FUNC_0 (struct ceu_fmt*) ;
 struct ceu_fmt* VAR_0 ;

__attribute__((used)) static const struct ceu_fmt *FUNC_1(unsigned int VAR_1)
{
 const struct ceu_fmt *VAR_2 = &VAR_0[0];
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++, VAR_2++)
  if (VAR_2->fourcc == VAR_1)
   return VAR_2;

 return ((void*)0);
}

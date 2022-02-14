
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unicode_data {scalar_t__ gen; scalar_t__ ccc; scalar_t__ utf8nfdi; scalar_t__ utf8nfdicf; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, void *VAR_1)
{
 struct unicode_data *VAR_2 = VAR_0;
 struct unicode_data *VAR_3 = VAR_1;

 if (VAR_2->gen != VAR_3->gen)
  return 0;
 if (VAR_2->ccc != VAR_3->ccc)
  return 0;
 if (VAR_2->utf8nfdicf && VAR_3->utf8nfdicf &&
     FUNC_0(VAR_2->utf8nfdicf, VAR_3->utf8nfdicf) == 0)
  return 1;
 if (VAR_2->utf8nfdicf && VAR_3->utf8nfdicf)
  return 0;
 if (VAR_2->utf8nfdicf || VAR_3->utf8nfdicf)
  return 0;
 if (VAR_2->utf8nfdi && VAR_3->utf8nfdi &&
     FUNC_0(VAR_2->utf8nfdi, VAR_3->utf8nfdi) == 0)
  return 1;
 if (VAR_2->utf8nfdi || VAR_3->utf8nfdi)
  return 0;
 return 1;
}

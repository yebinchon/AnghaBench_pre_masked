
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unicode_data {scalar_t__* utf8nfdi; unsigned int* utf32nfdi; unsigned int* utf32nfdicf; void* utf8nfdicf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__*,char*) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (char*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct unicode_data *VAR_1)
{
 char VAR_2[18*4+1];
 char *VAR_3;
 unsigned int *VAR_4;
 int VAR_5;

 if (VAR_1->utf8nfdi) {
  FUNC_0(VAR_1->utf8nfdi[0] == VAR_0);
  return;
 }

 VAR_3 = VAR_2;
 VAR_4 = VAR_1->utf32nfdi;
 if (VAR_4) {
  for (VAR_5 = 0; VAR_4[VAR_5]; VAR_5++)
   VAR_3 += FUNC_3(VAR_3, VAR_4[VAR_5]);
  *VAR_3 = '\0';
  VAR_1->utf8nfdi = FUNC_2(VAR_2);
 }
 VAR_3 = VAR_2;
 VAR_4 = VAR_1->utf32nfdicf;
 if (VAR_4) {
  for (VAR_5 = 0; VAR_4[VAR_5]; VAR_5++)
   VAR_3 += FUNC_3(VAR_3, VAR_4[VAR_5]);
  *VAR_3 = '\0';
  if (!VAR_1->utf8nfdi || FUNC_1(VAR_1->utf8nfdi, VAR_2))
   VAR_1->utf8nfdicf = FUNC_2(VAR_2);
 }
}

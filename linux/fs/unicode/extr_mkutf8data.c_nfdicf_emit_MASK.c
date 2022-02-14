
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unicode_data {int ccc; scalar_t__ utf8nfdi; scalar_t__ utf8nfdicf; int code; int gen; } ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static unsigned char *FUNC_1(void *VAR_2, unsigned char *VAR_3)
{
 struct unicode_data *VAR_4 = VAR_2;
 unsigned char *VAR_5;

 *VAR_3++ = VAR_4->gen;

 if (FUNC_0(VAR_4->code)) {
  *VAR_3++ = VAR_0;
  *VAR_3++ = VAR_1;
 } else if (VAR_4->utf8nfdicf) {
  *VAR_3++ = VAR_0;
  VAR_5 = (unsigned char*)VAR_4->utf8nfdicf;
  while ((*VAR_3++ = *VAR_5++) != 0)
   ;
 } else if (VAR_4->utf8nfdi) {
  *VAR_3++ = VAR_0;
  VAR_5 = (unsigned char*)VAR_4->utf8nfdi;
  while ((*VAR_3++ = *VAR_5++) != 0)
   ;
 } else {
  *VAR_3++ = VAR_4->ccc;
 }
 return VAR_3;
}

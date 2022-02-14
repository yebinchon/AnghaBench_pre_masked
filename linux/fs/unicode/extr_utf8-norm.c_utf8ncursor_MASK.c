
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utf8data {int dummy; } ;
struct utf8cursor {char const* s; size_t len; void* nccc; void* ccc; scalar_t__ slen; int * sp; int * ss; int * p; struct utf8data const* data; } ;


 void* VAR_0 ;

int FUNC_0(struct utf8cursor *VAR_1, const struct utf8data *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 if (!VAR_2)
  return -1;
 if (!VAR_3)
  return -1;
 VAR_1->data = VAR_2;
 VAR_1->s = VAR_3;
 VAR_1->p = ((void*)0);
 VAR_1->ss = ((void*)0);
 VAR_1->sp = ((void*)0);
 VAR_1->len = VAR_4;
 VAR_1->slen = 0;
 VAR_1->ccc = VAR_0;
 VAR_1->nccc = VAR_0;

 if (VAR_1->len != VAR_4)
  return -1;

 if (VAR_4 > 0 && (*VAR_3 & 0xC0) == 0x80)
  return -1;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utf8cursor {char const* s; size_t len; scalar_t__ unichar; void* nccc; void* ccc; scalar_t__ slen; int * sp; int * ss; int * p; struct tree* tree; } ;
struct tree {int dummy; } ;


 void* VAR_0 ;

int FUNC_0(struct utf8cursor *VAR_1, struct tree *VAR_2, const char *VAR_3,
  size_t VAR_4)
{
 if (!VAR_2)
  return -1;
 if (!VAR_3)
  return -1;
 VAR_1->tree = VAR_2;
 VAR_1->s = VAR_3;
 VAR_1->p = ((void*)0);
 VAR_1->ss = ((void*)0);
 VAR_1->sp = ((void*)0);
 VAR_1->len = VAR_4;
 VAR_1->slen = 0;
 VAR_1->ccc = VAR_0;
 VAR_1->nccc = VAR_0;
 VAR_1->unichar = 0;

 if (VAR_1->len != VAR_4)
  return -1;

 if (VAR_4 > 0 && (*VAR_3 & 0xC0) == 0x80)
  return -1;
 return 0;
}

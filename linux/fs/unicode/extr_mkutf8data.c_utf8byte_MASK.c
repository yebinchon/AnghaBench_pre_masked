
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int utf8leaf_t ;
struct utf8cursor {char* p; char* s; scalar_t__ len; int ccc; int nccc; scalar_t__ sp; int* ss; scalar_t__ slen; int unichar; int hangul; TYPE_1__* tree; } ;
struct TYPE_3__ {scalar_t__ maxage; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 int* FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int*) ;
 int FUNC_5 (int*) ;
 int * FUNC_6 (TYPE_1__*,int ,int*) ;
 int * FUNC_7 (TYPE_1__*,int ,int*,scalar_t__) ;

int FUNC_8(struct utf8cursor *VAR_5)
{
 utf8leaf_t *VAR_6;
 int VAR_7;

 for (;;) {

  if (VAR_5->p && *VAR_5->s == '\0') {
   VAR_5->s = VAR_5->p;
   VAR_5->p = ((void*)0);
  }


  if (!VAR_5->p && (VAR_5->len == 0 || *VAR_5->s == '\0')) {

   if (VAR_5->ccc == VAR_3)
    return 0;

   VAR_7 = VAR_3;
   goto ccc_mismatch;
  } else if ((*VAR_5->s & 0xC0) == 0x80) {

   if (!VAR_5->p)
    VAR_5->len--;
   return (unsigned char)*VAR_5->s++;
  }


  if (VAR_5->p) {
   VAR_6 = FUNC_6(VAR_5->tree, VAR_5->hangul, VAR_5->s);
  } else {
   VAR_6 = FUNC_7(VAR_5->tree, VAR_5->hangul,
        VAR_5->s, VAR_5->len);
  }


  if (!VAR_6)
   return -1;


  if (VAR_4[FUNC_1(VAR_6)] > VAR_5->tree->maxage) {
   VAR_7 = VAR_3;
  } else if ((VAR_7 = FUNC_0(VAR_6)) == VAR_0) {
   VAR_5->len -= FUNC_4(VAR_5->s);
   VAR_5->p = VAR_5->s + FUNC_4(VAR_5->s);
   VAR_5->s = FUNC_2(VAR_6);

   if (*VAR_5->s == '\0') {
    if (VAR_5->ccc == VAR_3)
     continue;
    VAR_7 = VAR_3;
    goto ccc_mismatch;
   }
   VAR_6 = FUNC_6(VAR_5->tree, VAR_5->hangul, VAR_5->s);
   VAR_7 = FUNC_0(VAR_6);
  }
  VAR_5->unichar = FUNC_5(VAR_5->s);





  if (VAR_7 != VAR_3 && VAR_5->ccc < VAR_7 && VAR_7 < VAR_5->nccc)
   VAR_5->nccc = VAR_7;





  if (VAR_7 == VAR_5->ccc) {
   if (!VAR_5->p)
    VAR_5->len--;
   return (unsigned char)*VAR_5->s++;
  }


 ccc_mismatch:
  if (VAR_5->nccc == VAR_3) {





   FUNC_3(VAR_5->ccc == VAR_3);
   VAR_5->ccc = VAR_2 - 1;
   VAR_5->nccc = VAR_7;
   VAR_5->sp = VAR_5->p;
   VAR_5->ss = VAR_5->s;
   VAR_5->slen = VAR_5->len;
   if (!VAR_5->p)
    VAR_5->len -= FUNC_4(VAR_5->s);
   VAR_5->s += FUNC_4(VAR_5->s);
  } else if (VAR_7 != VAR_3) {

   if (!VAR_5->p)
    VAR_5->len -= FUNC_4(VAR_5->s);
   VAR_5->s += FUNC_4(VAR_5->s);
  } else if (VAR_5->nccc != VAR_1 + 1) {

   VAR_5->ccc = VAR_5->nccc;
   VAR_5->nccc = VAR_1 + 1;
   VAR_5->s = VAR_5->ss;
   VAR_5->p = VAR_5->sp;
   VAR_5->len = VAR_5->slen;
  } else {

   VAR_5->ccc = VAR_3;
   VAR_5->nccc = VAR_3;
   VAR_5->sp = ((void*)0);
   VAR_5->ss = ((void*)0);
   VAR_5->slen = 0;
  }
 }
}

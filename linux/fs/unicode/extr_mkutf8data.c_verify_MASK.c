
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8leaf_t ;
struct unicode_data {scalar_t__ correction; int gen; int code; scalar_t__* utf8nfdi; char* utf8nfdicf; scalar_t__ ccc; } ;
struct tree {char* type; int maxage; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int VAR_2 ;
 struct unicode_data* FUNC_4 (struct unicode_data*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,char*) ;
 struct unicode_data* VAR_3 ;
 int FUNC_7 (char*,unsigned int) ;
 int * FUNC_8 (struct tree*,unsigned char*,char*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_9(struct tree *VAR_5)
{
 struct unicode_data *VAR_6;
 utf8leaf_t *VAR_7;
 unsigned int VAR_8;
 char VAR_9[4];
 unsigned char VAR_10[VAR_2];
 int VAR_11;
 int VAR_12;

 if (VAR_4 > 0)
  FUNC_5("Verifying %s_%x\n", VAR_5->type, VAR_5->maxage);
 VAR_12 = FUNC_6(VAR_5->type, "nfdicf");

 for (VAR_8 = 0; VAR_8 != 0x110000; VAR_8++) {
  VAR_11 = 0;
  VAR_6 = FUNC_4(&VAR_3[VAR_8]);
  if (VAR_6->correction <= VAR_5->maxage)
   VAR_6 = &VAR_3[VAR_8];
  FUNC_7(VAR_9,VAR_8);
  VAR_7 = FUNC_8(VAR_5, VAR_10, VAR_9);

  if (!VAR_7) {
   if (VAR_6->gen != -1)
    VAR_11++;
   if (VAR_8 < 0xd800 || VAR_8 > 0xdfff)
    VAR_11++;
  } else {
   if (VAR_8 >= 0xd800 && VAR_8 <= 0xdfff)
    VAR_11++;
   if (VAR_6->gen == -1)
    VAR_11++;
   if (VAR_6->gen != FUNC_2(VAR_7))
    VAR_11++;
   if (FUNC_1(VAR_7) == VAR_0) {
    if (FUNC_0(VAR_6->code)) {
     if (VAR_6->utf8nfdi[0] != VAR_1)
      VAR_11++;
    } else if (VAR_12) {
     if (!VAR_6->utf8nfdi) {
      VAR_11++;
     } else if (FUNC_6(VAR_6->utf8nfdi,
         FUNC_3(VAR_7))) {
      VAR_11++;
     }
    } else {
     if (!VAR_6->utf8nfdicf &&
         !VAR_6->utf8nfdi) {
      VAR_11++;
     } else if (VAR_6->utf8nfdicf) {
      if (FUNC_6(VAR_6->utf8nfdicf,
          FUNC_3(VAR_7)))
       VAR_11++;
     } else if (FUNC_6(VAR_6->utf8nfdi,
         FUNC_3(VAR_7))) {
      VAR_11++;
     }
    }
   } else if (VAR_6->ccc != FUNC_1(VAR_7)) {
    VAR_11++;
   }
  }
  if (VAR_11) {
   FUNC_5("%X code %X gen %d ccc %d"
    " nfdi -> \"%s\"",
    VAR_8, VAR_6->code, VAR_6->gen,
    VAR_6->ccc,
    VAR_6->utf8nfdi);
   if (VAR_7) {
    FUNC_5(" gen %d ccc %d"
     " nfdi -> \"%s\"",
     FUNC_2(VAR_7),
     FUNC_1(VAR_7),
     FUNC_1(VAR_7) == VAR_0 ?
      FUNC_3(VAR_7) : "");
   }
   FUNC_5("\n");
  }
 }
}

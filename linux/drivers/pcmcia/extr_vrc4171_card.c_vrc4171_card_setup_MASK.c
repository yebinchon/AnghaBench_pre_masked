
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* slot; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,char**,int ) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;

__attribute__((used)) static int FUNC_2(char *VAR_13)
{
 if (VAR_13 == ((void*)0) || *VAR_13 == '\0')
  return 1;

 if (FUNC_1(VAR_13, "irq:", 4) == 0) {
  int VAR_14;
  VAR_13 += 4;
  VAR_14 = FUNC_0(VAR_13, &VAR_13, 0);
  if (VAR_14 >= 0 && VAR_14 < VAR_9)
   VAR_10 = VAR_14;

  if (*VAR_13 != ',')
   return 1;
  VAR_13++;
 }

 if (FUNC_1(VAR_13, "slota:", 6) == 0) {
  VAR_13 += 6;
  if (*VAR_13 != '\0') {
   if (FUNC_1(VAR_13, "memnoprobe", 10) == 0) {
    VAR_12[VAR_0].slot = VAR_8;
    VAR_13 += 10;
   } else if (FUNC_1(VAR_13, "ionoprobe", 9) == 0) {
    VAR_12[VAR_0].slot = VAR_7;
    VAR_13 += 9;
   } else if ( FUNC_1(VAR_13, "noprobe", 7) == 0) {
    VAR_12[VAR_0].slot = VAR_6;
    VAR_13 += 7;
   }

   if (*VAR_13 != ',')
    return 1;
   VAR_13++;
  } else
   return 1;

 }

 if (FUNC_1(VAR_13, "slotb:", 6) == 0) {
  VAR_13 += 6;
  if (*VAR_13 != '\0') {
   if (FUNC_1(VAR_13, "pccard", 6) == 0) {
    VAR_11 = VAR_5;
    VAR_13 += 6;
   } else if (FUNC_1(VAR_13, "cf", 2) == 0) {
    VAR_11 = VAR_2;
    VAR_13 += 2;
   } else if (FUNC_1(VAR_13, "flashrom", 8) == 0) {
    VAR_11 = VAR_3;
    VAR_13 += 8;
   } else if (FUNC_1(VAR_13, "none", 4) == 0) {
    VAR_11 = VAR_4;
    VAR_13 += 4;
   }

   if (*VAR_13 != ',')
    return 1;
   VAR_13++;

   if (FUNC_1(VAR_13, "memnoprobe", 10) == 0)
    VAR_12[VAR_1].slot = VAR_8;
   if (FUNC_1(VAR_13, "ionoprobe", 9) == 0)
    VAR_12[VAR_1].slot = VAR_7;
   if (FUNC_1(VAR_13, "noprobe", 7) == 0)
    VAR_12[VAR_1].slot = VAR_6;
  }
 }

 return 1;
}

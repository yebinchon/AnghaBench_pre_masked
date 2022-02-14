
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* status_ptr; TYPE_1__** status; } ;
struct TYPE_4__ {unsigned long when; int ssr; int ph; int irq; } ;
typedef TYPE_2__ AS_Host ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(AS_Host *VAR_2, int VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 signed int VAR_6;

 VAR_6 = VAR_2->status_ptr[VAR_3] - VAR_1;
 if (VAR_6 < 0)
  VAR_6 += VAR_0;

 FUNC_0("%c: %3s:", VAR_3 == 8 ? 'H' : '0' + VAR_3,
  VAR_4 == 0 ? "ph" : VAR_4 == 1 ? "ssr" : "int");

 VAR_5 = VAR_2->status[VAR_3][VAR_6].when;

 for (; VAR_6 != VAR_2->status_ptr[VAR_3]; VAR_6 = (VAR_6 + 1) & (VAR_0 - 1)) {
  unsigned long VAR_7;

  if (!VAR_2->status[VAR_3][VAR_6].when)
   continue;

  switch (VAR_4) {
  case 0:
   FUNC_0("%c%02X", VAR_2->status[VAR_3][VAR_6].irq ? '-' : ' ',
      VAR_2->status[VAR_3][VAR_6].ph);
   break;

  case 1:
   FUNC_0(" %02X", VAR_2->status[VAR_3][VAR_6].ssr);
   break;

  case 2:
   VAR_7 = VAR_2->status[VAR_3][VAR_6].when - VAR_5;
   VAR_5 = VAR_2->status[VAR_3][VAR_6].when;
   if (VAR_7 == 0)
    FUNC_0("==^");
   else if (VAR_7 >= 100)
    FUNC_0("   ");
   else
    FUNC_0(" %02ld", VAR_7);
   break;
  }
 }

 FUNC_0("\n");
}

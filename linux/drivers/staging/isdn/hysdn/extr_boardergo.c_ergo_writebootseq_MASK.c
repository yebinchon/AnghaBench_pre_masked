
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* Data; unsigned char Len; unsigned char WrPtr; unsigned char RdPtr; } ;
typedef TYPE_1__ tDpramBootSpooler ;
struct HYSDN_CARD {int debug_flags; scalar_t__ dpram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct HYSDN_CARD*,char*,...) ;

__attribute__((used)) static int
FUNC_1(struct HYSDN_CARD *VAR_2, unsigned char *VAR_3, int VAR_4)
{
 tDpramBootSpooler *VAR_5 = (tDpramBootSpooler *) VAR_2->dpram;
 unsigned char *VAR_6;
 unsigned char VAR_7;
 int VAR_8;
 unsigned char VAR_9;
 unsigned char VAR_10;
 int VAR_11;

 if (VAR_2->debug_flags & VAR_1)
  FUNC_0(VAR_2, "ERGO: write boot seq len=%d ", VAR_4);

 VAR_6 = VAR_5->Data;
 VAR_7 = VAR_5->Len;
 VAR_10 = VAR_5->WrPtr;


 VAR_11 = 0x1000;
 while (VAR_4) {


  do {
   VAR_9 = VAR_5->RdPtr;
   VAR_11--;
  } while (VAR_11 && (VAR_9 != VAR_5->RdPtr));

  if (!VAR_11) {
   if (VAR_2->debug_flags & VAR_1)
    FUNC_0(VAR_2, "ERGO: write boot seq timeout");
   return (-VAR_0);
  }
  if ((VAR_8 = VAR_9 - VAR_10 - 1) < 0)
   VAR_8 += VAR_7;

  if (!VAR_8)
   continue;

  if (VAR_8 > VAR_4)
   VAR_8 = VAR_4;
  VAR_11 = 0x1000;


  VAR_4 -= VAR_8;
  while (VAR_8--) {
   *(VAR_6 + VAR_10) = *VAR_3++;
   if (++VAR_10 >= VAR_7)
    VAR_10 = 0;
   VAR_5->WrPtr = VAR_10;
  }

 }
 return (0);
}

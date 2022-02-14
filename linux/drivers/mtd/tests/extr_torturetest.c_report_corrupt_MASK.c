
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t erasesize; } ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned char*,unsigned char*,int,int,int*,int*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (unsigned char*,unsigned char*,int,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(unsigned char *VAR_3, unsigned char *VAR_4)
{
 int VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11;
 size_t VAR_12 = VAR_0->erasesize;

 if (VAR_1)
  VAR_12 = VAR_1 * VAR_2;

 VAR_6 = VAR_7 = VAR_8 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_12; VAR_5 += VAR_2)
  if (FUNC_1(VAR_4, VAR_3, VAR_5, VAR_2, &VAR_6,
          &VAR_7) >= 0)
   VAR_8++;

 FUNC_2("verify fails on %d pages, %d bytes/%d bits\n",
        VAR_8, VAR_6, VAR_7);
 FUNC_2("The following is a list of all differences between"
        " what was read from flash and what was expected\n");

 for (VAR_5 = 0; VAR_5 < VAR_12; VAR_5 += VAR_2) {
  FUNC_0();
  VAR_6 = VAR_7 = 0;
  VAR_9 = FUNC_1(VAR_4, VAR_3, VAR_5, VAR_2, &VAR_6,
       &VAR_7);
  if (VAR_9 < 0)
   continue;

  FUNC_4("-------------------------------------------------------"
         "----------------------------------\n");

  FUNC_2("Page %zd has %d bytes/%d bits failing verify,"
         " starting at offset 0x%x\n",
         (VAR_0->erasesize - VAR_12 + VAR_5) / VAR_2,
         VAR_6, VAR_7, VAR_9);

  VAR_10 = VAR_9 & ~0x7;
  VAR_11 = ((VAR_9 + VAR_6) | 0x7) + 1 - VAR_10;

  FUNC_3(VAR_3, VAR_4, VAR_10, VAR_11);
 }
}

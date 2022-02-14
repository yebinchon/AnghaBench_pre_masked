
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int code; } ;


 int FUNC_0 () ;
 void* VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 () ;
 void* VAR_2 ;
 int FUNC_2 () ;
 void* VAR_3 ;
 int FUNC_3 (int ) ;
 void* VAR_4 ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_5 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_13 () ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 TYPE_1__* VAR_11 ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 void* VAR_12 ;
 int VAR_13 ;
 int FUNC_21 () ;

int FUNC_22(int VAR_14, char *VAR_15[])
{
 unsigned int VAR_16;
 int VAR_17;

 VAR_1 = VAR_15[0];

 while ((VAR_17 = FUNC_4(VAR_14, VAR_15, "a:c:d:f:hn:o:p:t:v")) != -1) {
  switch (VAR_17) {
  case 'a':
   VAR_0 = VAR_8;
   break;
  case 'c':
   VAR_2 = VAR_8;
   break;
  case 'd':
   VAR_3 = VAR_8;
   break;
  case 'f':
   VAR_4 = VAR_8;
   break;
  case 'n':
   VAR_7 = VAR_8;
   break;
  case 'o':
   VAR_12 = VAR_8;
   break;
  case 'p':
   VAR_9 = VAR_8;
   break;
  case 't':
   VAR_10 = VAR_8;
   break;
  case 'v':
   VAR_13++;
   break;
  case 'h':
   FUNC_6();
   FUNC_3(0);
  default:
   FUNC_19();
  }
 }

 if (VAR_13 > 1)
  FUNC_6();
 for (VAR_16 = 0; VAR_16 != 0x110000; VAR_16++)
  VAR_11[VAR_16].code = VAR_16;
 FUNC_0();
 FUNC_1();
 FUNC_10();
 FUNC_12();
 FUNC_7();
 FUNC_2();
 FUNC_5();
 FUNC_9();
 FUNC_11();
 FUNC_20();
 FUNC_15();
 FUNC_16();
 FUNC_17();
 FUNC_18();

 (void)FUNC_8(VAR_5, " ");
 if (VAR_13 > 2)
  FUNC_14(VAR_5);
 if (VAR_13 > 2)
  FUNC_14(VAR_6);
 FUNC_13();
 FUNC_21();

 return 0;
}

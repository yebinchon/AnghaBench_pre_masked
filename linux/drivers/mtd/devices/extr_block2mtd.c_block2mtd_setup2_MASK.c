
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 unsigned long VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,size_t,unsigned long) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (size_t*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const*,int) ;
 char* FUNC_7 (char**,char*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_2)
{

 char VAR_3[80 + 12 + 80 + 8];
 char *VAR_4 = VAR_3;
 char *VAR_5[2];
 char *VAR_6;
 size_t VAR_7 = VAR_1;
 unsigned long VAR_8 = VAR_0;
 int VAR_9, VAR_10;

 if (FUNC_6(VAR_2, sizeof(VAR_3)) >= sizeof(VAR_3)) {
  FUNC_3("parameter too long\n");
  return 0;
 }

 FUNC_4(VAR_4, VAR_2);
 FUNC_1(VAR_4);

 for (VAR_9 = 0; VAR_9 < 2; VAR_9++)
  VAR_5[VAR_9] = FUNC_7(&VAR_4, ",");

 if (VAR_4) {
  FUNC_3("too many arguments\n");
  return 0;
 }

 if (!VAR_5[0]) {
  FUNC_3("no argument\n");
  return 0;
 }

 VAR_6 = VAR_5[0];
 if (FUNC_5(VAR_6) + 1 > 80) {
  FUNC_3("device name too long\n");
  return 0;
 }

 if (VAR_5[1]) {
  VAR_10 = FUNC_2(&VAR_7, VAR_5[1]);
  if (VAR_10) {
   FUNC_3("illegal erase size\n");
   return 0;
  }
 }

 FUNC_0(VAR_6, VAR_7, VAR_8);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char** VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (char*,char const*) ;
 char* FUNC_1 (size_t) ;
 unsigned int FUNC_2 (char const*,char**,int ) ;
 int FUNC_3 (char*,char*,char const*,char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 size_t FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*,char const*,size_t) ;

int FUNC_7(int VAR_8, const char **VAR_9)
{
 int VAR_10;
 char *VAR_11;
 size_t VAR_12, VAR_13;







 if (VAR_8 == 3) {
  VAR_9[2] = VAR_9[3];
  VAR_8--;
 }

 if (VAR_8 != 2)
  return VAR_0;




 if (FUNC_4(VAR_9[1], "KDBDEBUG") == 0) {
  unsigned int VAR_14;
  char *VAR_15;

  VAR_14 = FUNC_2(VAR_9[2], &VAR_15, 0);
  if (VAR_15 == VAR_9[2] || VAR_14 & ~VAR_1) {
   FUNC_0("kdb: illegal debug flags '%s'\n",
        VAR_9[2]);
   return 0;
  }
  VAR_7 = (VAR_7 &
        ~(VAR_1 << VAR_2))
   | (VAR_14 << VAR_2);

  return 0;
 }





 VAR_12 = FUNC_5(VAR_9[1]);
 VAR_13 = FUNC_5(VAR_9[2]);
 VAR_11 = FUNC_1(VAR_12 + VAR_13 + 2);
 if (VAR_11 == (char *)0)
  return VAR_3;

 FUNC_3(VAR_11, "%s=%s", VAR_9[1], VAR_9[2]);

 VAR_11[VAR_12+VAR_13+1] = '\0';

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  if (VAR_5[VAR_10]
   && ((FUNC_6(VAR_5[VAR_10], VAR_9[1], VAR_12) == 0)
     && ((VAR_5[VAR_10][VAR_12] == '\0')
      || (VAR_5[VAR_10][VAR_12] == '=')))) {
   VAR_5[VAR_10] = VAR_11;
   return 0;
  }
 }




 for (VAR_10 = 0; VAR_10 < VAR_6-1; VAR_10++) {
  if (VAR_5[VAR_10] == (char *)0) {
   VAR_5[VAR_10] = VAR_11;
   return 0;
  }
 }

 return VAR_4;
}

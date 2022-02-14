
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int umode_t ;
struct TYPE_5__ {char* from; } ;
typedef TYPE_1__ substring_t ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*,int*) ;
 int FUNC_5 (TYPE_1__*,int*) ;
 int FUNC_6 (char*,int ,TYPE_1__*) ;
 int FUNC_7 (char*,char**,int ) ;
 char* FUNC_8 (char**,char*) ;
 int VAR_1 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(char *VAR_2, kuid_t *VAR_3, kgid_t *VAR_4, umode_t *VAR_5,
        int *VAR_6, int *VAR_7, int *VAR_8, int *VAR_9,
        int *VAR_10, int *VAR_11)
{
 char *VAR_12;
 int VAR_13;

 if (!VAR_2)
  return 1;



 while ((VAR_12 = FUNC_8(&VAR_2, ",")) != ((void*)0)) {
  substring_t VAR_14[VAR_0];
  int VAR_15;
  if (!*VAR_12)
   continue;

  VAR_15 = FUNC_6(VAR_12, VAR_1, VAR_14);
  switch (VAR_15) {
  case 131:
   return 2;
  case 129:
   if (FUNC_4(VAR_14, &VAR_13))
    return 0;
   *VAR_3 = FUNC_3(FUNC_0(), VAR_13);
   if (!FUNC_9(*VAR_3))
    return 0;
   break;
  case 132:
   if (FUNC_4(VAR_14, &VAR_13))
    return 0;
   *VAR_4 = FUNC_2(FUNC_0(), VAR_13);
   if (!FUNC_1(*VAR_4))
    return 0;
   break;
  case 128:
   if (FUNC_5(VAR_14, &VAR_13))
    return 0;
   *VAR_5 = VAR_13;
   break;
  case 145:
   *VAR_6 = 1;
   break;
  case 146:
   *VAR_6 = 0;
   break;
  case 144:
   *VAR_8 = 0;
   break;
  case 143:
   *VAR_8 = 1;
   break;
  case 142:
   *VAR_8 = 2;
   break;
  case 135:
   *VAR_9 = 0;
   break;
  case 133:
   *VAR_9 = 1;
   break;
  case 134:
   *VAR_9 = 2;
   break;
  case 138:
   *VAR_7 = 0;
   break;
  case 137:
   *VAR_7 = 1;
   break;
  case 136:
   *VAR_7 = 2;
   break;
  case 139:
   *VAR_10 = 0;
   break;
  case 140:
   *VAR_10 = 1;
   break;
  case 141:
   *VAR_10 = 2;
   break;
  case 130:
  {
   int VAR_16 = 1;
   char *VAR_17 = VAR_14[0].from;
   if (!VAR_17 || !*VAR_17)
    return 0;
   if (*VAR_17 == '-') VAR_16 = -1;
   if (*VAR_17 == '+' || *VAR_17 == '-') VAR_17++;
   *VAR_11 = FUNC_7(VAR_17, &VAR_17, 0) * VAR_16;
   if (*VAR_17)
    return 0;
   break;
  }
  default:
   return 0;
  }
 }
 return 1;
}

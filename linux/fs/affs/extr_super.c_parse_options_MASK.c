
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
typedef int s32 ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *,int*) ;
 int FUNC_9 (int *,int*) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (char*,int ,int *) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*,char*,int) ;
 char* FUNC_14 (char**,char*) ;
 int VAR_9 ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int
FUNC_16(char *VAR_10, kuid_t *VAR_11, kgid_t *VAR_12, int *VAR_13, int *VAR_14, s32 *VAR_15,
  int *VAR_16, char **VAR_17, char *VAR_18, unsigned long *VAR_19)
{
 char *VAR_20;
 substring_t VAR_21[VAR_0];



 *VAR_11 = FUNC_2();
 *VAR_12 = FUNC_1();
 *VAR_14 = 2;
 *VAR_15 = -1;
 *VAR_16 = -1;
 VAR_18[0] = ':';
 VAR_18[1] = 0;
 *VAR_19 = 0;
 if (!VAR_10)
  return 1;

 while ((VAR_20 = FUNC_14(&VAR_10, ",")) != ((void*)0)) {
  int VAR_22, VAR_23, VAR_24;
  if (!*VAR_20)
   continue;

  VAR_22 = FUNC_11(VAR_20, VAR_9, VAR_21);
  switch (VAR_22) {
  case 140:
   if (FUNC_8(&VAR_21[0], &VAR_23))
    return 0;
   if (VAR_23 != 512 && VAR_23 != 1024 && VAR_23 != 2048
       && VAR_23 != 4096) {
    FUNC_12("Invalid blocksize (512, 1024, 2048, 4096 allowed)\n");
    return 0;
   }
   *VAR_16 = VAR_23;
   break;
  case 138:
   if (FUNC_9(&VAR_21[0], &VAR_24))
    return 0;
   *VAR_13 = VAR_24 & 0777;
   FUNC_0(*VAR_19, VAR_6);
   break;
  case 137:
   FUNC_0(*VAR_19, VAR_2);
   break;
  case 136:
   FUNC_0(*VAR_19, VAR_3);
   break;
  case 135:
   FUNC_5(*VAR_17);
   *VAR_17 = FUNC_10(&VAR_21[0]);
   if (!*VAR_17)
    return 0;
   FUNC_0(*VAR_19, VAR_4);
   break;
  case 134:
   FUNC_0(*VAR_19, VAR_1);
   break;
  case 133:
   if (FUNC_8(&VAR_21[0], VAR_14))
    return 0;
   break;
  case 132:
   if (FUNC_8(&VAR_21[0], VAR_15))
    return 0;
   break;
  case 131:
   if (FUNC_8(&VAR_21[0], &VAR_24))
    return 0;
   *VAR_12 = FUNC_6(FUNC_3(), VAR_24);
   if (!FUNC_4(*VAR_12))
    return 0;
   FUNC_0(*VAR_19, VAR_5);
   break;
  case 130:
   if (FUNC_8(&VAR_21[0], &VAR_24))
    return 0;
   *VAR_11 = FUNC_7(FUNC_3(), VAR_24);
   if (!FUNC_15(*VAR_11))
    return 0;
   FUNC_0(*VAR_19, VAR_7);
   break;
  case 129:
   FUNC_0(*VAR_19, VAR_8);
   break;
  case 128: {
   char *VAR_25 = FUNC_10(&VAR_21[0]);
   if (!VAR_25)
    return 0;
   FUNC_13(VAR_18, VAR_25, 32);
   FUNC_5(VAR_25);
   break;
  }
  case 139:

   break;
  default:
   FUNC_12("Unrecognized mount option \"%s\" or missing value\n",
    VAR_20);
   return 0;
  }
 }
 return 1;
}

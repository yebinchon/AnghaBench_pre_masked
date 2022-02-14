
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int RegDecryptCustomFile; } ;
struct adapter {TYPE_1__ registrypriv; } ;


 int FUNC_0 (char*,...) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,int*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (struct adapter*,int*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_5 (char*,int*,char*,char,char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int*,int*,int) ;
 int FUNC_7 (void*,int ,int) ;
 int FUNC_8 (struct adapter*,char*) ;

__attribute__((used)) static int FUNC_9(struct adapter *VAR_3, char *VAR_4)
{
 u32 VAR_5 = 0, VAR_6 = 0;
 u8 VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 char *VAR_10, *VAR_11;
 int VAR_12 = VAR_2;
 char VAR_13[10], VAR_14[10], VAR_15[10],
  VAR_16[VAR_0][10], VAR_17[10], VAR_18[10];
 u8 VAR_19 = 0;

 FUNC_0("===>phy_ParsePowerLimitTableFile()\n");

 if (VAR_3->registrypriv.RegDecryptCustomFile == 1)
  FUNC_8(VAR_3, VAR_4);

 VAR_11 = VAR_4;
 for (VAR_10 = FUNC_1(VAR_11); VAR_10 != ((void*)0); VAR_10 = FUNC_1(VAR_11)) {

  if (FUNC_3(VAR_10)) {
   continue;
  }

  if (VAR_7 == 0) {
   for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6)
    FUNC_7((void *) VAR_16[VAR_6], 0, 10);

   FUNC_7((void *) VAR_13, 0, 10);
   FUNC_7((void *) VAR_14, 0, 10);
   FUNC_7((void *) VAR_15, 0, 10);
   FUNC_7((void *) VAR_17, 0, 10);
   FUNC_7((void *) VAR_18, 0, 10);

   if (VAR_10[0] != '#' || VAR_10[1] != '#')
    continue;


   VAR_5 = 2;
   while (VAR_10[VAR_5] == ' ' || VAR_10[VAR_5] == '\t')
    ++VAR_5;

   VAR_10[--VAR_5] = ' ';


   if (!FUNC_5(VAR_10, &VAR_5, VAR_13, ' ', ',')) {
    FUNC_0("Fail to parse band!\n");
    return VAR_1;
   }
   if (!FUNC_5(VAR_10, &VAR_5, VAR_14, ' ', ',')) {
    FUNC_0("Fail to parse bandwidth!\n");
    return VAR_1;
   }
   if (!FUNC_5(VAR_10, &VAR_5, VAR_17, ' ', ',')) {
    FUNC_0("Fail to parse rf path!\n");
    return VAR_1;
   }
   if (!FUNC_5(VAR_10, &VAR_5, VAR_15, ' ', ',')) {
    FUNC_0("Fail to parse rate!\n");
    return VAR_1;
   }

   VAR_7 = 1;
  } else if (VAR_7 == 1) {
   if (VAR_10[0] != '#' || VAR_10[1] != '#')
    continue;


   VAR_5 = 2;
   while (VAR_10[VAR_5] == ' ' || VAR_10[VAR_5] == '\t')
    ++VAR_5;

   if (!FUNC_6((u8 *)(VAR_10 + VAR_5), (u8 *)("START"), 5)) {
    FUNC_0("Lost \"##   START\" label\n");
    return VAR_1;
   }

   VAR_7 = 2;
  } else if (VAR_7 == 2) {
   if (VAR_10[0] != '#' || VAR_10[1] != '#')
    continue;


   VAR_5 = 2;
   while (VAR_10[VAR_5] == ' ' || VAR_10[VAR_5] == '\t')
    ++VAR_5;

   if (!FUNC_5(VAR_10, &VAR_5, VAR_18, '#', '#')) {
    FUNC_0("Fail to parse column number!\n");
    return VAR_1;
   }

   if (!FUNC_2(VAR_18, &VAR_19))
    return VAR_1;

   if (VAR_19 > VAR_0) {
    FUNC_0(
     "invalid col number %d (greater than max %d)\n",
     VAR_19, VAR_0
    );
    return VAR_1;
   }

   for (VAR_6 = 0; VAR_6 < VAR_19; ++VAR_6) {
    u8 VAR_20 = 0;


    while (VAR_10[VAR_5] == ' ' || VAR_10[VAR_5] == '\t')
     ++VAR_5;

    while (VAR_10[VAR_5] != ' ' && VAR_10[VAR_5] != '\t' && VAR_10[VAR_5] != '\0')
     VAR_16[VAR_6][VAR_20++] = VAR_10[VAR_5++];


    if (VAR_20 == 0) {
     FUNC_0("invalid number of regulation!\n");
     return VAR_1;
    }
   }

   VAR_7 = 3;
  } else if (VAR_7 == 3) {
   char VAR_21[10] = {0}, VAR_22[10] = {0};
   u8 VAR_23 = 0;


   if (VAR_10[0] == '#' && VAR_10[1] == '#') {
    VAR_5 = 2;
    while (VAR_10[VAR_5] == ' ' || VAR_10[VAR_5] == '\t')
     ++VAR_5;

    if (FUNC_6((u8 *)(VAR_10 + VAR_5), (u8 *)("END"), 3)) {
     VAR_7 = 0;
     continue;
    } else {
     FUNC_0("Wrong format\n");
     FUNC_0("<===== phy_ParsePowerLimitTableFile()\n");
     return VAR_1;
    }
   }

   if ((VAR_10[0] != 'c' && VAR_10[0] != 'C') ||
     (VAR_10[1] != 'h' && VAR_10[1] != 'H')) {
    FUNC_0("Meet wrong channel => power limt pair\n");
    continue;
   }
   VAR_5 = 2;


   VAR_23 = 0;
   while (VAR_10[VAR_5] >= '0' && VAR_10[VAR_5] <= '9') {
    VAR_21[VAR_23] = VAR_10[VAR_5];
    ++VAR_23;
    ++VAR_5;
   }


   for (VAR_6 = 0; VAR_6 < VAR_19; ++VAR_6) {

    while (VAR_10[VAR_5] == ' ' || VAR_10[VAR_5] == '\t')
     ++VAR_5;


    VAR_23 = 0;
    VAR_9 = 0;
    FUNC_7((void *) VAR_22, 0, 10);
    while ((VAR_10[VAR_5] >= '0' && VAR_10[VAR_5] <= '9') || VAR_10[VAR_5] == '.') {
     if (VAR_10[VAR_5] == '.') {
      if ((VAR_10[VAR_5+1] >= '0' && VAR_10[VAR_5+1] <= '9')) {
       VAR_9 = VAR_10[VAR_5+1];
       VAR_5 += 2;
      } else {
       FUNC_0("Wrong fraction in TXPWR_LMT.txt\n");
       return VAR_1;
      }

      break;
     }

     VAR_22[VAR_23] = VAR_10[VAR_5];
     ++VAR_23;
     ++VAR_5;
    }

    if (VAR_22[0] == '\0') {
     VAR_22[0] = '6';
     VAR_22[1] = '3';
     VAR_5 += 2;
    } else {
     if (!FUNC_2(VAR_22, &VAR_8))
      return VAR_1;

     VAR_8 *= 2;
     VAR_23 = 0;
     if (VAR_9 == '5')
      ++VAR_8;


     if (VAR_8 >= 100) {
      VAR_22[VAR_23++] = VAR_8/100 + '0';
      VAR_8 %= 100;

      if (VAR_8 >= 10) {
       VAR_22[VAR_23++] = VAR_8/10 + '0';
       VAR_8 %= 10;
      } else
       VAR_22[VAR_23++] = '0';

      VAR_22[VAR_23++] = VAR_8 + '0';
     } else if (VAR_8 >= 10) {
      VAR_22[VAR_23++] = VAR_8/10 + '0';
      VAR_8 %= 10;
      VAR_22[VAR_23++] = VAR_8 + '0';
     }

     else
      VAR_22[VAR_23++] = VAR_8 + '0';

     VAR_22[VAR_23] = '\0';
    }




    FUNC_4(VAR_3, (u8 *)VAR_16[VAR_6], (u8 *)VAR_13,
     (u8 *)VAR_14, (u8 *)VAR_15, (u8 *)VAR_17, (u8 *)VAR_21, (u8 *)VAR_22);

   }
  } else {
   FUNC_0("Abnormal loading stage in phy_ParsePowerLimitTableFile()!\n");
   VAR_12 = VAR_1;
   break;
  }
 }

 FUNC_0("<===phy_ParsePowerLimitTableFile()\n");
 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {char PhyRegPgVersion; scalar_t__ PhyRegPgValueType; } ;
struct hal_com_data {TYPE_2__ odmpriv; } ;
struct TYPE_3__ {int RegDecryptCustomFile; } ;
struct adapter {TYPE_1__ registrypriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;
 scalar_t__ FUNC_2 (char*,int*,int*,int*) ;
 scalar_t__ FUNC_3 (char*,int*,int*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (struct adapter*,int,int,int,int,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (char*,int) ;
 int FUNC_9 (struct adapter*,char*) ;

__attribute__((used)) static int FUNC_10(struct adapter *VAR_10, char *VAR_11)
{
 int VAR_12 = VAR_9;
 struct hal_com_data *VAR_13 = FUNC_1(VAR_10);
 char *VAR_14, *VAR_15;
 u32 VAR_16, VAR_17, VAR_18;
 u32 VAR_19;
 bool VAR_20 = 1;
 u8 VAR_21 = 0;
 u8 VAR_22 = 0, VAR_23 = 0;



 if (VAR_10->registrypriv.RegDecryptCustomFile == 1)
  FUNC_9(VAR_10, VAR_11);

 VAR_15 = VAR_11;
 for (VAR_14 = FUNC_4(VAR_15); VAR_14 != ((void*)0); VAR_14 = FUNC_4(VAR_15)) {
  if (!FUNC_5(VAR_14)) {
   if (FUNC_8(VAR_14, sizeof(*VAR_14)))
    continue;


   if (VAR_20) {
    if (FUNC_7(VAR_14, (u8 *)("#[v1]"), 5)) {

     VAR_13->odmpriv.PhyRegPgVersion = VAR_14[3] - '0';

    } else if (FUNC_7(VAR_14, (u8 *)("#[v0]"), 5)) {
     VAR_13->odmpriv.PhyRegPgVersion = VAR_14[3] - '0';

    } else {
     FUNC_0("The format in PHY_REG_PG are invalid %s\n", VAR_14);
     return VAR_8;
    }

    if (FUNC_7(VAR_14 + 5, (u8 *)("[Exact]#"), 8)) {
     VAR_13->odmpriv.PhyRegPgValueType = VAR_2;

     VAR_20 = 0;
     continue;
    } else if (FUNC_7(VAR_14 + 5, (u8 *)("[Relative]#"), 11)) {
     VAR_13->odmpriv.PhyRegPgValueType = VAR_3;

     VAR_20 = 0;
     continue;
    } else {
     FUNC_0("The values in PHY_REG_PG are invalid %s\n", VAR_14);
     return VAR_8;
    }
   }

   if (VAR_13->odmpriv.PhyRegPgVersion == 0) {

    if (FUNC_3(VAR_14, &VAR_16, &VAR_19)) {
     VAR_14 += VAR_19;
     if (VAR_16 == 0xffff)
      break;


     if (FUNC_3(VAR_14, &VAR_17, &VAR_19))
      VAR_14 += VAR_19;
     else
      return VAR_8;

     if (VAR_13->odmpriv.PhyRegPgValueType == VAR_3) {

      if (FUNC_3(VAR_14, &VAR_18, &VAR_19)) {
       FUNC_6(VAR_10, 0, 0, 1, VAR_16, VAR_17, VAR_18);

      } else
       return VAR_8;
     } else if (VAR_13->odmpriv.PhyRegPgValueType == VAR_2) {
      u32 VAR_24 = 0;
      u8 VAR_25 = 0, VAR_26 = 0;

      if (FUNC_2(VAR_14, &VAR_25, &VAR_26, &VAR_19))
       VAR_14 += VAR_19;
      else
       return VAR_8;

      VAR_25 *= 2;
      if (VAR_26 == 5)
       VAR_25 += 1;
      VAR_24 |= (((VAR_25 / 10) << 4) + (VAR_25 % 10));


      if (FUNC_2(VAR_14, &VAR_25, &VAR_26, &VAR_19))
       VAR_14 += VAR_19;
      else
       return VAR_8;

      VAR_25 *= 2;
      if (VAR_26 == 5)
       VAR_25 += 1;
      VAR_24 <<= 8;
      VAR_24 |= (((VAR_25 / 10) << 4) + (VAR_25 % 10));


      if (FUNC_2(VAR_14, &VAR_25, &VAR_26, &VAR_19))
       VAR_14 += VAR_19;
      else
       return VAR_8;

      VAR_25 *= 2;
      if (VAR_26 == 5)
       VAR_25 += 1;
      VAR_24 <<= 8;
      VAR_24 |= (((VAR_25 / 10) << 4) + (VAR_25 % 10));


      if (FUNC_2(VAR_14, &VAR_25, &VAR_26, &VAR_19))
       VAR_14 += VAR_19;
      else
       return VAR_8;

      VAR_25 *= 2;
      if (VAR_26 == 5)
       VAR_25 += 1;
      VAR_24 <<= 8;
      VAR_24 |= (((VAR_25 / 10) << 4) + (VAR_25 % 10));

      FUNC_6(VAR_10, 0, 0, 1, VAR_16, VAR_17, VAR_24);


     }
    }
   } else if (VAR_13->odmpriv.PhyRegPgVersion > 0) {
    u32 VAR_27 = 0;

    if (FUNC_7(VAR_14, "0xffff", 6))
     break;

    if (!FUNC_7("#[END]#", VAR_14, 7)) {

     if (VAR_14[0] == '#') {
      VAR_27 = 0;
      if (FUNC_7(VAR_14, "#[2.4G]", 7)) {
       VAR_22 = VAR_0;
       VAR_27 += 8;
      } else if (FUNC_7(VAR_14, "#[5G]", 5)) {
       VAR_22 = VAR_1;
       VAR_27 += 6;
      } else {
       FUNC_0("Invalid band %s in PHY_REG_PG.txt\n", VAR_14);
       return VAR_8;
      }

      VAR_23 = VAR_14[VAR_27] - 'A';

     } else {
      if (VAR_14[1] == '1')
       VAR_21 = VAR_4;
      else if (VAR_14[1] == '2')
       VAR_21 = VAR_5;
      else if (VAR_14[1] == '3')
       VAR_21 = VAR_6;
      else if (VAR_14[1] == '4')
       VAR_21 = VAR_7;
      else {
       FUNC_0("Invalid row in PHY_REG_PG.txt %c\n", VAR_14[1]);
       return VAR_8;
      }

      while (VAR_14[VAR_27] != ']')
       ++VAR_27;
      ++VAR_27;


      VAR_14 += VAR_27;
      if (FUNC_3(VAR_14, &VAR_16, &VAR_19))
       VAR_14 += VAR_19;
      else
       return VAR_8;


      if (FUNC_3(VAR_14, &VAR_17, &VAR_19))
       VAR_14 += VAR_19;
      else
       return VAR_8;

      if (VAR_13->odmpriv.PhyRegPgValueType == VAR_3) {

       if (FUNC_3(VAR_14, &VAR_18, &VAR_19)) {
        FUNC_6(VAR_10, VAR_22, VAR_23, VAR_21, VAR_16, VAR_17, VAR_18);

       } else
        return VAR_8;
      } else if (VAR_13->odmpriv.PhyRegPgValueType == VAR_2) {
       u32 VAR_28 = 0;
       u8 VAR_29 = 0, VAR_30 = 0;

       if (FUNC_2(VAR_14, &VAR_29, &VAR_30, &VAR_19))
        VAR_14 += VAR_19;
       else
        return VAR_8;

       VAR_29 *= 2;
       if (VAR_30 == 5)
        VAR_29 += 1;
       VAR_28 |= (((VAR_29 / 10) << 4) + (VAR_29 % 10));


       if (FUNC_2(VAR_14, &VAR_29, &VAR_30, &VAR_19))
        VAR_14 += VAR_19;
       else
        return VAR_8;

       VAR_29 *= 2;
       if (VAR_30 == 5)
        VAR_29 += 1;
       VAR_28 <<= 8;
       VAR_28 |= (((VAR_29 / 10) << 4) + (VAR_29 % 10));


       if (FUNC_2(VAR_14, &VAR_29, &VAR_30, &VAR_19))
        VAR_14 += VAR_19;
       else
        return VAR_8;

       VAR_29 *= 2;
       if (VAR_30 == 5)
        VAR_29 += 1;
       VAR_28 <<= 8;
       VAR_28 |= (((VAR_29 / 10) << 4) + (VAR_29 % 10));


       if (FUNC_2(VAR_14, &VAR_29, &VAR_30, &VAR_19))
        VAR_14 += VAR_19;
       else
        return VAR_8;

       VAR_29 *= 2;
       if (VAR_30 == 5)
        VAR_29 += 1;
       VAR_28 <<= 8;
       VAR_28 |= (((VAR_29 / 10) << 4) + (VAR_29 % 10));

       FUNC_6(VAR_10, VAR_22, VAR_23, VAR_21, VAR_16, VAR_17, VAR_28);


      }
     }
    }
   }
  }
 }

 return VAR_12;
}

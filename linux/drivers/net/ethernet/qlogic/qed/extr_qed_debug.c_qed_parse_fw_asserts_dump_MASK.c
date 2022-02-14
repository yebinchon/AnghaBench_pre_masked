
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (scalar_t__*,scalar_t__,char*,scalar_t__*) ;
 int FUNC_2 (scalar_t__*,char const**,char const**,scalar_t__*) ;
 int FUNC_3 (scalar_t__*,char const**,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ,char*,scalar_t__,...) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static enum dbg_status FUNC_6(u32 *VAR_2,
       char *VAR_3,
       u32 *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7, VAR_8 = 0;
 const char *VAR_9, *VAR_10, *VAR_11;
 bool VAR_12 = 0;

 *VAR_4 = 0;


 VAR_2 += FUNC_3(VAR_2,
      &VAR_11, &VAR_5);
 if (FUNC_5(VAR_11, "global_params"))
  return VAR_0;


 VAR_2 += FUNC_1(VAR_2,
          VAR_5,
          VAR_3, &VAR_8);

 while (!VAR_12) {
  VAR_2 += FUNC_3(VAR_2,
       &VAR_11,
       &VAR_5);
  if (!FUNC_5(VAR_11, "fw_asserts")) {

   const char *VAR_13 = ((void*)0);
   u32 VAR_14 = 0;

   for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
    VAR_2 += FUNC_2(VAR_2,
          &VAR_9,
          &VAR_10,
          &VAR_6);
    if (!FUNC_5(VAR_9, "storm"))
     VAR_13 = VAR_10;
    else if (!FUNC_5(VAR_9, "size"))
     VAR_14 = VAR_6;
    else
     return
         VAR_0;
   }

   if (!VAR_13 || !VAR_14)
    return VAR_0;


   VAR_8 +=
       FUNC_4(FUNC_0(VAR_3,
          VAR_8),
        "\n%sSTORM_ASSERT: size=%d\n",
        VAR_13, VAR_14);
   for (VAR_7 = 0; VAR_7 < VAR_14; VAR_7++, VAR_2++)
    VAR_8 +=
        FUNC_4(FUNC_0(VAR_3,
           VAR_8),
         "%08x\n", *VAR_2);
  } else if (!FUNC_5(VAR_11, "last")) {
   VAR_12 = 1;
  } else {
   return VAR_0;
  }
 }


 *VAR_4 = VAR_8 + 1;

 return VAR_1;
}

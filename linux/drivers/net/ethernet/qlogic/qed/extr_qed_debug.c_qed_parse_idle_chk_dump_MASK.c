
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
struct TYPE_2__ {int ptr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int*,int*,int,int,char*,int*,int*) ;
 int FUNC_2 (int*,int,char*,int*) ;
 int FUNC_3 (int*,char const**,char const**,int*) ;
 int FUNC_4 (int*,char const**,int*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static enum dbg_status FUNC_7(u32 *VAR_6,
            u32 VAR_7,
            char *VAR_8,
            u32 *VAR_9,
            u32 *VAR_10,
            u32 *VAR_11)
{
 const char *VAR_12, *VAR_13, *VAR_14;
 u32 *VAR_15 = VAR_6 + VAR_7;
 u32 VAR_16 = 0, VAR_17;


 u32 VAR_18 = 0;

 *VAR_9 = 0;
 *VAR_10 = 0;
 *VAR_11 = 0;

 if (!VAR_5[VAR_1].ptr ||
     !VAR_5[VAR_0].ptr)
  return VAR_2;


 VAR_6 += FUNC_4(VAR_6,
      &VAR_12, &VAR_16);
 if (FUNC_6(VAR_12, "global_params"))
  return VAR_3;


 VAR_6 += FUNC_2(VAR_6,
          VAR_16,
          VAR_8, &VAR_18);


 VAR_6 += FUNC_4(VAR_6,
      &VAR_12, &VAR_16);
 if (FUNC_6(VAR_12, "idle_chk") || VAR_16 != 1)
  return VAR_3;
 VAR_6 += FUNC_3(VAR_6,
       &VAR_13, &VAR_14, &VAR_17);
 if (FUNC_6(VAR_13, "num_rules"))
  return VAR_3;

 if (VAR_17) {
  u32 VAR_19;


  VAR_18 +=
      FUNC_5(FUNC_0(VAR_8,
         VAR_18),
       "FW_IDLE_CHECK:\n");
  VAR_19 =
   FUNC_1(VAR_6,
            VAR_15,
            VAR_17,
            1,
            VAR_8 ?
            VAR_8 +
            VAR_18 :
            ((void*)0),
            VAR_10,
            VAR_11);
  VAR_18 += VAR_19;
  if (!VAR_19)
   return VAR_3;


  VAR_18 +=
      FUNC_5(FUNC_0(VAR_8,
         VAR_18),
       "\nLSI_IDLE_CHECK:\n");
  VAR_19 =
   FUNC_1(VAR_6,
            VAR_15,
            VAR_17,
            0,
            VAR_8 ?
            VAR_8 +
            VAR_18 :
            ((void*)0),
            VAR_10,
            VAR_11);
  VAR_18 += VAR_19;
  if (!VAR_19)
   return VAR_3;
 }


 if (*VAR_10)
  VAR_18 +=
      FUNC_5(FUNC_0(VAR_8,
         VAR_18),
       "\nIdle Check failed!!! (with %d errors and %d warnings)\n",
       *VAR_10, *VAR_11);
 else if (*VAR_11)
  VAR_18 +=
      FUNC_5(FUNC_0(VAR_8,
         VAR_18),
       "\nIdle Check completed successfully (with %d warnings)\n",
       *VAR_11);
 else
  VAR_18 +=
      FUNC_5(FUNC_0(VAR_8,
         VAR_18),
       "\nIdle Check completed successfully\n");


 *VAR_9 = VAR_18 + 1;

 return VAR_4;
}

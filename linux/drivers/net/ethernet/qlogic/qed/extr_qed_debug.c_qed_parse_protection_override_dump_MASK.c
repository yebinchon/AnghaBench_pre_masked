
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct protection_override_element {int data; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ,int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int*,int,char*,int*) ;
 int FUNC_3 (int*,char const**,char const**,int*) ;
 int FUNC_4 (int*,char const**,int*) ;
 char** VAR_10 ;
 int FUNC_5 (int ,char*,int,...) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static enum dbg_status
FUNC_7(u32 *VAR_11,
       char *VAR_12,
       u32 *VAR_13)
{
 const char *VAR_14, *VAR_15, *VAR_16;
 u32 VAR_17, VAR_18, VAR_19;
 struct protection_override_element *VAR_20;
 u32 VAR_21 = 0;
 u8 VAR_22;


 VAR_11 += FUNC_4(VAR_11,
      &VAR_14, &VAR_18);
 if (FUNC_6(VAR_14, "global_params"))
  return VAR_1;


 VAR_11 += FUNC_2(VAR_11,
          VAR_18,
          VAR_12, &VAR_21);


 VAR_11 += FUNC_4(VAR_11,
      &VAR_14, &VAR_18);
 if (FUNC_6(VAR_14, "protection_override_data"))
  return VAR_1;
 VAR_11 += FUNC_3(VAR_11,
       &VAR_15, &VAR_16, &VAR_17);
 if (FUNC_6(VAR_15, "size"))
  return VAR_1;
 if (VAR_17 % VAR_4)
  return VAR_1;
 VAR_19 = VAR_17 / VAR_4;
 VAR_20 = (struct protection_override_element *)VAR_11;


 for (VAR_22 = 0; VAR_22 < VAR_19; VAR_22++) {
  u32 VAR_23 = FUNC_0(VAR_20[VAR_22].data,
     VAR_2) *
         VAR_3;

  VAR_21 +=
      FUNC_5(FUNC_1(VAR_12,
         VAR_21),
       "window %2d, address: 0x%07x, size: %7d regs, read: %d, write: %d, read protection: %-12s, write protection: %-12s\n",
       VAR_22, VAR_23,
       (u32)FUNC_0(VAR_20[VAR_22].data,
          VAR_7),
       (u32)FUNC_0(VAR_20[VAR_22].data,
          VAR_5),
       (u32)FUNC_0(VAR_20[VAR_22].data,
          VAR_8),
       VAR_10[FUNC_0(VAR_20[VAR_22].data,
    VAR_6)],
       VAR_10[FUNC_0(VAR_20[VAR_22].data,
    VAR_9)]);
 }

 VAR_21 += FUNC_5(FUNC_1(VAR_12,
        VAR_21),
      "protection override contained %d elements",
      VAR_19);


 *VAR_13 = VAR_21 + 1;

 return VAR_0;
}

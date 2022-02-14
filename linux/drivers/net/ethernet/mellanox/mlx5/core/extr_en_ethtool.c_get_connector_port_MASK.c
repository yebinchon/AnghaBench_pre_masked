
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (int ) ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t* VAR_16 ;

__attribute__((used)) static u8 FUNC_1(u32 VAR_17, u8 VAR_18)
{
 if (VAR_18 && VAR_18 < VAR_11)
  return VAR_16[VAR_18];

 if (VAR_17 &
     (FUNC_0(VAR_7) |
      FUNC_0(VAR_10) |
      FUNC_0(VAR_3) |
      FUNC_0(VAR_0))) {
  return VAR_13;
 }

 if (VAR_17 &
     (FUNC_0(VAR_8) |
      FUNC_0(VAR_4) |
      FUNC_0(VAR_1))) {
  return VAR_12;
 }

 if (VAR_17 &
     (FUNC_0(VAR_6) |
      FUNC_0(VAR_5) |
      FUNC_0(VAR_9) |
      FUNC_0(VAR_2))) {
  return VAR_14;
 }

 return VAR_15;
}

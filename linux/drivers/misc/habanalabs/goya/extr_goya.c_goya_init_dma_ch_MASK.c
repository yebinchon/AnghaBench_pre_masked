
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct hl_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct hl_device *VAR_12, int VAR_13)
{
 u32 VAR_14, VAR_15;
 u64 VAR_16;
 u32 VAR_17 = VAR_13 * (VAR_8 - VAR_2);

 VAR_14 =
  FUNC_1(VAR_0 + VAR_9);
 VAR_15 =
  FUNC_2(VAR_0 + VAR_9);

 FUNC_0(VAR_4 + VAR_17, VAR_14);
 FUNC_0(VAR_3 + VAR_17, VAR_15);
 FUNC_0(VAR_5 + VAR_17,
   VAR_1 + VAR_13);

 if (VAR_13)
  VAR_16 = VAR_0 + VAR_10 +
    (VAR_13 - 1) * 4;
 else
  VAR_16 = VAR_0 + VAR_11;

 FUNC_0(VAR_6 + VAR_17, FUNC_2(VAR_16));
 FUNC_0(VAR_7 + VAR_17, 0x80000001);
}

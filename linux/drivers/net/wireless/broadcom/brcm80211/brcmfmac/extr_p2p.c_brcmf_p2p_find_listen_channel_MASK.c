
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ s32 ;
typedef int channel_ie ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__ const*,int ,int ,scalar_t__*,int) ;

__attribute__((used)) static s32 FUNC_2(const u8 *VAR_6, u32 VAR_7)
{
 u8 VAR_8[5];
 s32 VAR_9;
 s32 VAR_10;

 VAR_10 = FUNC_1(VAR_6, VAR_7,
        VAR_1,
        VAR_8, sizeof(VAR_8));
 if (VAR_10 < 0)
  return VAR_10;



 VAR_9 = (s32)VAR_8[3 + 1];

 if (VAR_9 == VAR_3 ||
     VAR_9 == VAR_4 ||
     VAR_9 == VAR_5) {
  FUNC_0(VAR_2, "Found my Listen Channel %d\n", VAR_9);
  return VAR_9;
 }

 return -VAR_0;
}

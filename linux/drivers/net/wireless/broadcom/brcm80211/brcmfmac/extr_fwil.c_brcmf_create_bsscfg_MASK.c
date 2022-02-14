
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef char s8 ;
typedef scalar_t__ s32 ;
typedef int bsscfgidx_le ;
typedef char __le32 ;


 scalar_t__ FUNC_0 (char*,char*,scalar_t__,char*,scalar_t__) ;
 int FUNC_1 (char*) ;
 char FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static u32
FUNC_5(s32 VAR_0, char *VAR_1, char *VAR_2, u32 VAR_3,
      char *VAR_4, u32 VAR_5)
{
 const s8 *VAR_6 = "bsscfg:";
 s8 *VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 __le32 VAR_11;

 if (VAR_0 == 0)
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 VAR_8 = FUNC_4(VAR_6);
 VAR_9 = FUNC_4(VAR_1) + 1;
 VAR_10 = VAR_8 + VAR_9 + sizeof(VAR_11) + VAR_3;

 if (VAR_5 < VAR_10) {
  FUNC_1("buffer is too short\n");
  return 0;
 }

 VAR_7 = VAR_4;


 FUNC_3(VAR_7, VAR_6, VAR_8);
 VAR_7 += VAR_8;


 FUNC_3(VAR_7, VAR_1, VAR_9);
 VAR_7 += VAR_9;


 VAR_11 = FUNC_2(VAR_0);
 FUNC_3(VAR_7, &VAR_11, sizeof(VAR_11));
 VAR_7 += sizeof(VAR_11);


 if (VAR_3)
  FUNC_3(VAR_7, VAR_2, VAR_3);

 return VAR_10;
}

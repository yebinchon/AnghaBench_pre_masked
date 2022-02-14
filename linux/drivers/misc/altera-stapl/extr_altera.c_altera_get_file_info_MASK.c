
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef long s32 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_1,
     s32 VAR_2,
     int *VAR_3,
     int *VAR_4,
     int *VAR_5)
{
 int VAR_6 = -VAR_0;
 u32 VAR_7 = 0;
 int VAR_8 = 0;

 if (VAR_2 <= 52L)
  return VAR_6;

 VAR_7 = FUNC_0(&VAR_1[0]);

 if ((VAR_7 == 0x4A414D00L) || (VAR_7 == 0x4A414D01L)) {
  VAR_6 = 0;

  VAR_8 = (VAR_7 & 1L);
  *VAR_3 = VAR_8 + 1;

  if (VAR_8 > 0) {
   *VAR_4 = FUNC_0(&VAR_1[48]);
   *VAR_5 = FUNC_0(&VAR_1[52]);
  }
 }

 return VAR_6;
}

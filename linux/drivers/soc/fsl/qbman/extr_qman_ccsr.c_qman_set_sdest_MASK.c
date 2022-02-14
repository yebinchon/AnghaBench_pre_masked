
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef int u16 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int) ;
 int VAR_3 ;

void FUNC_4(u16 VAR_4, unsigned int VAR_5)
{
 int VAR_6 = VAR_4 - VAR_2;
 u32 VAR_7, VAR_8;

 if ((VAR_3 & 0xFF00) >= VAR_1) {
  VAR_7 = FUNC_2(FUNC_1(VAR_6));

  VAR_5 /= 2;
  VAR_8 = (VAR_7 & (~VAR_0)) | (VAR_5 << 16);
  FUNC_3(FUNC_1(VAR_6), VAR_8);
 } else {
  VAR_7 = FUNC_2(FUNC_0(VAR_6));
  VAR_8 = (VAR_7 & (~VAR_0)) | (VAR_5 << 16);
  FUNC_3(FUNC_0(VAR_6), VAR_8);
 }
}

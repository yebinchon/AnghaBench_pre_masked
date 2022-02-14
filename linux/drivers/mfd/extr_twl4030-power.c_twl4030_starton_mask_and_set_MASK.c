
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int regs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int FUNC_3(u8 VAR_7, u8 VAR_8)
{
 u8 VAR_9[3] = { VAR_0,
         VAR_1,
         VAR_2, };
 u8 VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = FUNC_2(VAR_6, VAR_3,
          VAR_5);
 if (VAR_12)
  goto relock;
 VAR_12 = FUNC_2(VAR_6,
          VAR_4,
          VAR_5);
 if (VAR_12)
  goto relock;

 for (VAR_11 = 0; VAR_11 < sizeof(VAR_9); VAR_11++) {
  VAR_12 = FUNC_1(VAR_6,
          &VAR_10, VAR_9[VAR_11]);
  if (VAR_12)
   break;
  VAR_10 = (~VAR_7 & VAR_10) | (VAR_7 & VAR_8);
  VAR_12 = FUNC_2(VAR_6,
           VAR_10, VAR_9[VAR_11]);
  if (VAR_12)
   break;
 }

 if (VAR_12)
  FUNC_0("TWL4030 Register access failed: %i\n", VAR_12);

relock:
 return FUNC_2(VAR_6, 0,
    VAR_5);
}

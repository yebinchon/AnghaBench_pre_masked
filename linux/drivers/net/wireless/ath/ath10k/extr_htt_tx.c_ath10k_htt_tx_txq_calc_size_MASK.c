
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static u8 FUNC_2(size_t VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_3 = 0;
 VAR_4 = VAR_2 >> 7;

 while (VAR_4 >= 64 && VAR_3 < 4) {
  VAR_4 >>= 3;
  VAR_3++;
 }

 if (VAR_3 == 4)
  return 0xff;

 if (VAR_2 > 0)
  VAR_4 = FUNC_1(1, VAR_4);

 return FUNC_0(VAR_3, VAR_0) |
        FUNC_0(VAR_4, VAR_1);
}

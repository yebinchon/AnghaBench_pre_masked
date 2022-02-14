
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(void)
{
 if (VAR_5 < 0) {
  FUNC_2((FUNC_0(VAR_2) & 0xfff0ffff) | 0x000a0000,
                   VAR_2);
  VAR_5 = (FUNC_1(VAR_3) >> 8) & 3;
 }




 if (VAR_5 == VAR_0)
  FUNC_2(3 << 8, VAR_4);
 else if (VAR_5 == VAR_1)
  FUNC_2(1 << 9, VAR_4);
 else
  FUNC_2(0, VAR_4);

 return VAR_5;
}

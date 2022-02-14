
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;







 int FUNC_0 (int*,int ,int,int*,int) ;
 int FUNC_1 (int*,int ,int,int) ;
 int FUNC_2 (int*,int ,int,int) ;
 int FUNC_3 (int*,int ,int,int*,int) ;
 int FUNC_4 (int*,int ,int,int ) ;

int FUNC_5(u8 *VAR_0, u32 VAR_1, u16 VAR_2, u8 *VAR_3, int VAR_4)
{
 u8 VAR_5 = (VAR_2 >> 12) & 0xf;
 int VAR_6 = 0;

 switch (VAR_5) {
 case 131:
  if (VAR_4 >= 1)
   VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, *VAR_3);
  break;

 case 130:
  if (VAR_4 >= 2)
   VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2,
            *((u16 *)VAR_3));
  break;

 case 128:
  if (VAR_4 >= 4)
   VAR_6 = FUNC_4(VAR_0, VAR_1, VAR_2,
           *((u32 *)VAR_3));
  break;

 case 129:
  VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 132:
  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  break;
 }

 return VAR_6;
}

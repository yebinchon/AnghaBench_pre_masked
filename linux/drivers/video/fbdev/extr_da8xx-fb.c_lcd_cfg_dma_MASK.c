
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(int VAR_6, int VAR_7)
{
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_5) & 0x00000001;
 switch (VAR_6) {
 case 1:
  VAR_8 |= FUNC_0(VAR_0);
  break;
 case 2:
  VAR_8 |= FUNC_0(VAR_2);
  break;
 case 4:
  VAR_8 |= FUNC_0(VAR_3);
  break;
 case 8:
  VAR_8 |= FUNC_0(VAR_4);
  break;
 case 16:
 default:
  VAR_8 |= FUNC_0(VAR_1);
  break;
 }

 VAR_8 |= (VAR_7 << 8);

 FUNC_2(VAR_8, VAR_5);

 return 0;
}

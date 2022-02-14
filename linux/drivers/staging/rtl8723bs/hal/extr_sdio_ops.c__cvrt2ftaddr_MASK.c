
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;



 int const VAR_0 ;
 int const VAR_1 ;

 int const VAR_2 ;

 int const VAR_3 ;



 int FUNC_0 (int const) ;

__attribute__((used)) static u32 FUNC_1(const u32 VAR_4, u8 *VAR_5, u16 *VAR_6)
{
 u8 VAR_7;
 u16 VAR_8;
 u32 VAR_9;


 VAR_7 = FUNC_0(VAR_4);
 VAR_8 = 0;

 switch (VAR_7) {
 case 133:
  VAR_8 = VAR_4 & VAR_0;
  break;

 case 130:
 case 128:
 case 129:
  VAR_8 = VAR_4 & VAR_1;
  break;

 case 131:
  VAR_8 = VAR_4 & VAR_3;
  break;

 case 132:
 default:
  VAR_7 = 132;
  VAR_8 = VAR_4 & VAR_2;
  break;
 }
 VAR_9 = (VAR_7 << 13) | VAR_8;

 if (VAR_5)
  *VAR_5 = VAR_7;
 if (VAR_6)
  *VAR_6 = VAR_8;

 return VAR_9;
}

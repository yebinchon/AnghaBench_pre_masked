
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int const*,size_t,int ) ;

__attribute__((used)) static u32 FUNC_2(const u8 *VAR_11, size_t VAR_12,
       u32 VAR_13)
{
 u16 VAR_14 = 0;

 if ((VAR_13 & VAR_9) == 0)
  return VAR_13;

 switch (VAR_13 & VAR_10) {
 case 133:
  VAR_14 = FUNC_1(VAR_11, VAR_12,
         VAR_3);
  break;
 case 134:
  VAR_14 = FUNC_1(VAR_11, VAR_12,
         VAR_2);
  break;
 case 130:
  VAR_14 = FUNC_1(VAR_11, VAR_12,
         VAR_6);
  break;
 case 129:
  VAR_14 = FUNC_1(VAR_11, VAR_12,
         VAR_7);
  break;
 case 128:
  VAR_14 = FUNC_1(VAR_11, VAR_12,
         VAR_8);
  break;
 case 135:
  VAR_14 = FUNC_1(VAR_11, VAR_12,
         VAR_1);
  break;
 case 131:
  VAR_14 = FUNC_1(VAR_11, VAR_12,
         VAR_5);
  break;
 case 132:
  VAR_14 = FUNC_1(VAR_11, VAR_12,
         VAR_4);
  break;
 default:
  FUNC_0(1);
  break;
 }


 return (VAR_13 & VAR_0) + (VAR_14 << 1);
}

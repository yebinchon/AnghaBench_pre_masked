
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_1(u32 *VAR_7,
       u8 *VAR_8,
       u32 VAR_9)
{
 switch (VAR_9) {
 case 10000:
 case 40000:
  *VAR_8 = FUNC_0(VAR_6, VAR_7,
        VAR_2);
  break;
 case 25000:
  *VAR_8 = FUNC_0(VAR_6, VAR_7,
        VAR_3);
  break;
 case 50000:
  *VAR_8 = FUNC_0(VAR_6, VAR_7,
        VAR_4);
  break;
 case 56000:
  *VAR_8 = FUNC_0(VAR_6, VAR_7,
        VAR_5);
  break;
 case 100000:
  *VAR_8 = FUNC_0(VAR_6, VAR_7,
        VAR_1);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}

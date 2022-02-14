
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int,int) ;

int FUNC_9(u32 VAR_3, u64 VAR_4)
{
 switch (FUNC_0(VAR_3)) {
 case 130:
  return FUNC_6(VAR_3, VAR_4);
 case 128:
  return FUNC_8(VAR_3, VAR_1, 24, 4);
 case 132:
  return FUNC_4(VAR_3);
 case 131:
  return FUNC_5(VAR_3, VAR_4);
 case 129:
  return FUNC_7(VAR_3);
 case 136:
  if (VAR_4 < 0x10000)
   return FUNC_8(VAR_3, VAR_2, 1, 1);
  else
   return FUNC_8(VAR_3, VAR_1, 1, 1);
 case 134:
  return FUNC_3(VAR_3);
 case 133:
  return FUNC_1(VAR_3);
 case 135:
  return FUNC_2(VAR_3);
 case 0:
  return FUNC_8(VAR_3, VAR_1, 4, 4);
 default:
  return -VAR_0;
 }
}

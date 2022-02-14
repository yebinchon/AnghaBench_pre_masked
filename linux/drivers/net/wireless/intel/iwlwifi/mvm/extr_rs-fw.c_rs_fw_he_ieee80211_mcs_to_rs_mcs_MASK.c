
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*,int) ;

__attribute__((used)) static u16 FUNC_2(u16 VAR_3)
{
 switch (VAR_3) {
 case 129:
  return FUNC_0(VAR_1 + 1) - 1;
 case 128:
  return FUNC_0(VAR_2 + 1) - 1;
 case 130:
  return FUNC_0(VAR_0 + 1) - 1;
 case 131:
  return 0;
 }

 FUNC_1(1, "invalid HE MCS %d\n", VAR_3);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;




 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static bool FUNC_6(int VAR_0, int VAR_1)
{
 switch (VAR_0) {
 case 130:
  return FUNC_0(VAR_1) & FUNC_3();
 case 129:
  return FUNC_0(VAR_1) & FUNC_4();
 case 128:
  return FUNC_0(VAR_1) & FUNC_5();
 case 131:
  return FUNC_0(VAR_1) & FUNC_2();
 default:
  FUNC_1(1, "Event arrived for unknown resource type");
  return 0;
 }
}

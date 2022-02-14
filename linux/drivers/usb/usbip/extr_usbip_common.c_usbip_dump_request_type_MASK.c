
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;





 int VAR_0 ;

 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(__u8 VAR_1)
{
 switch (VAR_1 & VAR_0) {
 case 131:
  FUNC_0("DEVICE");
  break;
 case 129:
  FUNC_0("INTERF");
  break;
 case 130:
  FUNC_0("ENDPOI");
  break;
 case 128:
  FUNC_0("OTHER ");
  break;
 default:
  FUNC_0("------");
  break;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_adapter {int bd_number; } ;


 int* VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct e1000_adapter *VAR_4)
{
 int VAR_5 = VAR_4->bd_number;
 if (VAR_3 > VAR_5) {
  FUNC_0("Speed not valid for fiber adapters, parameter "
      "ignored\n");
 }

 if (VAR_2 > VAR_5) {
  FUNC_0("Duplex not valid for fiber adapters, parameter "
      "ignored\n");
 }

 if ((VAR_1 > VAR_5) && (VAR_0[VAR_5] != 0x20)) {
  FUNC_0("AutoNeg other than 1000/Full is not valid for fiber"
      "adapters, parameter ignored\n");
 }
}

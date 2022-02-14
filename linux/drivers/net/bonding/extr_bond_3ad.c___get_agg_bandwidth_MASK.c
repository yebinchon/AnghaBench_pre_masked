
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aggregator {int lag_ports; } ;
 int FUNC_0 (struct aggregator*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct aggregator *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0);
 u32 VAR_2 = 0;

 if (VAR_1) {
  switch (FUNC_1(VAR_0->lag_ports)) {
  case 135:
   VAR_2 = VAR_1;
   break;
  case 137:
   VAR_2 = VAR_1 * 10;
   break;
  case 138:
   VAR_2 = VAR_1 * 100;
   break;
  case 139:
   VAR_2 = VAR_1 * 1000;
   break;
  case 132:
   VAR_2 = VAR_1 * 2500;
   break;
  case 129:
   VAR_2 = VAR_1 * 5000;
   break;
  case 140:
   VAR_2 = VAR_1 * 10000;
   break;
  case 136:
   VAR_2 = VAR_1 * 14000;
   break;
  case 134:
   VAR_2 = VAR_1 * 20000;
   break;
  case 133:
   VAR_2 = VAR_1 * 25000;
   break;
  case 131:
   VAR_2 = VAR_1 * 40000;
   break;
  case 130:
   VAR_2 = VAR_1 * 50000;
   break;
  case 128:
   VAR_2 = VAR_1 * 56000;
   break;
  case 141:
   VAR_2 = VAR_1 * 100000;
   break;
  default:
   VAR_2 = 0;
  }
 }
 return VAR_2;
}

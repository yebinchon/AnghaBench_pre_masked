
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int vlan_pri_map; } ;
struct TYPE_4__ {TYPE_1__ tp; } ;
struct adapter {TYPE_2__ params; } ;





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
int FUNC_0(const struct adapter *VAR_10, int VAR_11)
{
 unsigned int VAR_12 = VAR_10->params.tp.vlan_pri_map;
 unsigned int VAR_13;
 int VAR_14;

 if ((VAR_12 & VAR_11) == 0)
  return -1;

 for (VAR_13 = 1, VAR_14 = 0; VAR_13 < VAR_11; VAR_13 <<= 1) {
  switch (VAR_12 & VAR_13) {
  case 136:
   VAR_14 += VAR_1;
   break;
  case 132:
   VAR_14 += VAR_5;
   break;
  case 128:
   VAR_14 += VAR_9;
   break;
  case 129:
   VAR_14 += VAR_8;
   break;
  case 130:
   VAR_14 += VAR_7;
   break;
  case 131:
   VAR_14 += VAR_6;
   break;
  case 137:
   VAR_14 += VAR_0;
   break;
  case 134:
   VAR_14 += VAR_3;
   break;
  case 133:
   VAR_14 += VAR_4;
   break;
  case 135:
   VAR_14 += VAR_2;
   break;
  }
 }
 return VAR_14;
}

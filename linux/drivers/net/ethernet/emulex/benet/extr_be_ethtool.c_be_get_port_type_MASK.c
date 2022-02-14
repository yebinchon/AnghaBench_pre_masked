
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int interface_type; int cable_type; } ;
struct be_adapter {TYPE_1__ phy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static u32 FUNC_0(struct be_adapter *VAR_6)
{
 u32 VAR_7;

 switch (VAR_6->phy.interface_type) {
 case 134:
 case 133:
 case 129:
  VAR_7 = VAR_3;
  break;
 case 130:
  if (VAR_6->phy.cable_type & VAR_5)
   VAR_7 = VAR_0;
  else
   VAR_7 = VAR_1;
  break;
 case 132:
  if (VAR_6->phy.cable_type & VAR_4)
   VAR_7 = VAR_0;
  else
   VAR_7 = VAR_1;
  break;
 case 128:
 case 131:
  VAR_7 = VAR_1;
  break;
 case 135:
  VAR_7 = VAR_3;
  break;
 default:
  VAR_7 = VAR_2;
 }

 return VAR_7;
}

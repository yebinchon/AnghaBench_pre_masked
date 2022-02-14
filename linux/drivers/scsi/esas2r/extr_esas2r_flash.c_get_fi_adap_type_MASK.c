
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct esas2r_adapter {TYPE_1__* pcid; } ;
struct TYPE_2__ {int device; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u8 FUNC_0(struct esas2r_adapter *VAR_3)
{
 u8 VAR_4;


 switch (VAR_3->pcid->device) {
 case 132:
  VAR_4 = VAR_1;
  break;

 case 131:
 case 129:
 case 128:
 case 130:
  VAR_4 = VAR_0;
  break;

 default:
  VAR_4 = VAR_2;
  break;
 }

 return VAR_4;
}

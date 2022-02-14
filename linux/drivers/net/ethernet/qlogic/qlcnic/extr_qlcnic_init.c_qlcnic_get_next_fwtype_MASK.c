
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_2__ {int fw_type; } ;


 int VAR_0 ;



__attribute__((used)) static void
FUNC_0(struct qlcnic_adapter *VAR_1)
{
 u8 VAR_2;

 switch (VAR_1->ahw->fw_type) {
 case 128:
  VAR_2 = 129;
  break;

 case 129:
 default:
  VAR_2 = VAR_0;
  break;
 }

 VAR_1->ahw->fw_type = VAR_2;
}

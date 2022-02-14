
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {int interface_type; void* cable_type; } ;
struct be_adapter {TYPE_1__ phy; } ;


 int VAR_0 ;


 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct be_adapter*,int ,void**) ;

int FUNC_1(struct be_adapter *VAR_4)
{
 u8 VAR_5[VAR_0];
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_3,
         VAR_5);
 if (!VAR_6) {
  switch (VAR_4->phy.interface_type) {
  case 129:
   VAR_4->phy.cable_type =
    VAR_5[VAR_1];
   break;
  case 128:
   VAR_4->phy.cable_type =
    VAR_5[VAR_2];
   break;
  default:
   VAR_4->phy.cable_type = 0;
   break;
  }
 }
 return VAR_6;
}

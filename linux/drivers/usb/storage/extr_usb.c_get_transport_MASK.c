
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int protocol; char* transport_name; int max_lun; void* transport_reset; void* transport; } ;





 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static void FUNC_0(struct us_data *VAR_4)
{
 switch (VAR_4->protocol) {
 case 129:
  VAR_4->transport_name = "Control/Bulk";
  VAR_4->transport = VAR_3;
  VAR_4->transport_reset = VAR_2;
  VAR_4->max_lun = 7;
  break;

 case 128:
  VAR_4->transport_name = "Control/Bulk/Interrupt";
  VAR_4->transport = VAR_3;
  VAR_4->transport_reset = VAR_2;
  VAR_4->max_lun = 7;
  break;

 case 130:
  VAR_4->transport_name = "Bulk";
  VAR_4->transport = VAR_1;
  VAR_4->transport_reset = VAR_0;
  break;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_raid_error_info {int data_out_result; int status; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct pqi_raid_error_info
      *VAR_4)
{
 int VAR_5 = -VAR_0;

 switch (VAR_4->data_out_result) {
 case 129:
  if (VAR_4->status == VAR_3)
   VAR_5 = 0;
  break;
 case 128:
  if (VAR_4->status == VAR_3 ||
   VAR_4->status == VAR_2)
   VAR_5 = 0;
  break;
 case 130:
  VAR_5 = VAR_1;
  break;
 }

 return VAR_5;
}

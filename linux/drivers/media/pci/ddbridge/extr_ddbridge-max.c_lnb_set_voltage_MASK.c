
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct ddb {TYPE_2__* link; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;
struct TYPE_3__ {int* oldvoltage; int * voltage; } ;
struct TYPE_4__ {TYPE_1__ lnb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct ddb*,size_t,size_t,int ) ;

__attribute__((used)) static int FUNC_1(struct ddb *VAR_4, u32 VAR_5, u32 VAR_6,
      enum fe_sec_voltage VAR_7)
{
 int VAR_8 = 0;

 if (VAR_4->link[VAR_5].lnb.oldvoltage[VAR_6] == VAR_7)
  return 0;
 switch (VAR_7) {
 case 128:
  if (VAR_4->link[VAR_5].lnb.voltage[VAR_6])
   return 0;
  FUNC_0(VAR_4, VAR_5, VAR_6, VAR_3);
  break;
 case 130:
  FUNC_0(VAR_4, VAR_5, VAR_6, VAR_2);
  break;
 case 129:
  FUNC_0(VAR_4, VAR_5, VAR_6, VAR_1);
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }
 VAR_4->link[VAR_5].lnb.oldvoltage[VAR_6] = VAR_7;
 return VAR_8;
}

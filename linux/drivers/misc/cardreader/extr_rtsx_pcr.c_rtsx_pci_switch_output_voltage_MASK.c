
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtsx_pcr {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* switch_output_voltage ) (struct rtsx_pcr*,int ) ;} ;


 int FUNC_0 (struct rtsx_pcr*,int ) ;

int FUNC_1(struct rtsx_pcr *VAR_0, u8 VAR_1)
{
 if (VAR_0->ops->switch_output_voltage)
  return VAR_0->ops->switch_output_voltage(VAR_0, VAR_1);

 return 0;
}

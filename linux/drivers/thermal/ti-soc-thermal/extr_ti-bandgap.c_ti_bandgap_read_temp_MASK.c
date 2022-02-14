
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ti_bandgap {TYPE_2__* conf; } ;
struct temp_sensor_registers {int bgap_dtemp_mask; int ctrl_dtemp_1; int temp_sensor_ctrl; } ;
struct TYPE_4__ {TYPE_1__* sensors; } ;
struct TYPE_3__ {struct temp_sensor_registers* registers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ti_bandgap*,int,int ,int ,int) ;
 scalar_t__ FUNC_1 (struct ti_bandgap*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ti_bandgap*,int ) ;
 int FUNC_3 (struct ti_bandgap*,int ) ;

__attribute__((used)) static u32 FUNC_4(struct ti_bandgap *VAR_4, int VAR_5)
{
 struct temp_sensor_registers *VAR_6;
 u32 VAR_7, VAR_8;

 VAR_6 = VAR_4->conf->sensors[VAR_5].registers;
 VAR_8 = VAR_6->temp_sensor_ctrl;

 if (FUNC_1(VAR_4, VAR_1)) {
  FUNC_0(VAR_4, VAR_5, VAR_2, VAR_3, 1);




  VAR_8 = VAR_6->ctrl_dtemp_1;
 }


 if (FUNC_1(VAR_4, VAR_0))
  VAR_7 = FUNC_3(VAR_4, VAR_8);
 else
  VAR_7 = FUNC_2(VAR_4, VAR_8);

 VAR_7 &= VAR_6->bgap_dtemp_mask;

 if (FUNC_1(VAR_4, VAR_1))
  FUNC_0(VAR_4, VAR_5, VAR_2, VAR_3, 0);

 return VAR_7;
}

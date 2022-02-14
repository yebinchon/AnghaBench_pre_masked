
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ti_bandgap {TYPE_1__* conf; } ;
struct temp_sensor_registers {int bgap_eocz_mask; int temp_sensor_ctrl; } ;
struct TYPE_4__ {struct temp_sensor_registers* registers; } ;
struct TYPE_3__ {TYPE_2__* sensors; } ;


 int VAR_0 ;
 int FUNC_0 (struct ti_bandgap*,int,int ,int ,int) ;
 scalar_t__ FUNC_1 (struct ti_bandgap*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ti_bandgap*,int ) ;

__attribute__((used)) static int
FUNC_3(struct ti_bandgap *VAR_5, int VAR_6)
{
 u32 VAR_7 = 1000;
 struct temp_sensor_registers *VAR_8;


 if (FUNC_1(VAR_5, VAR_0))
  FUNC_0(VAR_5, VAR_6, VAR_1, VAR_3, 0);


 FUNC_0(VAR_5, VAR_6, VAR_4, VAR_2, 1);


 VAR_8 = VAR_5->conf->sensors[VAR_6].registers;

 while (--VAR_7) {
  if (FUNC_2(VAR_5, VAR_8->temp_sensor_ctrl) &
      VAR_8->bgap_eocz_mask)
   break;
 }


 FUNC_0(VAR_5, VAR_6, VAR_4, VAR_2, 0);


 VAR_7 = 1000;
 while (--VAR_7) {
  if (!(FUNC_2(VAR_5, VAR_8->temp_sensor_ctrl) &
        VAR_8->bgap_eocz_mask))
   break;
 }

 return 0;
}

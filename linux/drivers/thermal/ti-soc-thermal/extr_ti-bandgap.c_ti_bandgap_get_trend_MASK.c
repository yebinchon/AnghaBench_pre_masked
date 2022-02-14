
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ti_bandgap {int lock; int dev; TYPE_2__* conf; } ;
struct temp_sensor_registers {int bgap_dtemp_mask; int ctrl_dtemp_2; int ctrl_dtemp_1; } ;
struct TYPE_4__ {TYPE_1__* sensors; } ;
struct TYPE_3__ {struct temp_sensor_registers* registers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ti_bandgap*,int,int ,int ,int) ;
 int FUNC_1 (struct ti_bandgap*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ti_bandgap*,int ,int*) ;
 int FUNC_6 (struct ti_bandgap*,int,int*) ;
 int FUNC_7 (struct ti_bandgap*,int ) ;
 int FUNC_8 (struct ti_bandgap*,int) ;

int FUNC_9(struct ti_bandgap *VAR_5, int VAR_6, int *VAR_7)
{
 struct temp_sensor_registers *VAR_8;
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16 = 0;

 VAR_16 = FUNC_8(VAR_5, VAR_6);
 if (VAR_16)
  goto exit;

 if (!FUNC_1(VAR_5, VAR_2) ||
     !FUNC_1(VAR_5, VAR_1)) {
  VAR_16 = -VAR_0;
  goto exit;
 }

 FUNC_3(&VAR_5->lock);

 VAR_8 = VAR_5->conf->sensors[VAR_6].registers;


 FUNC_0(VAR_5, VAR_6, VAR_3, VAR_4, 1);
 VAR_11 = VAR_8->ctrl_dtemp_1;
 VAR_12 = VAR_8->ctrl_dtemp_2;


 VAR_9 = FUNC_7(VAR_5, VAR_11);
 VAR_9 &= VAR_8->bgap_dtemp_mask;

 VAR_10 = FUNC_7(VAR_5, VAR_12);
 VAR_10 &= VAR_8->bgap_dtemp_mask;


 VAR_16 = FUNC_5(VAR_5, VAR_9, &VAR_13);
 if (VAR_16)
  goto unfreeze;

 VAR_16 = FUNC_5(VAR_5, VAR_10, &VAR_14);
 if (VAR_16)
  goto unfreeze;


 VAR_16 = FUNC_6(VAR_5, VAR_6, &VAR_15);
 if (VAR_16)
  goto unfreeze;


 if (VAR_15 == 0)
  VAR_15 = 1;

 *VAR_7 = (VAR_13 - VAR_14) / VAR_15;

 FUNC_2(VAR_5->dev, "The temperatures are t1 = %d and t2 = %d and trend =%d\n",
  VAR_13, VAR_14, *VAR_7);

unfreeze:
 FUNC_0(VAR_5, VAR_6, VAR_3, VAR_4, 0);
 FUNC_4(&VAR_5->lock);
exit:
 return VAR_16;
}

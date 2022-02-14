
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_thermal_data {int sensor_id; int thermal_wq; int pcb_tz; int mode; struct ti_bandgap* bgp; } ;
struct ti_bandgap {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 struct ti_thermal_data* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;

__attribute__((used)) static struct ti_thermal_data
*FUNC_4(struct ti_bandgap *VAR_3, int VAR_4)
{
 struct ti_thermal_data *VAR_5;

 VAR_5 = FUNC_2(VAR_3->dev, sizeof(*VAR_5), VAR_0);
 if (!VAR_5) {
  FUNC_1(VAR_3->dev, "kzalloc fail\n");
  return ((void*)0);
 }
 VAR_5->sensor_id = VAR_4;
 VAR_5->bgp = VAR_3;
 VAR_5->mode = VAR_1;

 VAR_5->pcb_tz = FUNC_3("pcb");
 FUNC_0(&VAR_5->thermal_wq, VAR_2);

 return VAR_5;
}

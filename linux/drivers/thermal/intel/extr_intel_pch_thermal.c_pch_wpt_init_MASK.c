
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pch_thermal_device {int bios_enabled; int crt_trip_id; int crt_temp; int hot_trip_id; int hot_temp; scalar_t__ hw_base; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pch_thermal_device*,int*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct pch_thermal_device *VAR_6, int *VAR_7)
{
 u8 VAR_8;
 u16 VAR_9;

 *VAR_7 = 0;


 if (VAR_4 & FUNC_2(VAR_6->hw_base + VAR_3)) {
  VAR_6->bios_enabled = 1;
  goto read_trips;
 }

 VAR_8 = FUNC_2(VAR_6->hw_base + VAR_3);




 if (VAR_8 & VAR_5) {
  FUNC_0(&VAR_6->pdev->dev, "Sensor can't be enabled\n");
  return -VAR_0;
 }

 FUNC_4(VAR_8|VAR_4, VAR_6->hw_base + VAR_3);
 if (!(VAR_4 & FUNC_2(VAR_6->hw_base + VAR_3))) {
  FUNC_0(&VAR_6->pdev->dev, "Sensor can't be enabled\n");
  return -VAR_0;
 }

read_trips:
 VAR_6->crt_trip_id = -1;
 VAR_9 = FUNC_3(VAR_6->hw_base + VAR_1);
 VAR_9 &= 0x1FF;
 if (VAR_9) {

  VAR_6->crt_temp = VAR_9 * 1000 / 2 - 50000;
  VAR_6->crt_trip_id = 0;
  ++(*VAR_7);
 }

 VAR_6->hot_trip_id = -1;
 VAR_9 = FUNC_3(VAR_6->hw_base + VAR_2);
 VAR_9 &= 0x1FF;
 if (VAR_9) {

  VAR_6->hot_temp = VAR_9 * 1000 / 2 - 50000;
  VAR_6->hot_trip_id = *VAR_7;
  ++(*VAR_7);
 }

 FUNC_1(VAR_6, VAR_7);

 return 0;
}

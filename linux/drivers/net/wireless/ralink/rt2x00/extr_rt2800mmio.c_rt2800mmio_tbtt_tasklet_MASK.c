
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int beacon_int; int flags; scalar_t__ intf_ap_count; struct rt2800_drv_data* drv_data; } ;
struct rt2800_drv_data {int tbtt_tick; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rt2x00_dev*,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*,int ) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

void FUNC_6(unsigned long VAR_5)
{
 struct rt2x00_dev *VAR_6 = (struct rt2x00_dev *)VAR_5;
 struct rt2800_drv_data *VAR_7 = VAR_6->drv_data;
 u32 VAR_8;

 FUNC_2(VAR_6);

 if (VAR_6->intf_ap_count) {






  if (VAR_7->tbtt_tick == (VAR_0 - 2)) {
   VAR_8 = FUNC_3(VAR_6, VAR_1);
   FUNC_1(&VAR_8, VAR_2,
        (VAR_6->beacon_int * 16) - 1);
   FUNC_4(VAR_6, VAR_1, VAR_8);
  } else if (VAR_7->tbtt_tick == (VAR_0 - 1)) {
   VAR_8 = FUNC_3(VAR_6, VAR_1);
   FUNC_1(&VAR_8, VAR_2,
        (VAR_6->beacon_int * 16));
   FUNC_4(VAR_6, VAR_1, VAR_8);
  }
  VAR_7->tbtt_tick++;
  VAR_7->tbtt_tick %= VAR_0;
 }

 if (FUNC_5(VAR_3, &VAR_6->flags))
  FUNC_0(VAR_6, VAR_4);
}

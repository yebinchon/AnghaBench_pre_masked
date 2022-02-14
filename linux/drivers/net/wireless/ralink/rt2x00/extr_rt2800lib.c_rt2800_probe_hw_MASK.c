
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int watchdog_disabled; int watchdog_interval; } ;
struct rt2x00_dev {int rssi_offset; TYPE_1__ link; int cap_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 int FUNC_4 (struct rt2x00_dev*) ;
 int FUNC_5 (struct rt2x00_dev*) ;
 int FUNC_6 (struct rt2x00_dev*,int ) ;
 int FUNC_7 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_8 (struct rt2x00_dev*) ;
 int FUNC_9 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_10 (struct rt2x00_dev*) ;
 int FUNC_11 (int *,int ,int) ;

int FUNC_12(struct rt2x00_dev *VAR_17)
{
 int VAR_18;
 u32 VAR_19;

 VAR_18 = FUNC_5(VAR_17);
 if (VAR_18)
  return VAR_18;




 VAR_18 = FUNC_8(VAR_17);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_3(VAR_17);
 if (VAR_18)
  return VAR_18;





 VAR_19 = FUNC_6(VAR_17, VAR_7);
 FUNC_11(&VAR_19, VAR_8, 1);
 FUNC_7(VAR_17, VAR_7, VAR_19);




 VAR_18 = FUNC_4(VAR_17);
 if (VAR_18)
  return VAR_18;




 FUNC_0(VAR_0, &VAR_17->cap_flags);
 FUNC_0(VAR_1, &VAR_17->cap_flags);
 if (!FUNC_10(VAR_17))
  FUNC_0(VAR_4, &VAR_17->cap_flags);




 if (!FUNC_9(VAR_17))
  FUNC_0(VAR_10, &VAR_17->cap_flags);
 FUNC_0(VAR_12, &VAR_17->cap_flags);
 FUNC_0(VAR_15, &VAR_17->cap_flags);
 if (!FUNC_2(VAR_17))
  FUNC_0(VAR_2, &VAR_17->cap_flags);
 FUNC_0(VAR_3, &VAR_17->cap_flags);
 FUNC_0(VAR_11, &VAR_17->cap_flags);
 if (FUNC_10(VAR_17))
  FUNC_0(VAR_13, &VAR_17->cap_flags);
 else {
  FUNC_0(VAR_9, &VAR_17->cap_flags);
  FUNC_0(VAR_14, &VAR_17->cap_flags);
 }

 if (VAR_16) {
  FUNC_0(VAR_5, &VAR_17->cap_flags);
  VAR_17->link.watchdog_interval = FUNC_1(100);
 } else {
  VAR_17->link.watchdog_disabled = 1;
 }




 VAR_17->rssi_offset = VAR_6;

 return 0;
}

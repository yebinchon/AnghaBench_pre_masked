
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qlcnic_adapter {int drv_tx_rings; int flags; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {char* stat_string; } ;


 int FUNC_0 (char**) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int) ;
 struct qlcnic_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 char** VAR_4 ;
 char** VAR_5 ;
 char** VAR_6 ;
 char** VAR_7 ;
 TYPE_1__* VAR_8 ;
 char** VAR_9 ;
 char** VAR_10 ;
 int FUNC_4 (int *,char*,int,char*) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_11, u32 VAR_12, u8 *VAR_13)
{
 struct qlcnic_adapter *VAR_14 = FUNC_2(VAR_11);
 int VAR_15, VAR_16, VAR_17;

 switch (VAR_12) {
 case 128:
  FUNC_1(VAR_13, *VAR_9,
         VAR_3 * VAR_0);
  break;
 case 129:
  VAR_17 = FUNC_0(VAR_10);
  for (VAR_16 = 0; VAR_16 < VAR_14->drv_tx_rings; VAR_16++) {
   for (VAR_15 = 0; VAR_15 < VAR_17; VAR_15++) {
    FUNC_4(VAR_13, "tx_queue_%d %s", VAR_16,
     VAR_10[VAR_15]);
    VAR_13 += VAR_0;
   }
  }

  for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
   FUNC_1(VAR_13 + VAR_15 * VAR_0,
          VAR_8[VAR_15].stat_string,
          VAR_0);
  }

  if (FUNC_3(VAR_14)) {
   VAR_17 = FUNC_0(VAR_6);
   for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++, VAR_15++)
    FUNC_1(VAR_13 + VAR_15 * VAR_0,
           VAR_6[VAR_16],
           VAR_0);
   VAR_17 = FUNC_0(VAR_4);
   for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++, VAR_15++)
    FUNC_1(VAR_13 + VAR_15 * VAR_0,
           VAR_4[VAR_16],
           VAR_0);
   VAR_17 = FUNC_0(VAR_5);
   for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++, VAR_15++)
    FUNC_1(VAR_13 + VAR_15 * VAR_0,
           VAR_5[VAR_16],
           VAR_0);
   return;
  } else {
   VAR_17 = FUNC_0(VAR_4);
   for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++, VAR_15++)
    FUNC_1(VAR_13 + VAR_15 * VAR_0,
           VAR_4[VAR_16],
           VAR_0);
  }
  if (!(VAR_14->flags & VAR_1))
   return;
  VAR_17 = FUNC_0(VAR_7);
  for (VAR_16 = 0; VAR_16 < VAR_17; VAR_15++, VAR_16++) {
   FUNC_1(VAR_13 + VAR_15 * VAR_0,
          VAR_7[VAR_16],
          VAR_0);
  }
 }
}

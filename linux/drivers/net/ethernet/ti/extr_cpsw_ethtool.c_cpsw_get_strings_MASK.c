
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct cpsw_common {int tx_ch_num; int rx_ch_num; } ;
struct TYPE_2__ {int stat_string; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int **,int ,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 struct cpsw_common* FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_3, u32 VAR_4, u8 *VAR_5)
{
 struct cpsw_common *VAR_6 = FUNC_2(VAR_3);
 u8 *VAR_7 = VAR_5;
 int VAR_8;

 switch (VAR_4) {
 case 128:
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
   FUNC_1(VAR_7, VAR_2[VAR_8].stat_string,
          VAR_1);
   VAR_7 += VAR_1;
  }

  FUNC_0(&VAR_7, VAR_6->rx_ch_num, 1);
  FUNC_0(&VAR_7, VAR_6->tx_ch_num, 0);
  break;
 }
}

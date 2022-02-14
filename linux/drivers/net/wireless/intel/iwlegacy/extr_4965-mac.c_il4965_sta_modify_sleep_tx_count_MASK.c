
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct il_priv {int sta_lock; TYPE_2__* stations; } ;
struct TYPE_4__ {int modify_mask; } ;
struct TYPE_6__ {int mode; int sleep_tx_count; TYPE_1__ sta; int station_flags_msk; int station_flags; } ;
struct TYPE_5__ {TYPE_3__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct il_priv*,TYPE_3__*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void
FUNC_4(struct il_priv *VAR_4, int VAR_5, int VAR_6)
{
 unsigned long VAR_7;

 FUNC_2(&VAR_4->sta_lock, VAR_7);
 VAR_4->stations[VAR_5].sta.station_flags |= VAR_2;
 VAR_4->stations[VAR_5].sta.station_flags_msk = VAR_2;
 VAR_4->stations[VAR_5].sta.sta.modify_mask =
     VAR_3;
 VAR_4->stations[VAR_5].sta.sleep_tx_count = FUNC_0(VAR_6);
 VAR_4->stations[VAR_5].sta.mode = VAR_1;
 FUNC_1(VAR_4, &VAR_4->stations[VAR_5].sta, VAR_0);
 FUNC_3(&VAR_4->sta_lock, VAR_7);

}

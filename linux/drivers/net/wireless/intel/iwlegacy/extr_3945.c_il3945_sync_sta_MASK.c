
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int modify_mask; } ;
struct TYPE_4__ {int mode; int rate_n_flags; TYPE_1__ sta; } ;
struct il_station_entry {TYPE_2__ sta; } ;
struct il_priv {int sta_lock; struct il_station_entry* stations; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct il_priv*,TYPE_2__*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static u8
FUNC_5(struct il_priv *VAR_4, int VAR_5, u16 VAR_6)
{
 unsigned long VAR_7;
 struct il_station_entry *VAR_8;

 if (VAR_5 == VAR_1)
  return VAR_1;

 FUNC_3(&VAR_4->sta_lock, VAR_7);
 VAR_8 = &VAR_4->stations[VAR_5];

 VAR_8->sta.sta.modify_mask = VAR_3;
 VAR_8->sta.rate_n_flags = FUNC_1(VAR_6);
 VAR_8->sta.mode = VAR_2;
 FUNC_2(VAR_4, &VAR_8->sta, VAR_0);
 FUNC_4(&VAR_4->sta_lock, VAR_7);

 FUNC_0("SCALE sync station %d to rate %d\n", VAR_5, VAR_6);
 return VAR_5;
}

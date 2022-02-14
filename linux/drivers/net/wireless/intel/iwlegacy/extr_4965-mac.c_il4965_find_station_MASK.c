
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int bcast_id; int max_stations; } ;
struct il_priv {scalar_t__ iw_mode; int sta_lock; TYPE_4__* stations; int num_stations; TYPE_1__ hw_params; } ;
struct TYPE_6__ {int addr; } ;
struct TYPE_7__ {TYPE_2__ sta; } ;
struct TYPE_8__ {int used; TYPE_3__ sta; } ;


 int FUNC_0 (char*,int const*,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ,int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static u8
FUNC_6(struct il_priv *VAR_5, const u8 *VAR_6)
{
 int VAR_7;
 int VAR_8 = 0;
 int VAR_9 = VAR_0;
 unsigned long VAR_10;

 if (VAR_5->iw_mode == VAR_4)
  VAR_8 = VAR_1;

 if (FUNC_3(VAR_6))
  return VAR_5->hw_params.bcast_id;

 FUNC_4(&VAR_5->sta_lock, VAR_10);
 for (VAR_7 = VAR_8; VAR_7 < VAR_5->hw_params.max_stations; VAR_7++)
  if (VAR_5->stations[VAR_7].used &&
      FUNC_2(VAR_5->stations[VAR_7].sta.sta.addr, VAR_6)) {
   VAR_9 = VAR_7;
   goto out;
  }

 FUNC_0("can not find STA %pM total %d\n", VAR_6, VAR_5->num_stations);

out:





 if (VAR_9 != VAR_0 &&
     (!(VAR_5->stations[VAR_9].used & VAR_2) ||
      ((VAR_5->stations[VAR_9].used & VAR_2) &&
       (VAR_5->stations[VAR_9].used & VAR_3)))) {
  FUNC_1("Requested station info for sta %d before ready.\n",
         VAR_9);
  VAR_9 = VAR_0;
 }
 FUNC_5(&VAR_5->sta_lock, VAR_10);
 return VAR_9;
}

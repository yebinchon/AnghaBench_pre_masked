
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct iwl_priv {TYPE_3__* stations; int sta_lock; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_5__ {TYPE_1__ sta; } ;
struct TYPE_6__ {int used; TYPE_2__ sta; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct iwl_priv*,char*,size_t,int ) ;
 int FUNC_1 (struct iwl_priv*,char*,size_t,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct iwl_priv *VAR_4, u8 VAR_5)
{
 FUNC_2(&VAR_4->sta_lock);

 if (VAR_5 >= VAR_1) {
  FUNC_1(VAR_4, "invalid sta_id %u\n", VAR_5);
  return -VAR_0;
 }
 if (!(VAR_4->stations[VAR_5].used & VAR_2))
  FUNC_1(VAR_4, "ACTIVATE a non DRIVER active station id %u "
   "addr %pM\n",
   VAR_5, VAR_4->stations[VAR_5].sta.sta.addr);

 if (VAR_4->stations[VAR_5].used & VAR_3) {
  FUNC_0(VAR_4,
    "STA id %u addr %pM already present in uCode "
    "(according to driver)\n",
    VAR_5, VAR_4->stations[VAR_5].sta.sta.addr);
 } else {
  VAR_4->stations[VAR_5].used |= VAR_3;
  FUNC_0(VAR_4, "Added STA id %u addr %pM to uCode\n",
    VAR_5, VAR_4->stations[VAR_5].sta.sta.addr);
 }
 return 0;
}

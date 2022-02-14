
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct iwl_priv {scalar_t__ num_stations; int sta_lock; TYPE_1__* stations; int ** tid_data; } ;
struct TYPE_2__ {int used; } ;


 int FUNC_0 (struct iwl_priv*,char*,size_t const*,size_t const) ;
 int FUNC_1 (struct iwl_priv*,char*,size_t const*) ;
 size_t const VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct iwl_priv*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct iwl_priv *VAR_4, const u8 VAR_5,
       const u8 *VAR_6)
{
 u8 VAR_7;

 if (!FUNC_3(VAR_4)) {
  FUNC_1(VAR_4,
   "Unable to remove station %pM, device not ready.\n",
   VAR_6);
  return;
 }

 FUNC_0(VAR_4, "Deactivating STA: %pM (%d)\n", VAR_6, VAR_5);

 if (FUNC_2(VAR_5 == VAR_0))
  return;

 FUNC_5(&VAR_4->sta_lock);

 FUNC_2(!(VAR_4->stations[VAR_5].used & VAR_2));

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  FUNC_4(&VAR_4->tid_data[VAR_5][VAR_7], 0,
   sizeof(VAR_4->tid_data[VAR_5][VAR_7]));

 VAR_4->stations[VAR_5].used &= ~VAR_2;
 VAR_4->stations[VAR_5].used &= ~VAR_3;

 VAR_4->num_stations--;

 if (FUNC_2(VAR_4->num_stations < 0))
  VAR_4->num_stations = 0;

 FUNC_6(&VAR_4->sta_lock);
}

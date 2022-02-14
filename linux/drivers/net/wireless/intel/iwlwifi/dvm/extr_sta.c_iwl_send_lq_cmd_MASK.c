
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iwl_rxon_context {int dummy; } ;
struct iwl_priv {int sta_lock; TYPE_1__* stations; } ;
struct iwl_link_quality_cmd {size_t sta_id; } ;
struct iwl_host_cmd {int flags; int data; int len; int id; } ;
struct TYPE_2__ {int used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_priv*,char*,size_t) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct iwl_priv*,struct iwl_rxon_context*,struct iwl_link_quality_cmd*) ;
 int FUNC_3 (struct iwl_priv*,struct iwl_link_quality_cmd*) ;
 int FUNC_4 (struct iwl_priv*,struct iwl_host_cmd*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct iwl_priv *VAR_6, struct iwl_rxon_context *VAR_7,
      struct iwl_link_quality_cmd *VAR_8, u8 VAR_9, bool VAR_10)
{
 int VAR_11 = 0;
 struct iwl_host_cmd VAR_12 = {
  .id = VAR_5,
  .len = sizeof(struct iwl_link_quality_cmd), 
  .flags = VAR_9,
  .data = VAR_8, 
 };

 if (FUNC_1(VAR_8->sta_id == VAR_2))
  return -VAR_1;


 FUNC_5(&VAR_6->sta_lock);
 if (!(VAR_6->stations[VAR_8->sta_id].used & VAR_3)) {
  FUNC_6(&VAR_6->sta_lock);
  return -VAR_1;
 }
 FUNC_6(&VAR_6->sta_lock);

 FUNC_3(VAR_6, VAR_8);
 if (FUNC_1(VAR_10 && (VAR_12.flags & VAR_0)))
  return -VAR_1;

 if (FUNC_2(VAR_6, VAR_7, VAR_8))
  VAR_11 = FUNC_4(VAR_6, &VAR_12);
 else
  VAR_11 = -VAR_1;

 if (VAR_12.flags & VAR_0)
  return VAR_11;

 if (VAR_10) {
  FUNC_0(VAR_6, "init LQ command complete, "
          "clearing sta addition status for sta %d\n",
          VAR_8->sta_id);
  FUNC_5(&VAR_6->sta_lock);
  VAR_6->stations[VAR_8->sta_id].used &= ~VAR_4;
  FUNC_6(&VAR_6->sta_lock);
 }
 return VAR_11;
}

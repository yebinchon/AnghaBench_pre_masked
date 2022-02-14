
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct il_priv {int sta_lock; TYPE_1__* stations; } ;
struct il_link_quality_cmd {size_t sta_id; } ;
struct il_host_cmd {int len; int flags; struct il_link_quality_cmd* data; int id; } ;
struct TYPE_2__ {int used; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,size_t) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct il_priv*,struct il_link_quality_cmd*) ;
 scalar_t__ FUNC_4 (struct il_priv*,struct il_link_quality_cmd*) ;
 int FUNC_5 (struct il_priv*,struct il_host_cmd*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int
FUNC_8(struct il_priv *VAR_6, struct il_link_quality_cmd *VAR_7,
        u8 VAR_8, bool VAR_9)
{
 int VAR_10 = 0;
 unsigned long VAR_11;

 struct il_host_cmd VAR_12 = {
  .id = VAR_1,
  .len = sizeof(struct il_link_quality_cmd),
  .flags = VAR_8,
  .data = VAR_7,
 };

 if (FUNC_2(VAR_7->sta_id == VAR_3))
  return -VAR_2;

 FUNC_6(&VAR_6->sta_lock, VAR_11);
 if (!(VAR_6->stations[VAR_7->sta_id].used & VAR_4)) {
  FUNC_7(&VAR_6->sta_lock, VAR_11);
  return -VAR_2;
 }
 FUNC_7(&VAR_6->sta_lock, VAR_11);

 FUNC_3(VAR_6, VAR_7);
 FUNC_0(VAR_9 && (VAR_12.flags & VAR_0));

 if (FUNC_4(VAR_6, VAR_7))
  VAR_10 = FUNC_5(VAR_6, &VAR_12);
 else
  VAR_10 = -VAR_2;

 if (VAR_12.flags & VAR_0)
  return VAR_10;

 if (VAR_9) {
  FUNC_1("init LQ command complete,"
         " clearing sta addition status for sta %d\n",
         VAR_7->sta_id);
  FUNC_6(&VAR_6->sta_lock, VAR_11);
  VAR_6->stations[VAR_7->sta_id].used &= ~VAR_5;
  FUNC_7(&VAR_6->sta_lock, VAR_11);
 }
 return VAR_10;
}

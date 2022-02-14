
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int id; int write_ptr; } ;
struct il_tx_queue {scalar_t__ need_update; TYPE_1__ q; } ;
struct il_priv {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct il_priv*,int ) ;
 int FUNC_2 (struct il_priv*,int ,int) ;
 int FUNC_3 (struct il_priv*,int ,int ) ;
 int FUNC_4 (struct il_priv*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;

void
FUNC_6(struct il_priv *VAR_6, struct il_tx_queue *VAR_7)
{
 u32 VAR_8 = 0;
 int VAR_9 = VAR_7->q.id;

 if (VAR_7->need_update == 0)
  return;


 if (FUNC_5(VAR_5, &VAR_6->status)) {



  VAR_8 = FUNC_1(VAR_6, VAR_2);

  if (VAR_8 & VAR_3) {
   FUNC_0("Tx queue %d requesting wakeup," " GP1 = 0x%x\n",
          VAR_9, VAR_8);
   FUNC_3(VAR_6, VAR_0,
       VAR_1);
   return;
  }

  FUNC_4(VAR_6, VAR_4, VAR_7->q.write_ptr | (VAR_9 << 8));






 } else
  FUNC_2(VAR_6, VAR_4, VAR_7->q.write_ptr | (VAR_9 << 8));
 VAR_7->need_update = 0;
}

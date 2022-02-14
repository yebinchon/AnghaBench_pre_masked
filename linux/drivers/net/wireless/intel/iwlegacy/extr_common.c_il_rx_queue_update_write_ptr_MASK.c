
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct il_rx_queue {scalar_t__ need_update; int write_actual; int write; int lock; } ;
struct TYPE_2__ {int rx_wrt_ptr_reg; } ;
struct il_priv {int status; TYPE_1__ hw_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int VAR_4 ;
 int FUNC_1 (struct il_priv*,int ) ;
 int FUNC_2 (struct il_priv*,int ,int ) ;
 int FUNC_3 (struct il_priv*,int,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int *) ;

void
FUNC_7(struct il_priv *VAR_5, struct il_rx_queue *VAR_6)
{
 unsigned long VAR_7;
 u32 VAR_8 = VAR_5->hw_params.rx_wrt_ptr_reg;
 u32 VAR_9;

 FUNC_4(&VAR_6->lock, VAR_7);

 if (VAR_6->need_update == 0)
  goto exit_unlock;


 if (FUNC_6(VAR_4, &VAR_5->status)) {
  VAR_9 = FUNC_1(VAR_5, VAR_2);

  if (VAR_9 & VAR_3) {
   FUNC_0("Rx queue requesting wakeup," " GP1 = 0x%x\n",
          VAR_9);
   FUNC_2(VAR_5, VAR_0,
       VAR_1);
   goto exit_unlock;
  }

  VAR_6->write_actual = (VAR_6->write & ~0x7);
  FUNC_3(VAR_5, VAR_8, VAR_6->write_actual);


 } else {

  VAR_6->write_actual = (VAR_6->write & ~0x7);
  FUNC_3(VAR_5, VAR_8, VAR_6->write_actual);
 }

 VAR_6->need_update = 0;

exit_unlock:
 FUNC_5(&VAR_6->lock, VAR_7);
}

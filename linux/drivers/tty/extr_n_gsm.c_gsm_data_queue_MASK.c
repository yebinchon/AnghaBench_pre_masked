
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gsm_msg {int dummy; } ;
struct gsm_dlci {TYPE_1__* gsm; } ;
struct TYPE_2__ {int tx_lock; } ;


 int FUNC_0 (struct gsm_dlci*,struct gsm_msg*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct gsm_dlci *VAR_0, struct gsm_msg *VAR_1)
{
 unsigned long VAR_2;
 FUNC_1(&VAR_0->gsm->tx_lock, VAR_2);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->gsm->tx_lock, VAR_2);
}

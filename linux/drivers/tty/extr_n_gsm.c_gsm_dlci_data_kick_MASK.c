
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct gsm_dlci {TYPE_1__* gsm; scalar_t__ net; scalar_t__ constipated; } ;
struct TYPE_4__ {scalar_t__ tx_bytes; int tx_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct gsm_dlci*) ;
 int FUNC_1 (TYPE_1__*,struct gsm_dlci*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct gsm_dlci *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 if (VAR_1->constipated)
  return;

 FUNC_3(&VAR_1->gsm->tx_lock, VAR_2);

 VAR_3 = (VAR_1->gsm->tx_bytes < VAR_0);
 if (VAR_1->gsm->tx_bytes == 0) {
  if (VAR_1->net)
   FUNC_1(VAR_1->gsm, VAR_1);
  else
   FUNC_0(VAR_1->gsm, VAR_1);
 }
 if (VAR_3)
  FUNC_2(VAR_1->gsm);
 FUNC_4(&VAR_1->gsm->tx_lock, VAR_2);
}

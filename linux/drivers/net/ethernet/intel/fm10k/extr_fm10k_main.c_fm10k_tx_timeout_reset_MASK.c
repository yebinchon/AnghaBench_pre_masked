
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_intfc {int flags; int tx_timeout_count; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fm10k_intfc*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct fm10k_intfc *VAR_2)
{

 if (!FUNC_2(VAR_1, VAR_2->state)) {
  VAR_2->tx_timeout_count++;
  FUNC_1(VAR_0, VAR_2->flags);
  FUNC_0(VAR_2);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsm_mux {int t1; int n2; } ;
struct gsm_dlci {scalar_t__ state; int t1; int addr; struct gsm_mux* gsm; int retries; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gsm_mux*,int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct gsm_dlci *VAR_6)
{
 struct gsm_mux *VAR_7 = VAR_6->gsm;
 if (VAR_6->state == VAR_1 || VAR_6->state == VAR_2)
  return;
 VAR_6->retries = VAR_7->n2;
 VAR_6->state = VAR_2;
 FUNC_0(VAR_6->gsm, VAR_6->addr, VAR_0|VAR_4);
 FUNC_1(&VAR_6->t1, VAR_5 + VAR_7->t1 * VAR_3 / 100);
}

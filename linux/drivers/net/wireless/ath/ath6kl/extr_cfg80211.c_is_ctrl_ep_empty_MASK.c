
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl {size_t ctrl_ep; int * tx_pending; } ;



__attribute__((used)) static bool FUNC_0(struct ath6kl *VAR_0)
{
 return !VAR_0->tx_pending[VAR_0->ctrl_ep];
}

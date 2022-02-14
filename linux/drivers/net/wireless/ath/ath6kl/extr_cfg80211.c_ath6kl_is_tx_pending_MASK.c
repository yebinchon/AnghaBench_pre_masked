
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl {scalar_t__* tx_pending; int wmi; } ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct ath6kl *VAR_0)
{
 return VAR_0->tx_pending[FUNC_0(VAR_0->wmi)] == 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {scalar_t__ state; int net_dev; int reset_pending; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct efx_nic *VAR_1)
{
 if ((VAR_1->state != VAR_0) && !VAR_1->reset_pending)
  FUNC_0(VAR_1->net_dev);
}

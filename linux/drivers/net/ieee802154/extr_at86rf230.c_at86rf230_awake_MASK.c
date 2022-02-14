
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct at86rf230_local {int sleep; TYPE_1__* data; int slp_tr; } ;
struct TYPE_2__ {scalar_t__ t_sleep_to_off; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_3(struct at86rf230_local *VAR_0)
{
 if (FUNC_0(VAR_0->slp_tr)) {
  FUNC_1(VAR_0->slp_tr, 0);
  FUNC_2(VAR_0->data->t_sleep_to_off,
        VAR_0->data->t_sleep_to_off + 100);
  VAR_0->sleep = 0;
 }
}

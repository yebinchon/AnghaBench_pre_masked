
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct efx_channel {scalar_t__ sync_events_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct efx_channel*,struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_1(struct efx_channel *VAR_1,
            struct sk_buff *VAR_2)
{
 if (VAR_1->sync_events_state == VAR_0)
  FUNC_0(VAR_1, VAR_2);
}

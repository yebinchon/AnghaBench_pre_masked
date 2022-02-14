
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ retry_delay_timestamp; } ;
typedef TYPE_1__ fc_port_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void
FUNC_0(fc_port_t *VAR_2, uint16_t VAR_3)
{
 if (VAR_3)
  VAR_2->retry_delay_timestamp = VAR_1 +
      (VAR_3 * VAR_0 / 10);
}

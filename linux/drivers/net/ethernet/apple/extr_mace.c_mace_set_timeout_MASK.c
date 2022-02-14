
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ expires; } ;
struct mace_data {int timeout_active; TYPE_1__ tx_timeout; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 struct mace_data* FUNC_2 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_3(struct net_device *VAR_2)
{
    struct mace_data *VAR_3 = FUNC_2(VAR_2);

    if (VAR_3->timeout_active)
 FUNC_1(&VAR_3->tx_timeout);
    VAR_3->tx_timeout.expires = VAR_1 + VAR_0;
    FUNC_0(&VAR_3->tx_timeout);
    VAR_3->timeout_active = 1;
}

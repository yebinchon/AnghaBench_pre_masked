
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int probeResponder; } ;
struct cw1200_common {TYPE_1__ rx_filter; } ;


 int FUNC_0 (struct cw1200_common*,TYPE_1__*) ;

int FUNC_1(struct cw1200_common *VAR_0, bool VAR_1)
{
 VAR_0->rx_filter.probeResponder = VAR_1;
 return FUNC_0(VAR_0, &VAR_0->rx_filter);
}

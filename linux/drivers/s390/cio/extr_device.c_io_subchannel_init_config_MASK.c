
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int csense; } ;
struct subchannel {TYPE_1__ config; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(struct subchannel *VAR_0)
{
 FUNC_0(&VAR_0->config, 0, sizeof(VAR_0->config));
 VAR_0->config.csense = 1;
}

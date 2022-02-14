
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comp_channel {int channel_id; int iface; } ;
struct TYPE_2__ {int cc; } ;


 scalar_t__ FUNC_0 (int ,int ,int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_1(struct comp_channel *VAR_1)
{
 return FUNC_0(VAR_1->iface, VAR_1->channel_id, &VAR_0.cc) > 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev_addr; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
struct uwb_ie_drp {int dev_addr; } ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static bool FUNC_1(struct uwb_rc *VAR_0, struct uwb_ie_drp *VAR_1)
{
 return FUNC_0(&VAR_0->uwb_dev.dev_addr, &VAR_1->dev_addr) == 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct scp_domain {TYPE_2__* data; struct scp* scp; } ;
struct TYPE_3__ {scalar_t__ pwr_sta2nd_offs; scalar_t__ pwr_sta_offs; } ;
struct scp {TYPE_1__ ctrl_reg; scalar_t__ base; } ;
struct TYPE_4__ {int sta_mask; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct scp_domain *VAR_1)
{
 struct scp *VAR_2 = VAR_1->scp;

 u32 VAR_3 = FUNC_0(VAR_2->base + VAR_2->ctrl_reg.pwr_sta_offs) &
      VAR_1->data->sta_mask;
 u32 VAR_4 = FUNC_0(VAR_2->base + VAR_2->ctrl_reg.pwr_sta2nd_offs) &
      VAR_1->data->sta_mask;






 if (VAR_3 && VAR_4)
  return 1;
 if (!VAR_3 && !VAR_4)
  return 0;

 return -VAR_0;
}

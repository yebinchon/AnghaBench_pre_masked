
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct owl_sps_domain {TYPE_2__* sps; TYPE_1__* info; } ;
struct TYPE_4__ {int base; } ;
struct TYPE_3__ {int pwr_bit; int ack_bit; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct owl_sps_domain *VAR_0, bool VAR_1)
{
 u32 VAR_2, VAR_3;

 VAR_3 = FUNC_0(VAR_0->info->ack_bit);
 VAR_2 = FUNC_0(VAR_0->info->pwr_bit);

 return FUNC_1(VAR_0->sps->base, VAR_2, VAR_3, VAR_1);
}

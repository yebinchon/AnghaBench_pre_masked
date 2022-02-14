
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int numdl; int numdu; } ;
struct nvme_command {TYPE_1__ get_log_page; } ;


 int FUNC_0 (int ) ;

u32 FUNC_1(struct nvme_command *VAR_0)
{
 u32 VAR_1 = FUNC_0(VAR_0->get_log_page.numdu);

 VAR_1 <<= 16;
 VAR_1 += FUNC_0(VAR_0->get_log_page.numdl);

 VAR_1 += 1;
 VAR_1 *= sizeof(u32);

 return VAR_1;
}

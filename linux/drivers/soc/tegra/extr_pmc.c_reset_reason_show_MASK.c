
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_7__ {TYPE_1__* soc; } ;
struct TYPE_6__ {size_t rst_source_mask; size_t rst_source_shift; int rst_status; } ;
struct TYPE_5__ {size_t num_reset_sources; char** reset_sources; TYPE_2__* regs; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (char*,char*,char*) ;
 size_t FUNC_2 (TYPE_3__*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_0->soc->regs->rst_status);
 VAR_4 &= VAR_0->soc->regs->rst_source_mask;
 VAR_4 >>= VAR_0->soc->regs->rst_source_shift;

 if (FUNC_0(VAR_4 >= VAR_0->soc->num_reset_sources))
  return FUNC_1(VAR_3, "%s\n", "UNKNOWN");

 return FUNC_1(VAR_3, "%s\n", VAR_0->soc->reset_sources[VAR_4]);
}

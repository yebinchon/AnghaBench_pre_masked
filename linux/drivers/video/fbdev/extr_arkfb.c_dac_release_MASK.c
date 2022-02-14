
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dac_info {TYPE_1__* dacops; } ;
struct TYPE_2__ {int (* dac_release ) (struct dac_info*) ;} ;


 int FUNC_0 (struct dac_info*) ;

__attribute__((used)) static inline void FUNC_1(struct dac_info *VAR_0)
{
 VAR_0->dacops->dac_release(VAR_0);
}

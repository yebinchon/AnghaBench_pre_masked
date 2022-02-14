
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dac_info {TYPE_1__* dacops; } ;
struct TYPE_2__ {int (* dac_set_freq ) (struct dac_info*,int,int ) ;} ;


 int FUNC_0 (struct dac_info*,int,int ) ;

__attribute__((used)) static inline int FUNC_1(struct dac_info *VAR_0, int VAR_1, u32 VAR_2)
{
 return VAR_0->dacops->dac_set_freq(VAR_0, VAR_1, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int no_ddp_mask; } ;
struct cxgbi_ppm {TYPE_1__ tformat; } ;



__attribute__((used)) static inline int FUNC_0(struct cxgbi_ppm *VAR_0, u32 VAR_1)
{
 return !(VAR_1 & VAR_0->tformat.no_ddp_mask);
}

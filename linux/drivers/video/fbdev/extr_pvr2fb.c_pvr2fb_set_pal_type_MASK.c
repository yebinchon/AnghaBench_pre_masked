
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2fb_par {scalar_t__ mmio_base; } ;
struct TYPE_2__ {scalar_t__ par; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(unsigned int VAR_1)
{
 struct pvr2fb_par *VAR_2 = (struct pvr2fb_par *)VAR_0->par;

 FUNC_0(VAR_1, VAR_2->mmio_base + 0x108);
}

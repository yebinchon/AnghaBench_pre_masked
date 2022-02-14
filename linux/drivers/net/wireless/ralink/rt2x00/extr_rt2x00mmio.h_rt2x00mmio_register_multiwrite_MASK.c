
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ base; } ;
struct rt2x00_dev {TYPE_1__ csr; } ;


 int FUNC_0 (scalar_t__,void const*,int const) ;

__attribute__((used)) static inline void FUNC_1(struct rt2x00_dev *VAR_0,
        const unsigned int VAR_1,
        const void *VAR_2,
        const u32 VAR_3)
{
 FUNC_0(VAR_0->csr.base + VAR_1, VAR_2, VAR_3 >> 2);
}

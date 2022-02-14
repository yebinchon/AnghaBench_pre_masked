
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int staterr; } ;
union fm10k_rx_desc {TYPE_1__ d; } ;
typedef int u32 ;
typedef int __le32 ;


 int FUNC_0 (int const) ;

__attribute__((used)) static inline __le32 FUNC_1(union fm10k_rx_desc *VAR_0,
     const u32 VAR_1)
{
 return VAR_0->d.staterr & FUNC_0(VAR_1);
}

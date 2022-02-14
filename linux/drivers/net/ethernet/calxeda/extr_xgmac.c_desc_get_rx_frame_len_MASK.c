
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgmac_dma_desc {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct xgmac_dma_desc *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_4->flags);
 u32 VAR_6 = (VAR_5 & VAR_1) >> VAR_2;
 if (VAR_5 & VAR_3)
  VAR_6 -= VAR_0;

 return VAR_6;
}

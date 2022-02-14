
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_extra_stats {int dummy; } ;
struct dma_desc {int des3; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(void *VAR_8, struct stmmac_extra_stats *VAR_9,
      struct dma_desc *VAR_10)
{
 unsigned int VAR_11 = FUNC_0(VAR_10->des3);

 if (FUNC_2(VAR_11 & VAR_3))
  return VAR_5;
 if (FUNC_2(VAR_11 & VAR_0))
  return VAR_4;
 if (FUNC_1(!(VAR_11 & VAR_2)))
  return VAR_7;
 if (FUNC_2((VAR_11 & VAR_1) && (VAR_11 & VAR_2)))
  return VAR_4;

 return VAR_6;
}

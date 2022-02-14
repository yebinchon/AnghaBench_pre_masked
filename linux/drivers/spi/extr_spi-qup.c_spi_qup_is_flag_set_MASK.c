
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_qup {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline bool FUNC_1(struct spi_qup *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_1->base + VAR_0);

 return (VAR_3 & VAR_2) != 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_davinci_host {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct mmc_davinci_host *VAR_3,
        int VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_3->base + VAR_0);
 if (VAR_4)
  VAR_5 |= VAR_1 | VAR_2;
 else
  VAR_5 &= ~(VAR_1 | VAR_2);

 FUNC_2(VAR_5, VAR_3->base + VAR_0);
 FUNC_1(10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ioc3_private {int* ssram; int emcr; struct ioc3_ethregs* regs; } ;
struct ioc3_ethregs {int emcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int,int*) ;

__attribute__((used)) static inline void FUNC_2(struct ioc3_private *VAR_3)
{
 struct ioc3_ethregs *VAR_4 = VAR_3->regs;
 u32 *VAR_5 = &VAR_3->ssram[0x0000];
 u32 *VAR_6 = &VAR_3->ssram[0x4000];
 u32 VAR_7 = 0x5555;


 FUNC_1(FUNC_0(&VAR_4->emcr) | (VAR_0 | VAR_1), &VAR_4->emcr);
 FUNC_0(&VAR_4->emcr);

 FUNC_1(VAR_7, VAR_5);
 FUNC_1(~VAR_7 & VAR_2, VAR_6);

 if ((FUNC_0(VAR_5) & VAR_2) != VAR_7 ||
     (FUNC_0(VAR_6) & VAR_2) != (~VAR_7 & VAR_2)) {

  VAR_3->emcr |= VAR_1;
  FUNC_1(FUNC_0(&VAR_4->emcr) & ~VAR_0, &VAR_4->emcr);
 } else {
  VAR_3->emcr |= VAR_0 | VAR_1;
 }
}

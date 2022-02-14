
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pic32_spi {TYPE_1__* regs; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline u32 FUNC_1(struct pic32_spi *VAR_2)
{
 u32 VAR_3 = FUNC_0(&VAR_2->regs->status);

 return (VAR_3 >> VAR_1) & VAR_0;
}

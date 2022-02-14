
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct vt8500_chip {TYPE_1__ chip; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline void FUNC_5(struct vt8500_chip *VAR_1, int VAR_2, u8 VAR_3)
{
 int VAR_4 = FUNC_2(10);
 u32 VAR_5 = VAR_3 << (VAR_2 << 8);

 while ((FUNC_3(VAR_1->base + VAR_0) & VAR_5) && --VAR_4)
  FUNC_0();

 if (FUNC_4(!VAR_4))
  FUNC_1(VAR_1->chip.dev, "Waiting for status bits 0x%x to clear timed out\n",
    VAR_5);
}

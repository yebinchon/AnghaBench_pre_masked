
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvidia_par {int PCIO; scalar_t__ paletteEnabled; scalar_t__ IOBase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int) ;

u8 FUNC_2(struct nvidia_par *VAR_2, u8 VAR_3)
{
 volatile u8 VAR_4;

 VAR_4 = FUNC_0(VAR_2->PCIO, VAR_2->IOBase + 0x0a);
 if (VAR_2->paletteEnabled)
  VAR_3 &= ~0x20;
 else
  VAR_3 |= 0x20;
 FUNC_1(VAR_2->PCIO, VAR_0, VAR_3);
 return (FUNC_0(VAR_2->PCIO, VAR_1));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm2835_host {int hcfg; int cdiv; scalar_t__ ioaddr; scalar_t__ clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct bcm2835_host *VAR_17)
{
 u32 VAR_18;

 FUNC_2(VAR_15, VAR_17->ioaddr + VAR_14);
 FUNC_2(0, VAR_17->ioaddr + VAR_4);
 FUNC_2(0, VAR_17->ioaddr + VAR_2);
 FUNC_2(0xf00000, VAR_17->ioaddr + VAR_13);
 FUNC_2(0, VAR_17->ioaddr + VAR_3);
 FUNC_2(0x7f8, VAR_17->ioaddr + VAR_12);
 FUNC_2(0, VAR_17->ioaddr + VAR_11);
 FUNC_2(0, VAR_17->ioaddr + VAR_9);
 FUNC_2(0, VAR_17->ioaddr + VAR_10);


 VAR_18 = FUNC_1(VAR_17->ioaddr + VAR_5);
 VAR_18 &= ~((VAR_7 << VAR_6) |
    (VAR_7 << VAR_8));
 VAR_18 |= (VAR_0 << VAR_6) |
  (VAR_1 << VAR_8);
 FUNC_2(VAR_18, VAR_17->ioaddr + VAR_5);
 FUNC_0(20);
 FUNC_2(VAR_16, VAR_17->ioaddr + VAR_14);
 FUNC_0(20);
 VAR_17->clock = 0;
 FUNC_2(VAR_17->hcfg, VAR_17->ioaddr + VAR_11);
 FUNC_2(VAR_17->cdiv, VAR_17->ioaddr + VAR_3);
}

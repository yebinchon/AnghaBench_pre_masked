
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct gem_txd {int dummy; } ;
struct gem {int rx_pause_off; int rx_pause_on; scalar_t__ regs; int gblock_dvma; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct gem *VAR_24)
{
 u64 VAR_25 = (u64) VAR_24->gblock_dvma;
 u32 VAR_26;

 VAR_26 = (VAR_19 | (0x7ff << 10) | VAR_20);
 FUNC_1(VAR_26, VAR_24->regs + VAR_18);

 FUNC_1(VAR_25 >> 32, VAR_24->regs + VAR_21);
 FUNC_1(VAR_25 & 0xffffffff, VAR_24->regs + VAR_22);
 VAR_25 += (VAR_3 * sizeof(struct gem_txd));

 FUNC_1(0, VAR_24->regs + VAR_23);

 VAR_26 = (VAR_8 | (VAR_16 << 10) |
        (VAR_0 << 13) | VAR_9);
 FUNC_1(VAR_26, VAR_24->regs + VAR_7);

 FUNC_1(VAR_25 >> 32, VAR_24->regs + VAR_10);
 FUNC_1(VAR_25 & 0xffffffff, VAR_24->regs + VAR_11);

 FUNC_1(VAR_17 - 4, VAR_24->regs + VAR_12);

 VAR_26 = (((VAR_24->rx_pause_off / 64) << 0) & VAR_14);
 VAR_26 |= (((VAR_24->rx_pause_on / 64) << 12) & VAR_15);
 FUNC_1(VAR_26, VAR_24->regs + VAR_13);

 if (FUNC_0(VAR_24->regs + VAR_1) & VAR_2)
  FUNC_1(((5 & VAR_5) |
   ((8 << 12) & VAR_6)),
         VAR_24->regs + VAR_4);
 else
  FUNC_1(((5 & VAR_5) |
   ((4 << 12) & VAR_6)),
         VAR_24->regs + VAR_4);
}

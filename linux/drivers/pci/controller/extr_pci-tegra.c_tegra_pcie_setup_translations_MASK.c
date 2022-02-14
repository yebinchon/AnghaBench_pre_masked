
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int start; } ;
struct tegra_pcie {TYPE_1__* soc; TYPE_2__ mem; TYPE_2__ prefetch; TYPE_2__ io; TYPE_2__ cs; } ;
struct TYPE_3__ {scalar_t__ has_cache_bars; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct tegra_pcie*,int,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct tegra_pcie *VAR_24)
{
 u32 VAR_25, VAR_26, VAR_27;


 VAR_26 = FUNC_1(&VAR_24->cs);
 FUNC_0(VAR_24, VAR_24->cs.start, VAR_0);
 FUNC_0(VAR_24, VAR_26 >> 12, VAR_1);


 VAR_25 = 0xfdfc0000;
 VAR_26 = FUNC_1(&VAR_24->io);
 VAR_27 = VAR_24->io.start;
 FUNC_0(VAR_24, VAR_27, VAR_2);
 FUNC_0(VAR_24, VAR_26 >> 12, VAR_3);
 FUNC_0(VAR_24, VAR_25, VAR_16);


 VAR_25 = (((VAR_24->prefetch.start >> 12) & 0x0fffffff) << 4) | 0x1;
 VAR_26 = FUNC_1(&VAR_24->prefetch);
 VAR_27 = VAR_24->prefetch.start;
 FUNC_0(VAR_24, VAR_27, VAR_4);
 FUNC_0(VAR_24, VAR_26 >> 12, VAR_5);
 FUNC_0(VAR_24, VAR_25, VAR_17);


 VAR_25 = (((VAR_24->mem.start >> 12) & 0x0fffffff) << 4) | 0x1;
 VAR_26 = FUNC_1(&VAR_24->mem);
 VAR_27 = VAR_24->mem.start;
 FUNC_0(VAR_24, VAR_27, VAR_6);
 FUNC_0(VAR_24, VAR_26 >> 12, VAR_7);
 FUNC_0(VAR_24, VAR_25, VAR_18);


 FUNC_0(VAR_24, 0, VAR_8);
 FUNC_0(VAR_24, 0, VAR_9);
 FUNC_0(VAR_24, 0, VAR_19);

 FUNC_0(VAR_24, 0, VAR_10);
 FUNC_0(VAR_24, 0, VAR_11);
 FUNC_0(VAR_24, 0, VAR_20);

 if (VAR_24->soc->has_cache_bars) {

  FUNC_0(VAR_24, 0, VAR_12);
  FUNC_0(VAR_24, 0, VAR_13);
  FUNC_0(VAR_24, 0, VAR_14);
  FUNC_0(VAR_24, 0, VAR_15);
 }


 FUNC_0(VAR_24, 0, VAR_23);
 FUNC_0(VAR_24, 0, VAR_22);
 FUNC_0(VAR_24, 0, VAR_21);
 FUNC_0(VAR_24, 0, VAR_22);
}

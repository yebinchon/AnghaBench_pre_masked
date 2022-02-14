
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_xusb {TYPE_1__* soc; } ;
struct resource {int start; } ;
struct TYPE_2__ {scalar_t__ has_ipfs; } ;


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
 int FUNC_0 (struct tegra_xusb*,int ) ;
 int FUNC_1 (struct tegra_xusb*,int,int ) ;
 int FUNC_2 (struct tegra_xusb*,int ) ;
 int FUNC_3 (struct tegra_xusb*,int,int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct tegra_xusb *VAR_12,
         struct resource *VAR_13)
{
 u32 VAR_14;

 if (VAR_12->soc->has_ipfs) {
  VAR_14 = FUNC_2(VAR_12, VAR_3);
  VAR_14 |= VAR_0;
  FUNC_3(VAR_12, VAR_14, VAR_3);

  FUNC_4(10, 20);
 }


 VAR_14 = FUNC_0(VAR_12, VAR_9);
 VAR_14 &= ~(VAR_5 << VAR_6);
 VAR_14 |= VAR_13->start & (VAR_5 << VAR_6);
 FUNC_1(VAR_12, VAR_14, VAR_9);

 FUNC_4(100, 200);


 VAR_14 = FUNC_0(VAR_12, VAR_8);
 VAR_14 |= VAR_10 | VAR_11 | VAR_7;
 FUNC_1(VAR_12, VAR_14, VAR_8);

 if (VAR_12->soc->has_ipfs) {

  VAR_14 = FUNC_2(VAR_12, VAR_4);
  VAR_14 |= VAR_1;
  FUNC_3(VAR_12, VAR_14, VAR_4);


  FUNC_3(VAR_12, 0x80, VAR_2);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pending; int dat; } ;
union cvmx_smix_wr_dat {scalar_t__ u64; TYPE_2__ s; } ;
struct TYPE_3__ {unsigned int phy_op; int phy_adr; int reg_adr; } ;
union cvmx_smix_cmd {scalar_t__ u64; TYPE_1__ s; } ;
typedef int u16 ;
struct mii_bus {struct cavium_mdiobus* priv; } ;
struct cavium_mdiobus {scalar_t__ register_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cavium_mdiobus*,int,int) ;
 int FUNC_2 (struct cavium_mdiobus*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

int FUNC_5(struct mii_bus *VAR_5, int VAR_6, int VAR_7, u16 VAR_8)
{
 struct cavium_mdiobus *VAR_9 = VAR_5->priv;
 union cvmx_smix_cmd VAR_10;
 union cvmx_smix_wr_dat VAR_11;
 unsigned int VAR_12 = 0;
 int VAR_13 = 1000;

 if (VAR_7 & VAR_2) {
  int VAR_14 = FUNC_1(VAR_9, VAR_6, VAR_7);

  if (VAR_14 < 0)
   return VAR_14;

  VAR_7 = (VAR_7 >> 16) & 0x1f;
  VAR_12 = 1;
 } else {
  FUNC_2(VAR_9, VAR_0);
 }

 VAR_11.u64 = 0;
 VAR_11.s.dat = VAR_8;
 FUNC_4(VAR_11.u64, VAR_9->register_base + VAR_4);

 VAR_10.u64 = 0;
 VAR_10.s.phy_op = VAR_12;
 VAR_10.s.phy_adr = VAR_6;
 VAR_10.s.reg_adr = VAR_7;
 FUNC_4(VAR_10.u64, VAR_9->register_base + VAR_3);

 do {



  FUNC_0(1000);
  VAR_11.u64 = FUNC_3(VAR_9->register_base + VAR_4);
 } while (VAR_11.s.pending && --VAR_13);

 if (VAR_13 <= 0)
  return -VAR_1;

 return 0;
}

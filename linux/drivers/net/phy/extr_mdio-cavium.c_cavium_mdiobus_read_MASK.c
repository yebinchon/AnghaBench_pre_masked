
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dat; scalar_t__ val; scalar_t__ pending; } ;
union cvmx_smix_rd_dat {TYPE_2__ s; int u64; } ;
struct TYPE_3__ {unsigned int phy_op; int phy_adr; int reg_adr; } ;
union cvmx_smix_cmd {scalar_t__ u64; TYPE_1__ s; } ;
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
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

int FUNC_5(struct mii_bus *VAR_5, int VAR_6, int VAR_7)
{
 struct cavium_mdiobus *VAR_8 = VAR_5->priv;
 union cvmx_smix_cmd VAR_9;
 union cvmx_smix_rd_dat VAR_10;
 unsigned int VAR_11 = 1;
 int VAR_12 = 1000;

 if (VAR_7 & VAR_2) {
  int VAR_13 = FUNC_1(VAR_8, VAR_6, VAR_7);

  if (VAR_13 < 0)
   return VAR_13;

  VAR_7 = (VAR_7 >> 16) & 0x1f;
  VAR_11 = 3;
 } else {
  FUNC_2(VAR_8, VAR_0);
 }

 VAR_9.u64 = 0;
 VAR_9.s.phy_op = VAR_11;
 VAR_9.s.phy_adr = VAR_6;
 VAR_9.s.reg_adr = VAR_7;
 FUNC_4(VAR_9.u64, VAR_8->register_base + VAR_3);

 do {



  FUNC_0(1000);
  VAR_10.u64 = FUNC_3(VAR_8->register_base + VAR_4);
 } while (VAR_10.s.pending && --VAR_12);

 if (VAR_10.s.val)
  return VAR_10.s.dat;
 else
  return -VAR_1;
}

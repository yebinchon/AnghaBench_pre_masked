
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dat; scalar_t__ pending; } ;
union cvmx_smix_wr_dat {scalar_t__ u64; TYPE_2__ s; } ;
struct TYPE_3__ {int phy_adr; int reg_adr; scalar_t__ phy_op; } ;
union cvmx_smix_cmd {scalar_t__ u64; TYPE_1__ s; } ;
struct cavium_mdiobus {scalar_t__ register_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cavium_mdiobus*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct cavium_mdiobus *VAR_4,
       int VAR_5, int VAR_6)
{
 union cvmx_smix_cmd VAR_7;
 union cvmx_smix_wr_dat VAR_8;
 int VAR_9 = 1000;

 FUNC_1(VAR_4, VAR_0);

 VAR_8.u64 = 0;
 VAR_8.s.dat = VAR_6 & 0xffff;
 FUNC_3(VAR_8.u64, VAR_4->register_base + VAR_3);

 VAR_6 = (VAR_6 >> 16) & 0x1f;

 VAR_7.u64 = 0;
 VAR_7.s.phy_op = 0;
 VAR_7.s.phy_adr = VAR_5;
 VAR_7.s.reg_adr = VAR_6;
 FUNC_3(VAR_7.u64, VAR_4->register_base + VAR_2);

 do {



  FUNC_0(1000);
  VAR_8.u64 = FUNC_2(VAR_4->register_base + VAR_3);
 } while (VAR_8.s.pending && --VAR_9);

 if (VAR_9 <= 0)
  return -VAR_1;
 return 0;
}

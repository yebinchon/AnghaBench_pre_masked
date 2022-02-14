
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct memac_cfg {int max_frame_length; struct fixed_phy_status* fixed_link; scalar_t__ reset_on_init; } ;
struct TYPE_7__ {int major; int minor; } ;
struct fman_mac {scalar_t__ phy_if; struct memac_cfg* memac_drv_param; int mac_id; int fm; void* unicast_addr_hash; void* multicast_addr_hash; TYPE_3__* pcsphy; scalar_t__ basex_if; TYPE_4__* regs; TYPE_1__ fm_rev_info; int exceptions; int max_speed; int addr; } ;
struct fixed_phy_status {int dummy; } ;
typedef scalar_t__ enet_addr_t ;
struct TYPE_10__ {int command_config; } ;
struct TYPE_8__ {int addr; } ;
struct TYPE_9__ {TYPE_2__ mdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (TYPE_4__*,int*,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct fman_mac*) ;
 int FUNC_4 (int ,int ,int ,int ,int ,struct fman_mac*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct fman_mac*) ;
 int FUNC_7 (TYPE_4__*,struct memac_cfg*,scalar_t__,int ,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (struct memac_cfg*) ;
 int FUNC_11 (struct memac_cfg*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (struct fman_mac*,struct fixed_phy_status*) ;
 int FUNC_15 (struct fman_mac*) ;

int FUNC_16(struct fman_mac *VAR_11)
{
 struct memac_cfg *VAR_12;
 u8 VAR_13;
 enet_addr_t VAR_14;
 bool VAR_15 = 0;
 struct fixed_phy_status *VAR_16;
 int VAR_17;
 u32 VAR_18 = 0;

 if (FUNC_10(VAR_11->memac_drv_param))
  return -VAR_1;

 VAR_17 = FUNC_3(VAR_11);
 if (VAR_17)
  return VAR_17;

 VAR_12 = VAR_11->memac_drv_param;

 if (VAR_11->fm_rev_info.major == 6 && VAR_11->fm_rev_info.minor == 4)
  VAR_15 = 1;


 if (VAR_12->reset_on_init) {
  VAR_17 = FUNC_13(VAR_11->regs);
  if (VAR_17) {
   FUNC_12("mEMAC reset failed\n");
   return VAR_17;
  }
 }


 FUNC_0(VAR_11->addr, VAR_14);
 FUNC_1(VAR_11->regs, (u8 *)VAR_14, 0);

 VAR_16 = VAR_12->fixed_link;

 FUNC_7(VAR_11->regs, VAR_11->memac_drv_param, VAR_11->phy_if,
      VAR_11->max_speed, VAR_15, VAR_11->exceptions);




 if ((VAR_11->fm_rev_info.major == 6) &&
     ((VAR_11->fm_rev_info.minor == 0) ||
     (VAR_11->fm_rev_info.minor == 3))) {



  VAR_18 = FUNC_8(&VAR_11->regs->command_config);
  VAR_18 &= ~VAR_0;
  FUNC_9(VAR_18, &VAR_11->regs->command_config);
 }

 if (VAR_11->phy_if == VAR_8) {

  if (VAR_11->basex_if)
   FUNC_15(VAR_11);
  else
   FUNC_14(VAR_11, VAR_16);
 } else if (VAR_11->phy_if == VAR_7) {

  for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
   u8 VAR_19, VAR_20;





   VAR_20 = VAR_11->pcsphy->mdio.addr;
   VAR_19 = (u8)((VAR_20 << 2) | VAR_13);
   VAR_11->pcsphy->mdio.addr = VAR_19;
   if (VAR_11->basex_if)
    FUNC_15(VAR_11);
   else
    FUNC_14(VAR_11, VAR_16);

   VAR_11->pcsphy->mdio.addr = VAR_20;
  }
 }


 VAR_17 = FUNC_5(VAR_11->fm, VAR_11->mac_id,
         VAR_12->max_frame_length);
 if (VAR_17) {
  FUNC_12("settings Mac max frame length is FAILED\n");
  return VAR_17;
 }

 VAR_11->multicast_addr_hash = FUNC_2(VAR_6);
 if (!VAR_11->multicast_addr_hash) {
  FUNC_6(VAR_11);
  FUNC_12("allocation hash table is FAILED\n");
  return -VAR_2;
 }

 VAR_11->unicast_addr_hash = FUNC_2(VAR_6);
 if (!VAR_11->unicast_addr_hash) {
  FUNC_6(VAR_11);
  FUNC_12("allocation hash table is FAILED\n");
  return -VAR_2;
 }

 FUNC_4(VAR_11->fm, VAR_5, VAR_11->mac_id,
      VAR_3, VAR_9, VAR_11);

 FUNC_4(VAR_11->fm, VAR_5, VAR_11->mac_id,
      VAR_4, VAR_10, VAR_11);

 FUNC_11(VAR_12);
 VAR_11->memac_drv_param = ((void*)0);

 return 0;
}

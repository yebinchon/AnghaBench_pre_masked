
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct phy_probe_info {int dummy; } ;
struct niu_parent {scalar_t__ plat_type; int num_ports; int port_phy; struct phy_probe_info phy_probe_info; } ;
struct TYPE_2__ {int model; } ;
struct niu {int flags; int port; TYPE_1__ vpd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct phy_probe_info*,int*) ;
 int FUNC_1 (struct phy_probe_info*,int*) ;
 int FUNC_2 (struct niu*,struct niu_parent*,struct phy_probe_info*) ;
 int FUNC_3 (struct niu_parent*,int,int) ;
 int FUNC_4 (struct niu_parent*,int,int) ;
 int FUNC_5 (struct niu_parent*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (char*,int,...) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct niu *VAR_12, struct niu_parent *VAR_13)
{
 struct phy_probe_info *VAR_14 = &VAR_13->phy_probe_info;
 int VAR_15, VAR_16;
 int VAR_17, VAR_18;
 u32 VAR_19;
 int VAR_20;

 VAR_17 = VAR_18 = 0;

 if (!FUNC_8(VAR_12->vpd.model, VAR_1) ||
     !FUNC_8(VAR_12->vpd.model, VAR_5)) {
  VAR_17 = 0;
  VAR_18 = 2;
  VAR_13->plat_type = VAR_6;
  VAR_13->num_ports = 4;
  VAR_19 = (FUNC_6(VAR_11, 0) |
         FUNC_6(VAR_11, 1) |
         FUNC_6(VAR_11, 2) |
         FUNC_6(VAR_11, 3));
 } else if (!FUNC_8(VAR_12->vpd.model, VAR_4)) {
  VAR_17 = 2;
  VAR_18 = 0;
  VAR_13->num_ports = 2;
  VAR_19 = (FUNC_6(VAR_10, 0) |
         FUNC_6(VAR_10, 1));
 } else if ((VAR_12->flags & VAR_3) &&
     (VAR_13->plat_type == VAR_7)) {

  if (VAR_12->flags & VAR_2) {
   VAR_19 = (FUNC_6(VAR_10, 0) |
          FUNC_6(VAR_10, 1));
  } else {
   VAR_19 = (FUNC_6(VAR_11, 0) |
          FUNC_6(VAR_11, 1));
  }
 } else {
  VAR_20 = FUNC_2(VAR_12, VAR_13, VAR_14);
  if (VAR_20)
   return VAR_20;

  VAR_17 = FUNC_0(VAR_14, &VAR_15);
  VAR_18 = FUNC_1(VAR_14, &VAR_16);

  switch ((VAR_17 << 4) | VAR_18) {
  case 0x24:
   if (VAR_16 == 10)
    VAR_13->plat_type = VAR_8;
   else if (VAR_16 == 26)
    VAR_13->plat_type = VAR_9;
   else
    goto unknown_vg_1g_port;


  case 0x22:
   VAR_19 = (FUNC_6(VAR_10, 0) |
          FUNC_6(VAR_10, 1) |
          FUNC_6(VAR_11, 2) |
          FUNC_6(VAR_11, 3));
   break;

  case 0x20:
   VAR_19 = (FUNC_6(VAR_10, 0) |
          FUNC_6(VAR_10, 1));
   break;

  case 0x10:
   VAR_19 = FUNC_6(VAR_10, VAR_12->port);
   break;

  case 0x14:
   if (VAR_16 == 10)
    VAR_13->plat_type = VAR_8;
   else if (VAR_16 == 26)
    VAR_13->plat_type = VAR_9;
   else
    goto unknown_vg_1g_port;


  case 0x13:
   if ((VAR_15 & 0x7) == 0)
    VAR_19 = (FUNC_6(VAR_10, 0) |
           FUNC_6(VAR_11, 1) |
           FUNC_6(VAR_11, 2) |
           FUNC_6(VAR_11, 3));
   else
    VAR_19 = (FUNC_6(VAR_11, 0) |
           FUNC_6(VAR_10, 1) |
           FUNC_6(VAR_11, 2) |
           FUNC_6(VAR_11, 3));
   break;

  case 0x04:
   if (VAR_16 == 10)
    VAR_13->plat_type = VAR_8;
   else if (VAR_16 == 26)
    VAR_13->plat_type = VAR_9;
   else
    goto unknown_vg_1g_port;

   VAR_19 = (FUNC_6(VAR_11, 0) |
          FUNC_6(VAR_11, 1) |
          FUNC_6(VAR_11, 2) |
          FUNC_6(VAR_11, 3));
   break;

  default:
   FUNC_7("Unsupported port config 10G[%d] 1G[%d]\n",
          VAR_17, VAR_18);
   return -VAR_0;
  }
 }

 VAR_13->port_phy = VAR_19;

 if (VAR_13->plat_type == VAR_7)
  FUNC_5(VAR_13);
 else
  FUNC_3(VAR_13, VAR_17, VAR_18);

 FUNC_4(VAR_13, VAR_17, VAR_18);

 return 0;

unknown_vg_1g_port:
 FUNC_7("Cannot identify platform type, 1gport=%d\n", VAR_16);
 return -VAR_0;
}

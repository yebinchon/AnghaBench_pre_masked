
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int flags; } ;
struct fsl_mc_io {int dummy; } ;
struct TYPE_2__ {int mac_filter_entries; int options; } ;
struct dpaa2_eth_priv {struct fsl_mc_io* mc_io; int mc_token; TYPE_1__ dpni_attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,struct dpaa2_eth_priv*) ;
 int FUNC_1 (struct net_device*,struct dpaa2_eth_priv*) ;
 int FUNC_2 (struct fsl_mc_io*,int ,int ,int,int) ;
 int FUNC_3 (struct fsl_mc_io*,int ,int ,int) ;
 int FUNC_4 (struct fsl_mc_io*,int ,int ,int) ;
 int FUNC_5 (struct net_device*,char*,int,...) ;
 int FUNC_6 (struct net_device*) ;
 struct dpaa2_eth_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,char*,...) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_3)
{
 struct dpaa2_eth_priv *VAR_4 = FUNC_7(VAR_3);
 int VAR_5 = FUNC_8(VAR_3);
 int VAR_6 = FUNC_6(VAR_3);
 u8 VAR_7 = VAR_4->dpni_attrs.mac_filter_entries;
 u32 VAR_8 = VAR_4->dpni_attrs.options;
 u16 VAR_9 = VAR_4->mc_token;
 struct fsl_mc_io *VAR_10 = VAR_4->mc_io;
 int VAR_11;


 if (VAR_8 & VAR_0 && VAR_7 != 0)
  FUNC_5(VAR_3,
       "mac_filter_entries=%d, DPNI_OPT_NO_MAC_FILTER option must be disabled\n",
       VAR_7);


 if (VAR_5 > VAR_7) {
  FUNC_5(VAR_3,
       "Unicast addr count reached %d, max allowed is %d; forcing promisc\n",
       VAR_5, VAR_7);
  goto force_promisc;
 }
 if (VAR_6 + VAR_5 > VAR_7) {
  FUNC_5(VAR_3,
       "Unicast + multicast addr count reached %d, max allowed is %d; forcing promisc\n",
       VAR_5 + VAR_6, VAR_7);
  goto force_mc_promisc;
 }


 if (VAR_3->flags & VAR_2)
  goto force_promisc;
 if (VAR_3->flags & VAR_1) {







  VAR_11 = FUNC_4(VAR_10, 0, VAR_9, 1);
  if (VAR_11)
   FUNC_9(VAR_3, "Can't set uc promisc\n");


  VAR_11 = FUNC_2(VAR_10, 0, VAR_9, 1, 0);
  if (VAR_11)
   FUNC_9(VAR_3, "Can't clear uc filters\n");
  FUNC_1(VAR_3, VAR_4);


  VAR_11 = FUNC_4(VAR_10, 0, VAR_9, 0);
  if (VAR_11)
   FUNC_9(VAR_3, "Can't clear uc promisc\n");
  goto force_mc_promisc;
 }




 VAR_11 = FUNC_4(VAR_10, 0, VAR_9, 1);
 if (VAR_11)
  FUNC_9(VAR_3, "Can't set uc promisc (%d)\n", VAR_11);
 VAR_11 = FUNC_3(VAR_10, 0, VAR_9, 1);
 if (VAR_11)
  FUNC_9(VAR_3, "Can't set mc promisc (%d)\n", VAR_11);


 VAR_11 = FUNC_2(VAR_10, 0, VAR_9, 1, 1);
 if (VAR_11)
  FUNC_9(VAR_3, "Can't clear mac filters\n");
 FUNC_0(VAR_3, VAR_4);
 FUNC_1(VAR_3, VAR_4);




 VAR_11 = FUNC_4(VAR_10, 0, VAR_9, 0);
 if (VAR_11)
  FUNC_9(VAR_3, "Can't clear ucast promisc\n");
 VAR_11 = FUNC_3(VAR_10, 0, VAR_9, 0);
 if (VAR_11)
  FUNC_9(VAR_3, "Can't clear mcast promisc\n");

 return;

force_promisc:
 VAR_11 = FUNC_4(VAR_10, 0, VAR_9, 1);
 if (VAR_11)
  FUNC_9(VAR_3, "Can't set ucast promisc\n");
force_mc_promisc:
 VAR_11 = FUNC_3(VAR_10, 0, VAR_9, 1);
 if (VAR_11)
  FUNC_9(VAR_3, "Can't set mcast promisc\n");
}

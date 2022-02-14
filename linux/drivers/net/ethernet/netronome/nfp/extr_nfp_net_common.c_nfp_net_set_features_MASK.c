
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ctrl; } ;
struct nfp_net {int cap; TYPE_1__ dp; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;


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
 struct nfp_net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nfp_net*,int ) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct nfp_net*,char*,int,int,...) ;
 int FUNC_4 (struct nfp_net*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_20,
    netdev_features_t VAR_21)
{
 netdev_features_t VAR_22 = VAR_20->features ^ VAR_21;
 struct nfp_net *VAR_23 = FUNC_0(VAR_20);
 u32 VAR_24;
 int VAR_25;



 VAR_24 = VAR_23->dp.ctrl;

 if (VAR_22 & VAR_5) {
  if (VAR_21 & VAR_5)
   VAR_24 |= VAR_23->cap & VAR_15;
  else
   VAR_24 &= ~VAR_15;
 }

 if (VAR_22 & (VAR_4 | VAR_3)) {
  if (VAR_21 & (VAR_4 | VAR_3))
   VAR_24 |= VAR_17;
  else
   VAR_24 &= ~VAR_17;
 }

 if (VAR_22 & (VAR_7 | VAR_8)) {
  if (VAR_21 & (VAR_7 | VAR_8))
   VAR_24 |= VAR_23->cap & VAR_13 ?:
           VAR_12;
  else
   VAR_24 &= ~VAR_14;
 }

 if (VAR_22 & VAR_1) {
  if (VAR_21 & VAR_1)
   VAR_24 |= VAR_16;
  else
   VAR_24 &= ~VAR_16;
 }

 if (VAR_22 & VAR_2) {
  if (VAR_21 & VAR_2)
   VAR_24 |= VAR_18;
  else
   VAR_24 &= ~VAR_18;
 }

 if (VAR_22 & VAR_0) {
  if (VAR_21 & VAR_0)
   VAR_24 |= VAR_10;
  else
   VAR_24 &= ~VAR_10;
 }

 if (VAR_22 & VAR_6) {
  if (VAR_21 & VAR_6)
   VAR_24 |= VAR_11;
  else
   VAR_24 &= ~VAR_11;
 }

 VAR_25 = FUNC_2(VAR_20, VAR_21);
 if (VAR_25)
  return VAR_25;

 FUNC_3(VAR_23, "Feature change 0x%llx -> 0x%llx (changed=0x%llx)\n",
        VAR_20->features, VAR_21, VAR_22);

 if (VAR_24 == VAR_23->dp.ctrl)
  return 0;

 FUNC_3(VAR_23, "NIC ctrl: 0x%x -> 0x%x\n", VAR_23->dp.ctrl, VAR_24);
 FUNC_4(VAR_23, VAR_9, VAR_24);
 VAR_25 = FUNC_1(VAR_23, VAR_19);
 if (VAR_25)
  return VAR_25;

 VAR_23->dp.ctrl = VAR_24;

 return 0;
}

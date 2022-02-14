
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ctrl; } ;
struct nfp_net {int cap; TYPE_1__ dp; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*) ;
 struct nfp_net* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct nfp_net*,int ) ;
 int FUNC_3 (struct nfp_net*,char*) ;
 int FUNC_4 (struct nfp_net*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_6)
{
 struct nfp_net *VAR_7 = FUNC_1(VAR_6);
 u32 VAR_8;

 VAR_8 = VAR_7->dp.ctrl;

 if (!FUNC_0(VAR_6) || VAR_6->flags & VAR_0)
  VAR_8 |= VAR_7->cap & VAR_3;
 else
  VAR_8 &= ~VAR_3;

 if (VAR_6->flags & VAR_1) {
  if (VAR_7->cap & VAR_4)
   VAR_8 |= VAR_4;
  else
   FUNC_3(VAR_7, "FW does not support promiscuous mode\n");
 } else {
  VAR_8 &= ~VAR_4;
 }

 if (VAR_8 == VAR_7->dp.ctrl)
  return;

 FUNC_4(VAR_7, VAR_2, VAR_8);
 FUNC_2(VAR_7, VAR_5);

 VAR_7->dp.ctrl = VAR_8;
}

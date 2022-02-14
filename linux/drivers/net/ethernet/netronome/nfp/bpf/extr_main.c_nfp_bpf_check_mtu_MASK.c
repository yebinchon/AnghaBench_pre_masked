
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrl; } ;
struct nfp_net {TYPE_1__ dp; } ;
struct nfp_app {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfp_net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nfp_net*,char*,unsigned int) ;
 int FUNC_2 (struct nfp_net*,int ) ;

__attribute__((used)) static int
FUNC_3(struct nfp_app *VAR_3, struct net_device *VAR_4, int VAR_5)
{
 struct nfp_net *VAR_6 = FUNC_0(VAR_4);
 unsigned int VAR_7;

 if (~VAR_6->dp.ctrl & VAR_2)
  return 0;

 VAR_7 = FUNC_2(VAR_6, VAR_1) * 64 - 32;
 if (VAR_5 > VAR_7) {
  FUNC_1(VAR_6, "BPF offload active, MTU over %u not supported\n",
   VAR_7);
  return -VAR_0;
 }
 return 0;
}

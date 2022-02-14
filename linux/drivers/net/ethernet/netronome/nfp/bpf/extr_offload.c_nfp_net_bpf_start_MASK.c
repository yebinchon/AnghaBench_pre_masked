
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrl; } ;
struct nfp_net {TYPE_1__ dp; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct nfp_net*,int ) ;
 int FUNC_2 (struct nfp_net*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct nfp_net *VAR_3, struct netlink_ext_ack *VAR_4)
{
 int VAR_5;


 VAR_3->dp.ctrl |= VAR_1;
 FUNC_2(VAR_3, VAR_0, VAR_3->dp.ctrl);
 VAR_5 = FUNC_1(VAR_3, VAR_2);
 if (VAR_5)
  FUNC_0(VAR_4,
       "FW command error while enabling BPF");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int ctrl; int netdev; } ;
struct nfp_net {TYPE_1__ dp; } ;
struct netlink_ext_ack {int dummy; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct bpf_prog*,int ) ;
 int FUNC_2 (struct nfp_net*,struct bpf_prog*,struct netlink_ext_ack*) ;
 int FUNC_3 (struct nfp_net*,struct netlink_ext_ack*) ;
 int FUNC_4 (struct nfp_net*) ;
 int FUNC_5 (struct nfp_net*,int ) ;

int FUNC_6(struct nfp_net *VAR_5, struct bpf_prog *VAR_6,
   bool VAR_7, struct netlink_ext_ack *VAR_8)
{
 int VAR_9;

 if (VAR_6 && !FUNC_1(VAR_6, VAR_5->dp.netdev))
  return -VAR_1;

 if (VAR_6 && VAR_7) {
  u8 VAR_10;

  VAR_10 = FUNC_5(VAR_5, VAR_3);
  if (!(VAR_10 & VAR_2)) {
   FUNC_0(VAR_8,
        "FW does not support live reload");
   return -VAR_0;
  }
 }


 if (!VAR_7 && VAR_5->dp.ctrl & VAR_4)
  return -VAR_0;

 if (VAR_7 && !VAR_6)
  return FUNC_4(VAR_5);

 VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_8);
 if (VAR_9)
  return VAR_9;

 if (!VAR_7)
  FUNC_3(VAR_5, VAR_8);

 return 0;
}

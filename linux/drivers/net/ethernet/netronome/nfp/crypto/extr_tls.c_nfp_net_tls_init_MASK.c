
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int crypto_ops; int mbox_cmsg_types; int crypto_enable_off; int mbox_len; } ;
struct TYPE_3__ {struct net_device* netdev; } ;
struct nfp_net {TYPE_2__ tlv_caps; TYPE_1__ dp; } ;
struct nfp_crypto_req_add_v6 {int dummy; } ;
struct net_device {int * tlsdev_ops; int features; int hw_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nfp_net*,int ) ;
 int FUNC_1 (struct nfp_net*,int) ;
 int VAR_7 ;
 int FUNC_2 (struct nfp_net*) ;
 int FUNC_3 (struct nfp_net*) ;
 int FUNC_4 (struct nfp_net*) ;
 int FUNC_5 (struct nfp_net*,char*,int ) ;
 int FUNC_6 (struct nfp_net*,int ,int ) ;

int FUNC_7(struct nfp_net *VAR_8)
{
 struct net_device *VAR_9 = VAR_8->dp.netdev;
 int VAR_10;

 if (!(VAR_8->tlv_caps.crypto_ops & VAR_4))
  return 0;

 if ((VAR_8->tlv_caps.mbox_cmsg_types & VAR_3) !=
     VAR_3)
  return 0;

 if (!FUNC_1(VAR_8, sizeof(struct nfp_crypto_req_add_v6))) {
  FUNC_5(VAR_8, "disabling TLS offload - mbox too small: %d\n",
   VAR_8->tlv_caps.mbox_len);
  return 0;
 }

 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10)
  return VAR_10;

 FUNC_3(VAR_8);
 FUNC_6(VAR_8, VAR_8->tlv_caps.crypto_enable_off, 0);
 VAR_10 = FUNC_0(VAR_8, VAR_2);
 FUNC_4(VAR_8);
 if (VAR_10)
  return VAR_10;

 if (VAR_8->tlv_caps.crypto_ops & VAR_5) {
  VAR_9->hw_features |= VAR_0;
  VAR_9->features |= VAR_0;
 }
 if (VAR_8->tlv_caps.crypto_ops & VAR_6) {
  VAR_9->hw_features |= VAR_1;
  VAR_9->features |= VAR_1;
 }

 VAR_9->tlsdev_ops = &VAR_7;

 return 0;
}

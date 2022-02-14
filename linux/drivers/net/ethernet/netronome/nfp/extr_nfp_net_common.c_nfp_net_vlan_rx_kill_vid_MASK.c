
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ mbox_off; } ;
struct nfp_net {TYPE_1__ tlv_caps; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct nfp_net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nfp_net*,int ) ;
 int FUNC_2 (struct nfp_net*,int const) ;
 int FUNC_3 (struct nfp_net*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_5, __be16 VAR_6, u16 VAR_7)
{
 const u32 VAR_8 = VAR_1;
 struct nfp_net *VAR_9 = FUNC_0(VAR_5);
 int VAR_10;




 if (!VAR_7)
  return 0;

 VAR_10 = FUNC_1(VAR_9, VAR_3);
 if (VAR_10)
  return VAR_10;

 FUNC_3(VAR_9, VAR_9->tlv_caps.mbox_off + VAR_4, VAR_7);
 FUNC_3(VAR_9, VAR_9->tlv_caps.mbox_off + VAR_2,
    VAR_0);

 return FUNC_2(VAR_9, VAR_8);
}

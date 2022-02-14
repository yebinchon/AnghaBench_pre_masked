
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ mbox_off; } ;
struct nfp_net {TYPE_1__ tlv_caps; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfp_net*,int ) ;
 int FUNC_1 (struct nfp_net*,scalar_t__,scalar_t__) ;

void FUNC_2(struct nfp_net *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = VAR_2->tlv_caps.mbox_off;

 FUNC_1(VAR_2, VAR_4 + VAR_0, VAR_3);

 FUNC_0(VAR_2, VAR_1);
}

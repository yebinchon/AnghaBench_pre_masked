
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mbox_len; } ;
struct nfp_net {TYPE_1__ tlv_caps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct nfp_net*) ;
 int FUNC_1 (struct nfp_net*,char*,unsigned int,scalar_t__) ;

int FUNC_2(struct nfp_net *VAR_2, unsigned int VAR_3)
{
 if (VAR_2->tlv_caps.mbox_len < VAR_1 + VAR_3) {
  FUNC_1(VAR_2, "mailbox too small for %u of data (%u)\n",
         VAR_3, VAR_2->tlv_caps.mbox_len);
  return -VAR_0;
 }

 FUNC_0(VAR_2);
 return 0;
}

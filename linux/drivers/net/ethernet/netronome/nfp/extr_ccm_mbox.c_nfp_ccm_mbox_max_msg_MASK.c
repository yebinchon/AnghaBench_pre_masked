
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int mbox_len; } ;
struct nfp_net {TYPE_1__ tlv_caps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static u32 FUNC_1(struct nfp_net *VAR_1)
{
 return FUNC_0(VAR_1->tlv_caps.mbox_len, 4) -
  VAR_0 -
  4 * 2;
}

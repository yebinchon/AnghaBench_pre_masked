
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_dump {int version; int len; } ;
struct TYPE_2__ {int hwrm_fw_maj_8b; int hwrm_fw_min_8b; int hwrm_fw_bld_8b; int hwrm_fw_rsvd_8b; } ;
struct bnxt {int hwrm_spec_code; TYPE_1__ ver_resp; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt*,int *,int *) ;
 struct bnxt* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, struct ethtool_dump *VAR_2)
{
 struct bnxt *VAR_3 = FUNC_1(VAR_1);

 if (VAR_3->hwrm_spec_code < 0x10801)
  return -VAR_0;

 VAR_2->version = VAR_3->ver_resp.hwrm_fw_maj_8b << 24 |
   VAR_3->ver_resp.hwrm_fw_min_8b << 16 |
   VAR_3->ver_resp.hwrm_fw_bld_8b << 8 |
   VAR_3->ver_resp.hwrm_fw_rsvd_8b;

 return FUNC_0(VAR_3, ((void*)0), &VAR_2->len);
}

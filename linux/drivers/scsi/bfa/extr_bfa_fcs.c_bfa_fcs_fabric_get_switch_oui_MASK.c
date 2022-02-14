
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wwn_t ;
typedef int u8 ;
typedef int u16 ;
struct bfa_fcs_fabric_s {TYPE_1__* lps; } ;
struct TYPE_2__ {int pr_nwwn; } ;



u16
FUNC_0(struct bfa_fcs_fabric_s *VAR_0)
{
 wwn_t VAR_1;
 u8 *VAR_2;
 u16 VAR_3;

 VAR_1 = VAR_0->lps->pr_nwwn;

 VAR_2 = (u8 *)&VAR_1;
 VAR_3 = (VAR_2[3] << 8) | VAR_2[4];

 return VAR_3;
}

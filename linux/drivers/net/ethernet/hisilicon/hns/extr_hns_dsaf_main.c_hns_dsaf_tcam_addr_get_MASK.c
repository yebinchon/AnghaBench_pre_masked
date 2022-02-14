
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int mac_5; int mac_4; } ;
struct TYPE_6__ {TYPE_1__ bits; } ;
struct TYPE_8__ {int mac_3; int mac_2; int mac_1; int mac_0; } ;
struct TYPE_7__ {TYPE_4__ bits; } ;
struct dsaf_drv_tbl_tcam_key {TYPE_2__ low; TYPE_3__ high; } ;



__attribute__((used)) static void
FUNC_0(struct dsaf_drv_tbl_tcam_key *VAR_0, u8 *VAR_1)
{
 VAR_1[0] = VAR_0->high.bits.mac_0;
 VAR_1[1] = VAR_0->high.bits.mac_1;
 VAR_1[2] = VAR_0->high.bits.mac_2;
 VAR_1[3] = VAR_0->high.bits.mac_3;
 VAR_1[4] = VAR_0->low.bits.mac_4;
 VAR_1[5] = VAR_0->low.bits.mac_5;
}

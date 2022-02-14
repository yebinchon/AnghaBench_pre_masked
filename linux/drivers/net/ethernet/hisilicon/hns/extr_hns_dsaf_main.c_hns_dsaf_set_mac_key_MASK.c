
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef void* u16 ;
struct TYPE_7__ {scalar_t__ port_vlan; void* mac_5; void* mac_4; } ;
struct TYPE_8__ {TYPE_3__ bits; } ;
struct TYPE_5__ {void* mac_3; void* mac_2; void* mac_1; void* mac_0; } ;
struct TYPE_6__ {TYPE_1__ bits; } ;
struct dsaf_drv_tbl_tcam_key {TYPE_4__ low; TYPE_2__ high; } ;
struct dsaf_device {scalar_t__ dsaf_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int ,int ,void*) ;

__attribute__((used)) static void FUNC_1(
 struct dsaf_device *VAR_5,
 struct dsaf_drv_tbl_tcam_key *VAR_6, u16 VAR_7, u8 VAR_8,
 u8 *VAR_9)
{
 u8 VAR_10;

 if (VAR_5->dsaf_mode <= VAR_0)

  VAR_10 = 0;
 else

  VAR_10 = VAR_8;

 VAR_6->high.bits.mac_0 = VAR_9[0];
 VAR_6->high.bits.mac_1 = VAR_9[1];
 VAR_6->high.bits.mac_2 = VAR_9[2];
 VAR_6->high.bits.mac_3 = VAR_9[3];
 VAR_6->low.bits.mac_4 = VAR_9[4];
 VAR_6->low.bits.mac_5 = VAR_9[5];
 VAR_6->low.bits.port_vlan = 0;
 FUNC_0(VAR_6->low.bits.port_vlan, VAR_3,
         VAR_4, VAR_7);
 FUNC_0(VAR_6->low.bits.port_vlan, VAR_1,
         VAR_2, VAR_10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int* a; } ;
struct TYPE_11__ {TYPE_4__ group_addr; } ;
struct TYPE_9__ {int* a; } ;
struct TYPE_12__ {TYPE_5__ fp; TYPE_3__ fddi_home_addr; } ;
struct TYPE_8__ {TYPE_1__* m; } ;
struct s_smc {TYPE_6__ hw; TYPE_2__ mib; } ;
struct TYPE_7__ {long fddiMACT_Req; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 int FUNC_1 (int ,unsigned short) ;

__attribute__((used)) static void FUNC_2(struct s_smc *VAR_13)
{
 long VAR_14 = VAR_13->mib.m[VAR_10].fddiMACT_Req ;

 FUNC_1(FUNC_0(VAR_7),VAR_12) ;
 FUNC_1(FUNC_0(VAR_4),(unsigned short)((VAR_13->hw.fddi_home_addr.a[4]<<8) +
     VAR_13->hw.fddi_home_addr.a[5])) ;
 FUNC_1(FUNC_0(VAR_3),(unsigned short)((VAR_13->hw.fddi_home_addr.a[2]<<8) +
     VAR_13->hw.fddi_home_addr.a[3])) ;
 FUNC_1(FUNC_0(VAR_5),(unsigned short)((VAR_13->hw.fddi_home_addr.a[0]<<8) +
     VAR_13->hw.fddi_home_addr.a[1])) ;

 FUNC_1(FUNC_0(VAR_6),VAR_11) ;

 FUNC_1(FUNC_0(VAR_1),(unsigned short)((VAR_13->hw.fp.group_addr.a[4]<<8) +
     VAR_13->hw.fp.group_addr.a[5])) ;
 FUNC_1(FUNC_0(VAR_0),(unsigned short)((VAR_13->hw.fp.group_addr.a[2]<<8) +
     VAR_13->hw.fp.group_addr.a[3])) ;
 FUNC_1(FUNC_0(VAR_2),(unsigned short)((VAR_13->hw.fp.group_addr.a[0]<<8) +
     VAR_13->hw.fp.group_addr.a[1])) ;


 FUNC_1(FUNC_0(VAR_9),(unsigned short)(VAR_14>>16)) ;
 FUNC_1(FUNC_0(VAR_8),(unsigned short)VAR_14) ;
}

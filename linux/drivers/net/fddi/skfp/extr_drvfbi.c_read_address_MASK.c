
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u_char ;
struct TYPE_7__ {void** a; } ;
struct TYPE_6__ {void** a; } ;
struct TYPE_8__ {TYPE_3__ fddi_phys_addr; TYPE_2__ fddi_canon_addr; TYPE_3__ fddi_home_addr; } ;
struct s_smc {TYPE_4__ hw; TYPE_1__* y; } ;
struct TYPE_5__ {char* pmd_type; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (int ) ;

void FUNC_3(struct s_smc *VAR_7, u_char *VAR_8)
{
 char VAR_9 ;
 char VAR_10 ;
 int VAR_11 ;
 VAR_9 = FUNC_2(FUNC_0(VAR_0)) ;
 VAR_10 = FUNC_2(FUNC_0(VAR_2)) ;

 VAR_7->y[VAR_3].pmd_type[VAR_5] =
 VAR_7->y[VAR_4].pmd_type[VAR_5] = VAR_9 ;
 VAR_7->y[VAR_3].pmd_type[VAR_6 ] =
 VAR_7->y[VAR_4].pmd_type[VAR_6 ] = VAR_10 ;

 if (VAR_8) {
  for (VAR_11 = 0; VAR_11 < 6 ;VAR_11++) {
   VAR_7->hw.fddi_canon_addr.a[VAR_11] = VAR_8[VAR_11] ;
   VAR_7->hw.fddi_home_addr.a[VAR_11] = FUNC_1(VAR_8[VAR_11]);
  }
  return ;
 }
 VAR_7->hw.fddi_home_addr = VAR_7->hw.fddi_phys_addr ;

 for (VAR_11 = 0; VAR_11 < 6 ;VAR_11++) {
  VAR_7->hw.fddi_canon_addr.a[VAR_11] =
   FUNC_1(VAR_7->hw.fddi_phys_addr.a[VAR_11]);
 }
}

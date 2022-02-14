
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ shmem2_base; } ;
struct bnx2x {int afex_def_vlan_tag; TYPE_1__ common; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bnx2x*,int ) ;
 int FUNC_1 (struct bnx2x*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_7, int VAR_8)
{
 if (((VAR_8 == VAR_0) ||
      (VAR_8 == VAR_1)) &&
     (VAR_7->common.shmem2_base)) {
  if (FUNC_0(VAR_7, VAR_6))
   FUNC_1(VAR_7, VAR_6,
      (VAR_4 |
       VAR_3));
  if (FUNC_0(VAR_7, VAR_5))
   FUNC_1(VAR_7, VAR_5,
      VAR_2);
 }


 VAR_7->afex_def_vlan_tag = -1;
}

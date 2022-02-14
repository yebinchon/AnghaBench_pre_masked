
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int shmem2_base; int shmem_base; } ;
struct bnx2x {TYPE_2__ common; } ;
struct TYPE_4__ {int config2; } ;
struct TYPE_6__ {TYPE_1__ shared_hw_config; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct bnx2x*,int ) ;
 int FUNC_5 (struct bnx2x*,int ,int ,int) ;
 int FUNC_6 (struct bnx2x*,int,int ) ;
 TYPE_3__ VAR_11 ;

__attribute__((used)) static void FUNC_7(struct bnx2x *VAR_12)
{
 int VAR_13;
 u32 VAR_14;
 int VAR_15;

 if (FUNC_0(VAR_12))
  return;

 VAR_13 = 0;
 VAR_14 = FUNC_4(VAR_12, VAR_11.shared_hw_config.config2) &
       VAR_9;

 if (VAR_14 == VAR_8)
  VAR_13 = 1;






 else if (VAR_14 == VAR_10)
  for (VAR_15 = VAR_6; VAR_15 < VAR_7; VAR_15++) {
   VAR_13 |=
    FUNC_5(
     VAR_12,
     VAR_12->common.shmem_base,
     VAR_12->common.shmem2_base,
     VAR_15);
  }

 FUNC_1(VAR_5, "fan detection setting: %d\n", VAR_13);

 if (VAR_13 == 0)
  return;


 FUNC_6(VAR_12, VAR_4, VAR_2);


 VAR_14 = FUNC_2(VAR_12, VAR_1);
 VAR_14 |= (VAR_4 << VAR_3);
 FUNC_3(VAR_12, VAR_1, VAR_14);


 VAR_14 = FUNC_2(VAR_12, VAR_0);
 VAR_14 |= VAR_4;
 FUNC_3(VAR_12, VAR_0, VAR_14);
}

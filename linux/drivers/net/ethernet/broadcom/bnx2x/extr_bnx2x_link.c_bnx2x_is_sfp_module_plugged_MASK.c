
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct link_params {int port; int shmem_base; int chip_id; struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*,int ,int ) ;
 scalar_t__ FUNC_1 (struct bnx2x*,int ,int ,int ,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct bnx2x_phy *VAR_0,
           struct link_params *VAR_1)
{
 struct bnx2x *VAR_2 = VAR_1->bp;
 u8 VAR_3, VAR_4;
 u32 VAR_5;
 if (FUNC_1(VAR_2, VAR_1->chip_id,
          VAR_1->shmem_base, VAR_1->port,
          &VAR_3, &VAR_4) != 0)
  return 0;
 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);


 if (VAR_5 == 0)
  return 1;
 else
  return 0;
}

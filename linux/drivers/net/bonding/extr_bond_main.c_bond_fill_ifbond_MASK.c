
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifbond {int num_slaves; int miimon; int bond_mode; } ;
struct TYPE_2__ {int miimon; } ;
struct bonding {int slave_cnt; TYPE_1__ params; } ;


 int FUNC_0 (struct bonding*) ;

__attribute__((used)) static void FUNC_1(struct bonding *VAR_0, struct ifbond *VAR_1)
{
 VAR_1->bond_mode = FUNC_0(VAR_0);
 VAR_1->miimon = VAR_0->params.miimon;
 VAR_1->num_slaves = VAR_0->slave_cnt;
}

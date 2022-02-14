
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iwl_trans {int dev; } ;


 int FUNC_0 (struct iwl_trans*,int,int) ;
 int FUNC_1 (int ,int,int) ;

void FUNC_2(struct iwl_trans *VAR_0, u64 VAR_1, u64 VAR_2)
{
 FUNC_1(VAR_0->dev, VAR_1, VAR_2);
 FUNC_0(VAR_0, VAR_1, VAR_2 & 0xffffffff);
 FUNC_0(VAR_0, VAR_1 + 4, VAR_2 >> 32);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct r8192_priv {int up; int SwChnlStep; int SwChnlStage; } ;
struct net_device {int dummy; } ;


 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ,int *,int *,int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0, u8 VAR_1)
{
 struct r8192_priv *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3 = 0;

 while (!FUNC_1(VAR_0, VAR_1, &VAR_2->SwChnlStage,
          &VAR_2->SwChnlStep, &VAR_3)) {
  if (!VAR_2->up)
   break;
 }
}

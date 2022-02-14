
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {TYPE_2__* netdev; } ;
struct nfp_net {TYPE_1__ dp; } ;
struct TYPE_4__ {int perm_addr; int dev_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfp_net*,scalar_t__) ;
 int FUNC_4 (struct nfp_net*,scalar_t__) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct nfp_net *VAR_2)
{
 u8 VAR_3[VAR_0];

 FUNC_6(FUNC_3(VAR_2, VAR_1 + 0), &VAR_3[0]);
 FUNC_5(FUNC_4(VAR_2, VAR_1 + 6), &VAR_3[4]);

 if (!FUNC_2(VAR_3)) {
  FUNC_0(VAR_2->dp.netdev);
  return;
 }

 FUNC_1(VAR_2->dp.netdev->dev_addr, VAR_3);
 FUNC_1(VAR_2->dp.netdev->perm_addr, VAR_3);
}

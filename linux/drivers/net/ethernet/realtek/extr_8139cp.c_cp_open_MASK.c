
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct cp_private {int napi; int mii_if; TYPE_1__* pdev; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct cp_private*) ;
 int FUNC_1 (struct cp_private*) ;
 int FUNC_2 (struct cp_private*) ;
 int FUNC_3 (struct cp_private*) ;
 int VAR_1 ;
 int FUNC_4 (struct cp_private*) ;
 int VAR_2 ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct cp_private* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct cp_private*,int ,struct net_device*,char*) ;
 int FUNC_11 (struct cp_private*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int const,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_14 (struct net_device *VAR_3)
{
 struct cp_private *VAR_4 = FUNC_8(VAR_3);
 const int VAR_5 = VAR_4->pdev->irq;
 int VAR_6;

 FUNC_10(VAR_4, VAR_2, VAR_3, "enabling interface\n");

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_7(&VAR_4->napi);

 FUNC_3(VAR_4);

 VAR_6 = FUNC_13(VAR_5, VAR_1, VAR_0, VAR_3->name, VAR_3);
 if (VAR_6)
  goto err_out_hw;

 FUNC_1(VAR_4);

 FUNC_9(VAR_3);
 FUNC_5(&VAR_4->mii_if, FUNC_11(VAR_4), 1);
 FUNC_12(VAR_3);

 return 0;

err_out_hw:
 FUNC_6(&VAR_4->napi);
 FUNC_4(VAR_4);
 FUNC_2(VAR_4);
 return VAR_6;
}

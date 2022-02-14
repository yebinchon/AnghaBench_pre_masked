
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xircom_private {int open; TYPE_1__* pdev; } ;
struct net_device {int name; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*,int const) ;
 struct xircom_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int const,int ,int ,int ,struct net_device*) ;
 int VAR_1 ;
 int FUNC_3 (struct xircom_private*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2)
{
 struct xircom_private *VAR_3 = FUNC_1(VAR_2);
 const int VAR_4 = VAR_3->pdev->irq;
 int VAR_5;

 FUNC_0(VAR_2, "xircom cardbus adaptor found, using irq %i\n", VAR_4);
 VAR_5 = FUNC_2(VAR_4, VAR_1, VAR_0, VAR_2->name, VAR_2);
 if (VAR_5)
  return VAR_5;

 FUNC_3(VAR_3);
 VAR_3->open = 1;

 return 0;
}

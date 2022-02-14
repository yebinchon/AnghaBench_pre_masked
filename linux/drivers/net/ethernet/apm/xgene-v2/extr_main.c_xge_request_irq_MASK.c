
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq; } ;
struct xge_pdata {int irq_name; TYPE_1__ resources; } ;
struct net_device {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*,int ) ;
 struct xge_pdata* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int ,int ,struct xge_pdata*) ;
 int FUNC_3 (int ,int ,char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2)
{
 struct xge_pdata *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 FUNC_3(VAR_3->irq_name, VAR_0, "%s", VAR_2->name);

 VAR_4 = FUNC_2(VAR_3->resources.irq, VAR_1, 0, VAR_3->irq_name,
     VAR_3);
 if (VAR_4)
  FUNC_0(VAR_2, "Failed to request irq %s\n", VAR_3->irq_name);

 return VAR_4;
}

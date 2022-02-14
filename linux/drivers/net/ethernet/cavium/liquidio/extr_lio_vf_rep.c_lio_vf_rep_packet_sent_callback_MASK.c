
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {struct net_device* dev; } ;
struct octeon_soft_command {int iq_no; int datasize; int dmadptr; struct sk_buff* ctxptr; } ;
struct octeon_device {TYPE_1__* pci_dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct octeon_device*,struct octeon_soft_command*) ;
 scalar_t__ FUNC_5 (struct octeon_device*,int ) ;

__attribute__((used)) static void
FUNC_6(struct octeon_device *VAR_1,
    u32 VAR_2, void *VAR_3)
{
 struct octeon_soft_command *VAR_4 = (struct octeon_soft_command *)VAR_3;
 struct sk_buff *VAR_5 = VAR_4->ctxptr;
 struct net_device *VAR_6 = VAR_5->dev;
 u32 VAR_7;

 FUNC_1(&VAR_1->pci_dev->dev, VAR_4->dmadptr,
    VAR_4->datasize, VAR_0);
 FUNC_0(VAR_5);
 VAR_7 = VAR_4->iq_no;
 FUNC_4(VAR_1, VAR_4);

 if (FUNC_5(VAR_1, VAR_7))
  return;

 if (FUNC_2(VAR_6))
  FUNC_3(VAR_6);
}

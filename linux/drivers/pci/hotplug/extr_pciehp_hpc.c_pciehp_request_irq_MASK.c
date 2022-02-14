
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct controller {int poll_thread; TYPE_1__* pcie; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct controller*,char*,int) ;
 int FUNC_2 (int *,struct controller*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int,int ,int ,int ,char*,struct controller*) ;
 int FUNC_4 (struct controller*) ;

__attribute__((used)) static inline int FUNC_5(struct controller *VAR_5)
{
 int VAR_6, VAR_7 = VAR_5->pcie->irq;

 if (VAR_4) {
  VAR_5->poll_thread = FUNC_2(&VAR_3, VAR_5,
      "pciehp_poll-%s",
      FUNC_4(VAR_5));
  return FUNC_0(VAR_5->poll_thread);
 }


 VAR_6 = FUNC_3(VAR_7, VAR_1, VAR_2,
          VAR_0, "pciehp", VAR_5);
 if (VAR_6)
  FUNC_1(VAR_5, "Cannot get irq %d for the hotplug controller\n",
    VAR_7);
 return VAR_6;
}

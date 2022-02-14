
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; int irq; } ;
struct TYPE_2__ {int ne2k_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4)
{
 int VAR_5 = FUNC_2(VAR_4->irq, VAR_2, VAR_1, VAR_4->name, VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_3.ne2k_flags & VAR_0)
  FUNC_1(VAR_4);

 FUNC_0(VAR_4);
 return 0;
}

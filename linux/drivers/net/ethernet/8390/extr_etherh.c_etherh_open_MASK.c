
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int if_port; int name; int irq; } ;
struct ei_device {scalar_t__ interface_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int) ;
 struct ei_device* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_5)
{
 struct ei_device *VAR_6 = FUNC_5(VAR_5);

 if (FUNC_6(VAR_5->irq, VAR_4, 0, VAR_5->name, VAR_5))
  return -VAR_0;






 VAR_6->interface_num = 0;





 if (VAR_5->flags & VAR_1) {
  VAR_5->if_port = VAR_3;
  FUNC_3(VAR_5);
  FUNC_4(1);
  if (!FUNC_1(VAR_5)) {
   VAR_5->if_port = VAR_2;
   FUNC_3(VAR_5);
  }
 } else
  FUNC_3(VAR_5);

 FUNC_2(VAR_5);
 FUNC_0(VAR_5);

 return 0;
}

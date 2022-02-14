
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; int name; int irq; } ;
struct hp100_private {scalar_t__ lan_type; int hub_status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*) ;
 struct hp100_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (char*,int ,...) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_5)
{
 int VAR_6 = VAR_5->base_addr;
 struct hp100_private *VAR_7 = FUNC_6(VAR_5);






 FUNC_4(VAR_3);
 FUNC_3(0xfefe, VAR_1);

 FUNC_5(VAR_5);

 if (VAR_7->lan_type == VAR_0)
  VAR_7->hub_status = FUNC_2(VAR_5, 0);

 FUNC_7(VAR_5);

 FUNC_0(VAR_5->irq, VAR_5);






 return 0;
}

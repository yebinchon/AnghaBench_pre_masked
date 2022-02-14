
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rocker_port {TYPE_1__* dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int flags; int proto_down; } ;


 int VAR_0 ;
 struct rocker_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct rocker_port*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
      bool VAR_2)
{
 struct rocker_port *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->dev->flags & VAR_0)
  FUNC_1(VAR_3, !VAR_2);
 VAR_3->dev->proto_down = VAR_2;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lance_regs {int rdp; int rap; } ;
struct lance_private {int multicast_timer; struct lance_regs* ll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct net_device*) ;
 struct lance_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3)
{
 struct lance_private *VAR_4 = FUNC_2(VAR_3);
 volatile struct lance_regs *VAR_5 = VAR_4->ll;

 FUNC_3(VAR_3);
 FUNC_0(&VAR_4->multicast_timer);


 VAR_5->rap = VAR_2;
 VAR_5->rdp = VAR_1;

 FUNC_1(VAR_0, VAR_3);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int carrier; int loopback; } ;
struct net_device {int dummy; } ;


 struct port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, int VAR_2)
{
 struct net_device *VAR_3 = VAR_1;
 struct port *VAR_4 = FUNC_0(VAR_3);
 unsigned long VAR_5;

 FUNC_3(&VAR_0, VAR_5);
 VAR_4->carrier = VAR_2;
 if (!VAR_4->loopback) {
  if (VAR_2)
   FUNC_2(VAR_3);
  else
   FUNC_1(VAR_3);
 }
 FUNC_4(&VAR_0, VAR_5);
}

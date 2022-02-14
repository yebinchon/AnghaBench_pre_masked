
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slcan {scalar_t__ tty; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 struct slcan* FUNC_1 (struct net_device*) ;
 struct net_device** VAR_2 ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_3;
 struct net_device *VAR_4;
 struct slcan *VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = VAR_2[VAR_3];
  if (VAR_4 == ((void*)0))
   break;

  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5->tty)
   continue;
  if (VAR_4->flags & VAR_0)
   FUNC_0(VAR_4);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif {int status; struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (struct xenvif*) ;

void FUNC_6(struct xenvif *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->dev;

 FUNC_2();
 if (FUNC_4(VAR_0, &VAR_1->status)) {
  FUNC_0(VAR_2);
  if (FUNC_1(VAR_2))
   FUNC_5(VAR_1);
 }
 FUNC_3();
}

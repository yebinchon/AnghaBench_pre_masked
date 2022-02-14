
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif {int status; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct xenvif* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (struct xenvif*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 struct xenvif *VAR_2 = FUNC_0(VAR_1);
 if (FUNC_2(VAR_0, &VAR_2->status))
  FUNC_3(VAR_2);
 FUNC_1(VAR_1);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan78xx_net {int net; int wq; int flags; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct lan78xx_net *VAR_0, int VAR_1)
{
 FUNC_2(VAR_1, &VAR_0->flags);
 if (!FUNC_1(&VAR_0->wq, 0))
  FUNC_0(VAR_0->net, "kevent %d may have been dropped\n", VAR_1);
}

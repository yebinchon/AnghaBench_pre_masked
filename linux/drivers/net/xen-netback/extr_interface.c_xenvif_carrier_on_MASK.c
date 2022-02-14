
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct xenvif {TYPE_1__* dev; int status; int can_sg; } ;
struct TYPE_4__ {scalar_t__ mtu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct xenvif*) ;

void FUNC_7(struct xenvif *VAR_2)
{
 FUNC_3();
 if (!VAR_2->can_sg && VAR_2->dev->mtu > VAR_0)
  FUNC_0(VAR_2->dev, VAR_0);
 FUNC_1(VAR_2->dev);
 FUNC_5(VAR_1, &VAR_2->status);
 if (FUNC_2(VAR_2->dev))
  FUNC_6(VAR_2);
 FUNC_4();
}

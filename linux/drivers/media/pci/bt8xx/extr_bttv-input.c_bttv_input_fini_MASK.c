
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bttv {TYPE_1__* remote; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct bttv*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct bttv *VAR_0)
{
 if (VAR_0->remote == ((void*)0))
  return;

 FUNC_0(VAR_0);
 FUNC_2(VAR_0->remote->dev);
 FUNC_1(VAR_0->remote);
 VAR_0->remote = ((void*)0);
}

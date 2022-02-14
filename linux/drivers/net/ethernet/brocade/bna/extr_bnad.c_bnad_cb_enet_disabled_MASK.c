
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enet_comp; } ;
struct bnad {TYPE_1__ bnad_completions; int netdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct bnad *VAR_1 = (struct bnad *)VAR_0;

 FUNC_1(VAR_1->netdev);
 FUNC_0(&VAR_1->bnad_completions.enet_comp);
}

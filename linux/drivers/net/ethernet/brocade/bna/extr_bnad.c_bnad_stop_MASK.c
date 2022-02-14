
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int enet_comp; } ;
struct TYPE_3__ {int enet; } ;
struct bnad {int conf_mutex; TYPE_2__ bnad_completions; int bna_lock; TYPE_1__ bna; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct bnad*,int ) ;
 int FUNC_2 (struct bnad*,int ) ;
 int FUNC_3 (struct bnad*) ;
 int FUNC_4 (struct bnad*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct bnad* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(struct net_device *VAR_2)
{
 struct bnad *VAR_3 = FUNC_8(VAR_2);
 unsigned long VAR_4;

 FUNC_6(&VAR_3->conf_mutex);


 FUNC_4(VAR_3);

 FUNC_5(&VAR_3->bnad_completions.enet_comp);

 FUNC_9(&VAR_3->bna_lock, VAR_4);
 FUNC_0(&VAR_3->bna.enet, VAR_0,
   VAR_1);
 FUNC_10(&VAR_3->bna_lock, VAR_4);

 FUNC_11(&VAR_3->bnad_completions.enet_comp);

 FUNC_2(VAR_3, 0);
 FUNC_1(VAR_3, 0);


 FUNC_3(VAR_3);

 FUNC_7(&VAR_3->conf_mutex);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int irq; } ;
struct TYPE_2__ {int ipg_timer; } ;
struct amd8111e_priv {int options; scalar_t__ opened; int lock; TYPE_1__ ipg_data; int amd8111e_net_dev; int napi; } ;


 int VAR_0 ;
 int FUNC_0 (struct amd8111e_priv*) ;
 int FUNC_1 (struct amd8111e_priv*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct amd8111e_priv*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct net_device*) ;
 int FUNC_7 (int *) ;
 struct amd8111e_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_1)
{
 struct amd8111e_priv *VAR_2 = FUNC_8(VAR_1);
 FUNC_10(VAR_1);

 FUNC_7(&VAR_2->napi);

 FUNC_11(&VAR_2->lock);

 FUNC_0(VAR_2);
 FUNC_4(VAR_2);


 FUNC_2(VAR_2->amd8111e_net_dev);

 FUNC_9(VAR_2->amd8111e_net_dev);


 if(VAR_2->options & VAR_0)
  FUNC_5(&VAR_2->ipg_data.ipg_timer);

 FUNC_12(&VAR_2->lock);
 FUNC_6(VAR_1->irq, VAR_1);
 FUNC_1(VAR_2);


 FUNC_3(VAR_1);
 VAR_2->opened = 0;
 return 0;
}

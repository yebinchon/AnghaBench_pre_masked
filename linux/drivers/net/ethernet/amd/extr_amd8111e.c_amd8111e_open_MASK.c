
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {scalar_t__ irq; int name; } ;
struct TYPE_2__ {int ipg_timer; } ;
struct amd8111e_priv {int options; int opened; int lock; TYPE_1__ ipg_data; int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct amd8111e_priv*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__,struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*,char*) ;
 struct amd8111e_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (scalar_t__,int ,int ,int ,struct net_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_5)
{
 struct amd8111e_priv *VAR_6 = FUNC_7(VAR_5);

 if(VAR_5->irq ==0 || FUNC_9(VAR_5->irq, VAR_4, VAR_2,
      VAR_5->name, VAR_5))
  return -VAR_0;

 FUNC_5(&VAR_6->napi);

 FUNC_10(&VAR_6->lock);

 FUNC_1(VAR_6);

 if(FUNC_2(VAR_5)){
  FUNC_11(&VAR_6->lock);
  FUNC_4(&VAR_6->napi);
  if (VAR_5->irq)
   FUNC_3(VAR_5->irq, VAR_5);
  return -VAR_1;
 }

 if(VAR_6->options & VAR_3){
  FUNC_0(&VAR_6->ipg_data.ipg_timer);
  FUNC_6(VAR_5, "Dynamic IPG Enabled\n");
 }

 VAR_6->opened = 1;

 FUNC_11(&VAR_6->lock);

 FUNC_8(VAR_5);

 return 0;
}

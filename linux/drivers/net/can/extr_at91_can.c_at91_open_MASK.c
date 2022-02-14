
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; int irq; } ;
struct at91_priv {int clk; int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 struct at91_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_4)
{
 struct at91_priv *VAR_5 = FUNC_6(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_3(VAR_5->clk);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_8(VAR_4);
 if (VAR_6)
  goto out;


 if (FUNC_9(VAR_4->irq, VAR_3, VAR_2,
   VAR_4->name, VAR_4)) {
  VAR_6 = -VAR_1;
  goto out_close;
 }

 FUNC_1(VAR_4, VAR_0);


 FUNC_0(VAR_4);
 FUNC_5(&VAR_5->napi);
 FUNC_7(VAR_4);

 return 0;

 out_close:
 FUNC_4(VAR_4);
 out:
 FUNC_2(VAR_5->clk);

 return VAR_6;
}

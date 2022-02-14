
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typhoon {int napi; } ;
struct net_device {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct typhoon* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct typhoon*,int ) ;
 int FUNC_6 (struct typhoon*) ;
 int FUNC_7 (struct typhoon*) ;
 scalar_t__ FUNC_8 (struct typhoon*,int ,int ) ;
 scalar_t__ FUNC_9 (struct typhoon*,int ) ;

__attribute__((used)) static int
FUNC_10(struct net_device *VAR_3)
{
 struct typhoon *VAR_4 = FUNC_3(VAR_3);

 FUNC_4(VAR_3);
 FUNC_1(&VAR_4->napi);

 if(FUNC_9(VAR_4, VAR_2) < 0)
  FUNC_2(VAR_3, "unable to stop runtime\n");


 FUNC_0(VAR_3->irq, VAR_3);

 FUNC_6(VAR_4);
 FUNC_7(VAR_4);

 if(FUNC_5(VAR_4, VAR_1) < 0)
  FUNC_2(VAR_3, "unable to boot sleep image\n");

 if(FUNC_8(VAR_4, VAR_0, 0) < 0)
  FUNC_2(VAR_3, "unable to put card to sleep\n");

 return 0;
}

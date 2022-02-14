
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ionic_lif {int state; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ionic_lif*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct ionic_lif *VAR_2)
{
 bool VAR_3;
 int VAR_4 = 0;


 FUNC_5(VAR_2->netdev);

 if (!FUNC_3(VAR_2, VAR_1))
  return -VAR_0;

 VAR_3 = FUNC_4(VAR_2->netdev);
 if (VAR_3)
  VAR_4 = FUNC_2(VAR_2->netdev);
 if (!VAR_4 && VAR_3)
  FUNC_1(VAR_2->netdev);

 FUNC_0(VAR_1, VAR_2->state);

 return VAR_4;
}

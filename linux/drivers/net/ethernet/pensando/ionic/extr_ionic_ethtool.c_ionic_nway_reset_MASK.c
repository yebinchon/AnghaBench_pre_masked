
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ionic_lif {struct ionic* ionic; } ;
struct ionic {int dev_cmd_lock; int idev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ionic*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ionic_lif* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3)
{
 struct ionic_lif *VAR_4 = FUNC_4(VAR_3);
 struct ionic *VAR_5 = VAR_4->ionic;
 int VAR_6 = 0;



 FUNC_2(&VAR_5->dev_cmd_lock);

 FUNC_0(&VAR_5->idev, VAR_1);
 VAR_6 = FUNC_1(VAR_5, VAR_0);

 if (!VAR_6) {
  FUNC_0(&VAR_5->idev, VAR_2);
  VAR_6 = FUNC_1(VAR_5, VAR_0);
 }

 FUNC_3(&VAR_5->dev_cmd_lock);

 return VAR_6;
}

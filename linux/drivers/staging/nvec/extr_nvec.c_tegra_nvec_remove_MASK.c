
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct nvec_chip {int tx_work; int rx_work; int nvec_status_notifier; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvec_chip*,int) ;
 int FUNC_3 (struct nvec_chip*,int *) ;
 struct nvec_chip* FUNC_4 (struct platform_device*) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct nvec_chip *VAR_2 = FUNC_4(VAR_1);

 FUNC_2(VAR_2, 0);
 FUNC_1(VAR_2->dev);
 FUNC_3(VAR_2, &VAR_2->nvec_status_notifier);
 FUNC_0(&VAR_2->rx_work);
 FUNC_0(&VAR_2->tx_work);

 VAR_0 = ((void*)0);

 return 0;
}

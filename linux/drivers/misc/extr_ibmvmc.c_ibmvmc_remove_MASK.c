
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_dev {int unit_address; int dev; } ;
struct crq_server_adapter {int dev; } ;


 struct crq_server_adapter* FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct crq_server_adapter*) ;

__attribute__((used)) static int FUNC_3(struct vio_dev *VAR_0)
{
 struct crq_server_adapter *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(VAR_1->dev, "Entering remove for UA 0x%x\n",
   VAR_0->unit_address);
 FUNC_2(VAR_1);

 return 0;
}

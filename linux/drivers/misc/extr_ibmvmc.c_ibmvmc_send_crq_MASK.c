
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vio_dev {int unit_address; } ;
struct crq_server_adapter {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,long,...) ;
 int FUNC_1 () ;
 long FUNC_2 (int ,int ,int ,int ) ;
 struct vio_dev* FUNC_3 (int ) ;

__attribute__((used)) static long FUNC_4(struct crq_server_adapter *VAR_1,
       u64 VAR_2, u64 VAR_3)
{
 struct vio_dev *VAR_4 = FUNC_3(VAR_1->dev);
 long VAR_5 = 0;

 FUNC_0(VAR_1->dev, "(0x%x, 0x%016llx, 0x%016llx)\n",
  VAR_4->unit_address, VAR_2, VAR_3);





 FUNC_1();
 VAR_5 = FUNC_2(VAR_0, VAR_4->unit_address, VAR_2, VAR_3);
 FUNC_0(VAR_1->dev, "rc = 0x%lx\n", VAR_5);

 return VAR_5;
}

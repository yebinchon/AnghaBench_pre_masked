
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vio_dev {int unit_address; } ;
struct ibmvscsi_host_data {int dev; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct vio_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ibmvscsi_host_data *VAR_1,
        u64 VAR_2, u64 VAR_3)
{
 struct vio_dev *VAR_4 = FUNC_2(VAR_1->dev);





 FUNC_0();
 return FUNC_1(VAR_0, VAR_4->unit_address, VAR_2, VAR_3);
}

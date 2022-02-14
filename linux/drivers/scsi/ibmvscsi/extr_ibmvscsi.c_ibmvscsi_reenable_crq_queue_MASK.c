
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_dev {int unit_address; } ;
struct ibmvscsi_host_data {int dev; } ;
struct crq_queue {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 struct vio_dev* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct crq_queue *VAR_3,
           struct ibmvscsi_host_data *VAR_4)
{
 int VAR_5 = 0;
 struct vio_dev *VAR_6 = FUNC_4(VAR_4->dev);


 do {
  if (VAR_5)
   FUNC_2(100);
  VAR_5 = FUNC_3(VAR_1, VAR_6->unit_address);
 } while ((VAR_5 == VAR_2) || (VAR_5 == VAR_0) || (FUNC_0(VAR_5)));

 if (VAR_5)
  FUNC_1(VAR_4->dev, "Error %d enabling adapter\n", VAR_5);
 return VAR_5;
}

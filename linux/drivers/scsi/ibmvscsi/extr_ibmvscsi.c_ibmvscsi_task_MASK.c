
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viosrp_crq {void* valid; } ;
struct vio_dev {int dummy; } ;
struct ibmvscsi_host_data {int queue; int dev; } ;


 void* VAR_0 ;
 struct viosrp_crq* FUNC_0 (int *) ;
 int FUNC_1 (struct viosrp_crq*,struct ibmvscsi_host_data*) ;
 struct vio_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct vio_dev*) ;
 int FUNC_4 (struct vio_dev*) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void *VAR_1)
{
 struct ibmvscsi_host_data *VAR_2 = (struct ibmvscsi_host_data *)VAR_1;
 struct vio_dev *VAR_3 = FUNC_2(VAR_2->dev);
 struct viosrp_crq *VAR_4;
 int VAR_5 = 0;

 while (!VAR_5) {

  while ((VAR_4 = FUNC_0(&VAR_2->queue)) != ((void*)0)) {
   FUNC_1(VAR_4, VAR_2);
   VAR_4->valid = VAR_0;
   FUNC_5();
  }

  FUNC_4(VAR_3);
  VAR_4 = FUNC_0(&VAR_2->queue);
  if (VAR_4 != ((void*)0)) {
   FUNC_3(VAR_3);
   FUNC_1(VAR_4, VAR_2);
   VAR_4->valid = VAR_0;
   FUNC_5();
  } else {
   VAR_5 = 1;
  }
 }
}

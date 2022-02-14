
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_dev {int dummy; } ;
struct snic {int shost; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct vnic_dev*,int*) ;
 struct snic* FUNC_2 (struct vnic_dev*) ;

__attribute__((used)) static int
FUNC_3(struct vnic_dev *VAR_0, int *VAR_1)
{
 struct snic *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;
 int VAR_4 = 5;

 do {
  VAR_3 = FUNC_1(VAR_0, VAR_1);
  if (VAR_3 == 0)
   break;

  FUNC_0(VAR_2->shost, "VNIC_DEV_OPEN Timedout.\n");
 } while (VAR_4--);

 return VAR_3;
}

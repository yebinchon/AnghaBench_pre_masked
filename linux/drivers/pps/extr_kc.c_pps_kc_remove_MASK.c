
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pps_device {int dev; } ;


 int FUNC_0 (int ,char*) ;
 struct pps_device* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct pps_device *VAR_3)
{
 FUNC_1(&VAR_1);
 if (VAR_3 == VAR_0) {
  VAR_2 = 0;
  VAR_0 = ((void*)0);
  FUNC_2(&VAR_1);
  FUNC_0(VAR_3->dev, "unbound kernel consumer"
    " on device removal\n");
 } else
  FUNC_2(&VAR_1);
}

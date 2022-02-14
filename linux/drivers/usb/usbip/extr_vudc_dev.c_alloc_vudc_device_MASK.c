
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vudc_device {int pdev; int dev_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vudc_device*) ;
 struct vudc_device* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int) ;

struct vudc_device *FUNC_4(int VAR_2)
{
 struct vudc_device *VAR_3 = ((void*)0);

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  goto out;

 FUNC_0(&VAR_3->dev_entry);

 VAR_3->pdev = FUNC_3(VAR_0, VAR_2);
 if (!VAR_3->pdev) {
  FUNC_1(VAR_3);
  VAR_3 = ((void*)0);
 }

out:
 return VAR_3;
}

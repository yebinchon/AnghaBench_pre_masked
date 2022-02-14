
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tape_device {int first_minor; TYPE_1__* cdev; void* rt; void* nt; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int) ;
 void* FUNC_1 (int *,int ,int *,char*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_3(struct tape_device * VAR_2)
{
 char VAR_3[20];

 FUNC_2(VAR_3, "ntibm%i", VAR_2->first_minor / 2);
 VAR_2->nt = FUNC_1(
  &VAR_2->cdev->dev,
  FUNC_0(VAR_1, VAR_2->first_minor),
  &VAR_0,
  VAR_3,
  "non-rewinding"
 );
 VAR_3[0] = 'r';
 VAR_2->rt = FUNC_1(
  &VAR_2->cdev->dev,
  FUNC_0(VAR_1, VAR_2->first_minor + 1),
  &VAR_0,
  VAR_3,
  "rewinding"
 );

 return 0;
}

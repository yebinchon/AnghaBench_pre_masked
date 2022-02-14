
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int owner; } ;
struct pmcraid_instance {TYPE_1__ cdev; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int ,int *,int ,int *,char*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 int VAR_4 ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct pmcraid_instance *VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4();
 FUNC_2(&VAR_5->cdev, &VAR_3);
 VAR_5->cdev.owner = VAR_1;

 VAR_7 = FUNC_1(&VAR_5->cdev, FUNC_0(VAR_4, VAR_6), 1);

 if (VAR_7)
  FUNC_5(VAR_6);
 else
  FUNC_3(VAR_2, ((void*)0), FUNC_0(VAR_4, VAR_6),
         ((void*)0), "%s%u", VAR_0, VAR_6);
 return VAR_7;
}

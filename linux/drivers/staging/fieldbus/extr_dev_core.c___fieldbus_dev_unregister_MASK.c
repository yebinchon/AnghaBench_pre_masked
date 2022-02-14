
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct fieldbus_dev {int id; TYPE_1__ cdev; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct fieldbus_dev *VAR_2)
{
 if (!VAR_2)
  return;
 FUNC_1(&VAR_0, VAR_2->cdev.dev);
 FUNC_0(&VAR_2->cdev);
 FUNC_2(&VAR_1, VAR_2->id);
}

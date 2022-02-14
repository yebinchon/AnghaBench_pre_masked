
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ffs_dev {TYPE_1__* ffs_data; int entry; } ;
struct TYPE_2__ {int * private_data; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct ffs_dev*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ffs_dev *VAR_1)
{
 FUNC_2(&VAR_1->entry);


 if (VAR_1->ffs_data)
  VAR_1->ffs_data->private_data = ((void*)0);

 FUNC_1(VAR_1);
 if (FUNC_3(&VAR_0))
  FUNC_0();
}

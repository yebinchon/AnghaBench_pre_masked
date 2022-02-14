
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_hw {int lock; int sm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct csio_hw*) ;
 scalar_t__ FUNC_1 (struct csio_hw*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct csio_hw *VAR_4)
{
 FUNC_3(&VAR_4->lock);
 FUNC_2(&VAR_4->sm, VAR_0);
 FUNC_4(&VAR_4->lock);

 if (FUNC_0(VAR_4))
  return 0;
 else if (FUNC_1(VAR_4, VAR_3))
  return -VAR_1;
 else
  return -VAR_2;
}

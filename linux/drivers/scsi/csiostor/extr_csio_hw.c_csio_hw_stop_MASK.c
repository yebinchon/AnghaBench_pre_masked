
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_hw {int sm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct csio_hw*) ;
 int FUNC_1 (int *,int ) ;

int
FUNC_2(struct csio_hw *VAR_2)
{
 FUNC_1(&VAR_2->sm, VAR_0);

 if (FUNC_0(VAR_2))
  return 0;
 else
  return -VAR_1;
}

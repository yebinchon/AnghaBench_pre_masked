
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_rnode {int sm; } ;
struct csio_lnode {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct csio_rnode*) ;
 scalar_t__ FUNC_1 (struct csio_rnode*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct csio_lnode*,struct csio_rnode*) ;
 struct csio_lnode* FUNC_4 (struct csio_rnode*) ;

void
FUNC_5(struct csio_rnode *VAR_1)
{
 struct csio_lnode *VAR_2 = FUNC_4(VAR_1);


 if (FUNC_0(VAR_1))
  return;

 FUNC_2(&VAR_1->sm, VAR_0);


 if (FUNC_1(VAR_1))
  FUNC_3(VAR_2, VAR_1);
}

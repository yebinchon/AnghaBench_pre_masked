
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_lnode {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct csio_lnode*,int) ;
 scalar_t__ FUNC_1 (struct csio_lnode*) ;

int
FUNC_2(struct csio_lnode *VAR_1)
{
 int VAR_2 = 0;
 if (FUNC_1(VAR_1) && !(VAR_1->flags & VAR_0)) {
  VAR_2 = FUNC_0(VAR_1, 1);
  VAR_1->flags |= VAR_0;
 }

 return VAR_2;
}

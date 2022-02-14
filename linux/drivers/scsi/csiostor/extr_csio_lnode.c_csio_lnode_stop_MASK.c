
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_lnode {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct csio_lnode*,int ) ;
 scalar_t__ FUNC_1 (struct csio_lnode*) ;
 int FUNC_2 (struct csio_lnode*,char*,struct csio_lnode*) ;
 int FUNC_3 (struct csio_lnode*,int ) ;

void
FUNC_4(struct csio_lnode *VAR_2)
{
 FUNC_3(VAR_2, VAR_0);
 if (FUNC_1(VAR_2) && (VAR_2->flags & VAR_1)) {
  FUNC_0(VAR_2, 0);
  VAR_2->flags &= ~VAR_1;
 }
 FUNC_2(VAR_2, "stopping ln :%p\n", VAR_2);
}

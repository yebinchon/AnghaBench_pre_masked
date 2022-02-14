
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csio_lnode {TYPE_1__* fcfinfo; } ;
struct TYPE_2__ {int kref; } ;


 int FUNC_0 (struct csio_lnode*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct csio_lnode*) ;
 int FUNC_2 (struct csio_lnode*) ;
 struct csio_lnode* FUNC_3 (struct csio_lnode*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(struct csio_lnode *VAR_2)
{
 struct csio_lnode *VAR_3;

 FUNC_0(VAR_2);
 if (FUNC_1(VAR_2)) {
  VAR_3 = FUNC_3(VAR_2);
  FUNC_4(&VAR_3->fcfinfo->kref, VAR_1);
 } else {
  FUNC_4(&VAR_2->fcfinfo->kref, VAR_1);
  if (VAR_0)
   FUNC_2(VAR_2);
 }
 VAR_2->fcfinfo = ((void*)0);
}

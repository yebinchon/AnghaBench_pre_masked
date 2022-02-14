
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_lnode {int vnp_flowid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct csio_lnode*) ;
 int FUNC_1 (struct csio_lnode*,char*,struct csio_lnode*) ;
 int FUNC_2 (struct csio_lnode*,int ) ;

void
FUNC_3(struct csio_lnode *VAR_2)
{
 FUNC_2(VAR_2, VAR_1);
 if (FUNC_0(VAR_2))
  VAR_2->vnp_flowid = VAR_0;

 FUNC_1(VAR_2, "closed ln :%p\n", VAR_2);
}

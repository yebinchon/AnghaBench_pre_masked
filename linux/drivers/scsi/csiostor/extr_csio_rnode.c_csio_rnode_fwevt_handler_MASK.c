
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct csio_rnode {size_t prev_evt; size_t cur_evt; int sm; } ;
struct csio_lnode {int dummy; } ;
typedef enum csio_rn_ev { ____Placeholder_csio_rn_ev } csio_rn_ev ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (struct csio_rnode*,int ) ;
 scalar_t__ FUNC_2 (struct csio_rnode*) ;
 int FUNC_3 (struct csio_lnode*,char*,int ,size_t) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct csio_lnode*,struct csio_rnode*) ;
 int FUNC_6 (struct csio_rnode*) ;
 struct csio_lnode* FUNC_7 (struct csio_rnode*) ;
 int * VAR_0 ;
 int VAR_1 ;

void
FUNC_8(struct csio_rnode *VAR_2, uint8_t VAR_3)
{
 struct csio_lnode *VAR_4 = FUNC_7(VAR_2);
 enum csio_rn_ev VAR_5;

 VAR_5 = FUNC_0(VAR_3);
 if (!VAR_5) {
  FUNC_3(VAR_4, "ssni:x%x Unhandled FW Rdev event: %d\n",
       FUNC_6(VAR_2), VAR_3);
  FUNC_1(VAR_2, VAR_1);
  return;
 }
 FUNC_1(VAR_2, VAR_0[VAR_3]);


 VAR_2->prev_evt = VAR_2->cur_evt;
 VAR_2->cur_evt = VAR_3;


 FUNC_4(&VAR_2->sm, VAR_5);


 if (FUNC_2(VAR_2))
  FUNC_5(VAR_4, VAR_2);
}

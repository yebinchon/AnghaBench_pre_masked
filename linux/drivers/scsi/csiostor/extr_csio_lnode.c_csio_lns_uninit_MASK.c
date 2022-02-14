
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csio_lnode {int nport_id; int fcf_lsthead; TYPE_1__* fcfinfo; int sm; } ;
struct csio_hw {struct csio_lnode* rln; } ;
typedef enum csio_ln_ev { ____Placeholder_csio_ln_ev } csio_ln_ev ;
struct TYPE_2__ {int list; } ;


 int FUNC_0 (struct csio_lnode*,int ) ;


 int FUNC_1 (struct csio_lnode*) ;
 int FUNC_2 (struct csio_lnode*,char*,int,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct csio_lnode*,int ) ;
 int FUNC_4 (struct csio_lnode*,int ) ;
 int VAR_1 ;
 struct csio_hw* FUNC_5 (struct csio_lnode*) ;
 int VAR_2 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_8(struct csio_lnode *VAR_6, enum csio_ln_ev VAR_7)
{
 struct csio_hw *VAR_8 = FUNC_5(VAR_6);
 struct csio_lnode *VAR_9 = VAR_8->rln;
 int VAR_10;

 FUNC_0(VAR_6, VAR_4[VAR_7]);
 switch (VAR_7) {
 case 128:
  FUNC_6(&VAR_6->sm, VAR_2);

  if (FUNC_1(VAR_6)) {
   VAR_10 = FUNC_3(VAR_6,
     VAR_0);
   if (VAR_10 != 0) {

    FUNC_0(VAR_6, VAR_3);
    break;
   }


   FUNC_7(&VAR_6->fcfinfo->list, &VAR_9->fcf_lsthead);
  }

  VAR_10 = FUNC_4(VAR_6, VAR_1);
  if (VAR_10 != 0) {

   FUNC_0(VAR_6, VAR_3);
  }
  break;

 case 129:
  break;

 default:
  FUNC_2(VAR_6,
       "unexp ln event %d recv from did:x%x in "
       "ln state[uninit].\n", VAR_7, VAR_6->nport_id);
  FUNC_0(VAR_6, VAR_5);
  break;
 }
}

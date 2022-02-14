
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csio_lnode {int nport_id; int sm; int fcf_lsthead; TYPE_1__* fcfinfo; } ;
struct csio_hw {struct csio_lnode* rln; } ;
typedef enum csio_ln_ev { ____Placeholder_csio_ln_ev } csio_ln_ev ;
struct TYPE_2__ {int list; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct csio_lnode*,int ) ;





 int VAR_0 ;
 int FUNC_2 (struct csio_lnode*) ;
 int FUNC_3 (struct csio_lnode*,char*,int,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct csio_lnode*,int ) ;
 int FUNC_5 (struct csio_lnode*,int ) ;
 int VAR_2 ;
 struct csio_hw* FUNC_6 (struct csio_lnode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct csio_lnode*,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_10(struct csio_lnode *VAR_9, enum csio_ln_ev VAR_10)
{
 struct csio_hw *VAR_11 = FUNC_6(VAR_9);
 struct csio_lnode *VAR_12 = VAR_11->rln;
 int VAR_13;

 FUNC_1(VAR_9, VAR_7[VAR_10]);
 switch (VAR_10) {
 case 130:
  FUNC_8(&VAR_9->sm, VAR_3);

  if (FUNC_2(VAR_9)) {
   VAR_13 = FUNC_4(VAR_9,
     VAR_1);
   if (VAR_13 != 0) {

    FUNC_1(VAR_9, VAR_5);
    break;
   }


   FUNC_9(&VAR_9->fcfinfo->list, &VAR_12->fcf_lsthead);
  }

  VAR_13 = FUNC_5(VAR_9, VAR_2);
  if (VAR_13 != 0) {

   FUNC_1(VAR_9, VAR_5);
  }
  break;

 case 129:
 case 131:
 case 128:
  FUNC_3(VAR_9,
       "ignoring event %d recv from did x%x"
       "in ln state[offline].\n", VAR_10, VAR_9->nport_id);
  FUNC_1(VAR_9, VAR_6);
  break;

 case 132:
  FUNC_8(&VAR_9->sm, VAR_4);
  FUNC_7(VAR_9, VAR_0);
  break;

 default:
  FUNC_3(VAR_9,
       "unexp ln event %d recv from did:x%x in "
       "ln state[offline]\n", VAR_10, VAR_9->nport_id);
  FUNC_1(VAR_9, VAR_8);
  FUNC_0(0);
  break;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csio_lnode {int nport_id; int sm; TYPE_1__* fcfinfo; } ;
struct csio_hw {int lock; } ;
typedef enum csio_ln_ev { ____Placeholder_csio_ln_ev } csio_ln_ev ;
struct TYPE_2__ {int list; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct csio_lnode*,int ) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct csio_lnode*) ;
 int FUNC_3 (struct csio_lnode*,char*,int,int ) ;
 int FUNC_4 (struct csio_lnode*,int ) ;
 struct csio_hw* FUNC_5 (struct csio_lnode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct csio_lnode*,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(struct csio_lnode *VAR_8, enum csio_ln_ev VAR_9)
{
 struct csio_hw *VAR_10 = FUNC_5(VAR_8);

 FUNC_1(VAR_8, VAR_6[VAR_9]);
 switch (VAR_9) {
 case 130:
  FUNC_3(VAR_8,
       "ignoring event %d recv from did x%x"
       "in ln state[ready].\n", VAR_9, VAR_8->nport_id);
  FUNC_1(VAR_8, VAR_5);
  break;

 case 129:
  FUNC_7(&VAR_8->sm, VAR_3);
  FUNC_6(VAR_8, VAR_2);

  FUNC_10(&VAR_10->lock);
  FUNC_4(VAR_8, VAR_0);
  FUNC_9(&VAR_10->lock);

  if (FUNC_2(VAR_8)) {

   FUNC_8(&VAR_8->fcfinfo->list);
  }
  break;

 case 131:
  FUNC_7(&VAR_8->sm, VAR_3);
  FUNC_6(VAR_8, VAR_2);




  FUNC_10(&VAR_10->lock);
  FUNC_4(VAR_8, VAR_0);
  FUNC_9(&VAR_10->lock);

  if (FUNC_2(VAR_8)) {

   FUNC_8(&VAR_8->fcfinfo->list);
  }
  break;

 case 132:
  FUNC_7(&VAR_8->sm, VAR_4);
  FUNC_6(VAR_8, VAR_1);
  break;

 case 128:
  FUNC_7(&VAR_8->sm, VAR_3);
  FUNC_6(VAR_8, VAR_2);
  break;

 default:
  FUNC_3(VAR_8,
       "unexp ln event %d recv from did:x%x in "
       "ln state[uninit].\n", VAR_9, VAR_8->nport_id);
  FUNC_1(VAR_8, VAR_7);
  FUNC_0(0);
  break;
 }
}

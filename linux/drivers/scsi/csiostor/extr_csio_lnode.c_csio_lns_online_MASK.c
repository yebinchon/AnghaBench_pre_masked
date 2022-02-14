
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csio_lnode {int nport_id; TYPE_1__* fcfinfo; int sm; int portid; } ;
struct csio_hw {int lock; } ;
typedef enum csio_ln_ev { ____Placeholder_csio_ln_ev } csio_ln_ev ;
struct TYPE_2__ {int list; } ;


 int FUNC_0 (struct csio_lnode*,int ) ;




 int VAR_0 ;
 int FUNC_1 (struct csio_lnode*) ;
 int FUNC_2 (struct csio_lnode*,char*,int,int ) ;
 int FUNC_3 (struct csio_lnode*,char*,int ) ;
 int FUNC_4 (struct csio_lnode*,int ) ;
 struct csio_hw* FUNC_5 (struct csio_lnode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct csio_lnode *VAR_6, enum csio_ln_ev VAR_7)
{
 struct csio_hw *VAR_8 = FUNC_5(VAR_6);

 FUNC_0(VAR_6, VAR_4[VAR_7]);
 switch (VAR_7) {
 case 129:
  FUNC_3(VAR_6,
        "warn: FCOE link is up already "
        "Ignoring linkup on port:%d\n", VAR_6->portid);
  FUNC_0(VAR_6, VAR_3);
  break;

 case 130:
  FUNC_6(&VAR_6->sm, VAR_1);

  FUNC_9(&VAR_8->lock);
  FUNC_4(VAR_6, VAR_0);
  FUNC_8(&VAR_8->lock);

  break;

 case 128:

 case 131:
  FUNC_6(&VAR_6->sm, VAR_2);
  if (FUNC_1(VAR_6)) {

   FUNC_7(&VAR_6->fcfinfo->list);
  }
  break;

 default:
  FUNC_2(VAR_6,
       "unexp ln event %d recv from did:x%x in "
       "ln state[uninit].\n", VAR_7, VAR_6->nport_id);
  FUNC_0(VAR_6, VAR_5);

  break;
 }
}

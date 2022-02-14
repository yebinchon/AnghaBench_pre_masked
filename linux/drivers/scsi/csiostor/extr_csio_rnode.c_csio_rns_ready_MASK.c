
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_rnode {int nport_id; int sm; int rdev_entry; } ;
struct csio_lnode {int dummy; } ;
typedef enum csio_rn_ev { ____Placeholder_csio_rn_ev } csio_rn_ev ;


 int FUNC_0 (struct csio_rnode*,int ) ;
 int FUNC_1 (struct csio_rnode*) ;
 int FUNC_2 (struct csio_rnode*) ;
 int FUNC_3 (struct csio_lnode*,char*,int ,int,int ) ;
 int FUNC_4 (struct csio_rnode*) ;
 int FUNC_5 (struct csio_lnode*,struct csio_rnode*,int ) ;
 struct csio_lnode* FUNC_6 (struct csio_rnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_8(struct csio_rnode *VAR_7, enum csio_rn_ev VAR_8)
{
 struct csio_lnode *VAR_9 = FUNC_6(VAR_7);
 int VAR_10 = 0;

 FUNC_0(VAR_7, VAR_5[VAR_8]);

 switch (VAR_8) {
 case 133:
 case 130:
  FUNC_3(VAR_9,
   "ssni:x%x Ignoring event %d recv from did:x%x "
   "in rn state[ready]\n", FUNC_4(VAR_7), VAR_8,
   VAR_7->nport_id);
  FUNC_0(VAR_7, VAR_4);
  break;

 case 129:
 case 128:
  VAR_10 = FUNC_5(VAR_9, VAR_7, VAR_7->rdev_entry);
  if (!VAR_10)
   FUNC_1(VAR_7);
  else
   FUNC_0(VAR_7, VAR_3);

  break;
 case 134:
  FUNC_7(&VAR_7->sm, VAR_1);
  FUNC_2(VAR_7);




  break;

 case 132:
  FUNC_7(&VAR_7->sm, VAR_1);

  FUNC_2(VAR_7);




  break;

 case 135:







  FUNC_7(&VAR_7->sm, VAR_2);
  FUNC_2(VAR_7);
  break;

 case 131:
  FUNC_7(&VAR_7->sm, VAR_0);
  FUNC_2(VAR_7);






  break;

 default:
  FUNC_3(VAR_9,
   "ssni:x%x unexp event %d recv from did:x%x "
   "in rn state[uninit]\n", FUNC_4(VAR_7), VAR_8,
   VAR_7->nport_id);
  FUNC_0(VAR_7, VAR_6);
  break;
 }
}

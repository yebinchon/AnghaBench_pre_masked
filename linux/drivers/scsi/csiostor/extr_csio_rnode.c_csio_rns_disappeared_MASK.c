
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_rnode {int nport_id; int sm; int rdev_entry; } ;
struct csio_lnode {int dummy; } ;
typedef enum csio_rn_ev { ____Placeholder_csio_rn_ev } csio_rn_ev ;


 int FUNC_0 (struct csio_rnode*,int ) ;





 int FUNC_1 (struct csio_rnode*) ;
 int FUNC_2 (struct csio_lnode*,char*,int ,int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct csio_rnode*) ;
 int FUNC_5 (struct csio_lnode*,struct csio_rnode*,int ) ;
 struct csio_lnode* FUNC_6 (struct csio_rnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int *,int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_8(struct csio_rnode *VAR_5, enum csio_rn_ev VAR_6)
{
 struct csio_lnode *VAR_7 = FUNC_6(VAR_5);
 int VAR_8 = 0;

 FUNC_0(VAR_5, VAR_3[VAR_6]);

 switch (VAR_6) {
 case 130:
 case 128:
  VAR_8 = FUNC_5(VAR_7, VAR_5, VAR_5->rdev_entry);
  if (!VAR_8) {
   FUNC_7(&VAR_5->sm, VAR_0);
   FUNC_1(VAR_5);
  } else {
   FUNC_0(VAR_5, VAR_2);
   FUNC_3(&VAR_5->sm, 132);
  }
  break;

 case 132:






  FUNC_7(&VAR_5->sm, VAR_1);
  break;

 case 131:
 case 129:
  FUNC_2(VAR_7,
   "ssni:x%x Ignoring event %d recv from did x%x"
   "in rn state[disappeared]\n", FUNC_4(VAR_5),
   VAR_6, VAR_5->nport_id);
  break;

 default:
  FUNC_2(VAR_7,
   "ssni:x%x unexp event %d recv from did x%x"
   "in rn state[disappeared]\n", FUNC_4(VAR_5),
   VAR_6, VAR_5->nport_id);
  FUNC_0(VAR_5, VAR_4);
  break;
 }
}

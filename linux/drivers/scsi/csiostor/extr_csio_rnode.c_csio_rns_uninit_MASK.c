
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_rnode {int sm; int rdev_entry; } ;
struct csio_lnode {int dummy; } ;
typedef enum csio_rn_ev { ____Placeholder_csio_rn_ev } csio_rn_ev ;


 int FUNC_0 (struct csio_rnode*,int ) ;



 int FUNC_1 (struct csio_rnode*) ;
 int FUNC_2 (struct csio_lnode*,char*,int ,int) ;
 int FUNC_3 (struct csio_rnode*) ;
 int FUNC_4 (struct csio_lnode*,struct csio_rnode*,int ) ;
 struct csio_lnode* FUNC_5 (struct csio_rnode*) ;
 int VAR_0 ;
 int FUNC_6 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_7(struct csio_rnode *VAR_5, enum csio_rn_ev VAR_6)
{
 struct csio_lnode *VAR_7 = FUNC_5(VAR_5);
 int VAR_8 = 0;

 FUNC_0(VAR_5, VAR_3[VAR_6]);

 switch (VAR_6) {
 case 130:
 case 128:
  VAR_8 = FUNC_4(VAR_7, VAR_5, VAR_5->rdev_entry);
  if (!VAR_8) {
   FUNC_6(&VAR_5->sm, VAR_0);
   FUNC_1(VAR_5);
  } else {
   FUNC_0(VAR_5, VAR_1);
  }
  break;
 case 129:
  FUNC_2(VAR_7,
       "ssni:x%x Ignoring event %d recv "
       "in rn state[uninit]\n", FUNC_3(VAR_5), VAR_6);
  FUNC_0(VAR_5, VAR_2);
  break;
 default:
  FUNC_2(VAR_7,
       "ssni:x%x unexp event %d recv "
       "in rn state[uninit]\n", FUNC_3(VAR_5), VAR_6);
  FUNC_0(VAR_5, VAR_4);
  break;
 }
}

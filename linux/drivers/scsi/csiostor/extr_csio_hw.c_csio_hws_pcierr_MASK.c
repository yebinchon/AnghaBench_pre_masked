
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_hw {int prev_evt; int cur_evt; int sm; } ;
typedef enum csio_hw_ev { ____Placeholder_csio_hw_ev } csio_hw_ev ;



 int FUNC_0 (struct csio_hw*,int ) ;
 int FUNC_1 (struct csio_hw*) ;
 int FUNC_2 (struct csio_hw*) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ) ;
 int * VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct csio_hw *VAR_3, enum csio_hw_ev VAR_4)
{
 VAR_3->prev_evt = VAR_3->cur_evt;
 VAR_3->cur_evt = VAR_4;
 FUNC_0(VAR_3, VAR_1[VAR_4]);

 switch (VAR_4) {
 case 128:
  FUNC_1(VAR_3);
  FUNC_3(&VAR_3->sm, VAR_0);
  FUNC_2(VAR_3);
  break;

 default:
  FUNC_0(VAR_3, VAR_2);
  break;
 }
}

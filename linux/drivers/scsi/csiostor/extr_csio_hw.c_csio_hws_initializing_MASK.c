
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_hw {int prev_evt; int cur_evt; int sm; } ;
typedef enum csio_hw_ev { ____Placeholder_csio_hw_ev } csio_hw_ev ;





 int FUNC_0 (struct csio_hw*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct csio_hw*) ;
 int FUNC_2 (struct csio_hw*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct csio_hw*,int ) ;
 int FUNC_4 (int *,int ) ;
 int * VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5(struct csio_hw *VAR_5, enum csio_hw_ev VAR_6)
{
 VAR_5->prev_evt = VAR_5->cur_evt;
 VAR_5->cur_evt = VAR_6;
 FUNC_0(VAR_5, VAR_3[VAR_6]);

 switch (VAR_6) {
 case 129:
  FUNC_4(&VAR_5->sm, VAR_1);


  FUNC_3(VAR_5, VAR_0);


  FUNC_2(VAR_5);
  break;

 case 130:
  FUNC_4(&VAR_5->sm, VAR_2);
  break;

 case 128:
  FUNC_1(VAR_5);
  break;

 default:
  FUNC_0(VAR_5, VAR_4);
  break;
 }
}

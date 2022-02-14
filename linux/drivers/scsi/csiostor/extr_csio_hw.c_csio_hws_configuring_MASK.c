
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
 int VAR_3 ;
 int FUNC_3 (struct csio_hw*,int ) ;
 int FUNC_4 (int *,int ) ;
 int * VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5(struct csio_hw *VAR_6, enum csio_hw_ev VAR_7)
{
 VAR_6->prev_evt = VAR_6->cur_evt;
 VAR_6->cur_evt = VAR_7;
 FUNC_0(VAR_6, VAR_4[VAR_7]);

 switch (VAR_7) {
 case 130:
  FUNC_4(&VAR_6->sm, VAR_1);
  FUNC_2(VAR_6);
  break;

 case 129:
  FUNC_4(&VAR_6->sm, VAR_2);

  FUNC_3(VAR_6, VAR_0);
  break;

 case 131:
  FUNC_4(&VAR_6->sm, VAR_3);
  break;

 case 128:
  FUNC_1(VAR_6);
  break;
 default:
  FUNC_0(VAR_6, VAR_5);
  break;
 }
}

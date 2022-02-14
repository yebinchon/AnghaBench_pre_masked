
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_hw {int evtflag; int prev_evt; int cur_evt; int sm; } ;
typedef enum csio_hw_ev { ____Placeholder_csio_hw_ev } csio_hw_ev ;







 int VAR_0 ;

 int FUNC_0 (struct csio_hw*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct csio_hw*) ;
 int FUNC_2 (struct csio_hw*) ;
 int FUNC_3 (struct csio_hw*) ;
 int FUNC_4 (struct csio_hw*) ;
 int FUNC_5 (struct csio_hw*) ;
 int FUNC_6 (struct csio_hw*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct csio_hw*,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int *,int ) ;
 int * VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_12(struct csio_hw *VAR_6, enum csio_hw_ev VAR_7)
{

 VAR_6->evtflag = VAR_7;

 VAR_6->prev_evt = VAR_6->cur_evt;
 VAR_6->cur_evt = VAR_7;
 FUNC_0(VAR_6, VAR_4[VAR_7]);

 switch (VAR_7) {
 case 131:
 case 132:
 case 128:
 case 129:
 case 130:
  FUNC_11(&VAR_6->sm, VAR_2);

  if (VAR_7 == 131 ||
      VAR_7 == 130)
   FUNC_10(FUNC_6(VAR_6), 0);
  else
   FUNC_10(FUNC_6(VAR_6), 1);

  FUNC_3(VAR_6);
  FUNC_4(VAR_6);
  FUNC_2(VAR_6);
  FUNC_8(VAR_6, VAR_1);
  FUNC_1(VAR_6);
  FUNC_7(FUNC_5(VAR_6));
  FUNC_9(&VAR_6->sm, VAR_0);
  break;

 case 133:
  FUNC_11(&VAR_6->sm, VAR_3);
  break;

 default:
  FUNC_0(VAR_6, VAR_5);
  break;
 }
}

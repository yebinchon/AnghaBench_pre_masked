
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_hw {int prev_evt; int cur_evt; int sm; int evtflag; } ;
typedef enum csio_hw_ev { ____Placeholder_csio_hw_ev } csio_hw_ev ;




 int VAR_0 ;




 int FUNC_0 (struct csio_hw*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct csio_hw*) ;
 int FUNC_2 (struct csio_hw*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct csio_hw*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct csio_hw*,int) ;
 int * VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_7(struct csio_hw *VAR_9, enum csio_hw_ev VAR_10)
{
 VAR_9->prev_evt = VAR_9->cur_evt;
 VAR_9->cur_evt = VAR_10;
 FUNC_0(VAR_9, VAR_7[VAR_10]);

 switch (VAR_10) {
 case 129:
  switch (VAR_9->evtflag) {
  case 133:
   FUNC_5(&VAR_9->sm, VAR_6);



  case 132:
   FUNC_5(&VAR_9->sm, VAR_6);

   FUNC_3(VAR_9, VAR_2);
   FUNC_6(VAR_9, 0);
   FUNC_2(VAR_9, 0);
   FUNC_4(&VAR_9->sm, VAR_0);
   break;

  case 130:
   FUNC_5(&VAR_9->sm, VAR_5);
   FUNC_3(VAR_9, VAR_1);
   FUNC_6(VAR_9, 1);

   FUNC_1(VAR_9);
   break;

  case 128:
   FUNC_5(&VAR_9->sm, VAR_4);
   break;

  case 131:
   FUNC_5(&VAR_9->sm, VAR_3);
   FUNC_6(VAR_9, 0);
   break;

  default:
   FUNC_0(VAR_9, VAR_8);
   break;

  }
  break;

 default:
  FUNC_0(VAR_9, VAR_8);
  break;
 }
}

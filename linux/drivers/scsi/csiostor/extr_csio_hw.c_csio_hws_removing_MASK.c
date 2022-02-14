
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_hw {int prev_evt; int cur_evt; } ;
typedef enum csio_hw_ev { ____Placeholder_csio_hw_ev } csio_hw_ev ;



 int FUNC_0 (struct csio_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct csio_hw*,char*) ;
 int FUNC_2 (struct csio_hw*) ;
 int FUNC_3 (struct csio_hw*,int,int ) ;
 int FUNC_4 (int) ;
 int * VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5(struct csio_hw *VAR_5, enum csio_hw_ev VAR_6)
{
 VAR_5->prev_evt = VAR_5->cur_evt;
 VAR_5->cur_evt = VAR_6;
 FUNC_0(VAR_5, VAR_3[VAR_6]);

 switch (VAR_6) {
 case 128:
  if (!FUNC_2(VAR_5))
   break;





  FUNC_1(VAR_5, "Resetting HW and waiting 2 seconds...\n");
  FUNC_3(VAR_5, VAR_0 | VAR_1, VAR_2);
  FUNC_4(2000);
  break;


 default:
  FUNC_0(VAR_5, VAR_4);
  break;

 }
}

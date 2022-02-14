
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_adapter {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct esas2r_adapter*) ;
 int FUNC_2 (struct esas2r_adapter*) ;
 int FUNC_3 (struct esas2r_adapter*) ;
 int FUNC_4 (struct esas2r_adapter*,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct esas2r_adapter*,int) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct esas2r_adapter *VAR_7)
{
 while (FUNC_7(VAR_0, &VAR_7->flags)) {





  if (!FUNC_7(VAR_3, &VAR_7->flags) &&
      !FUNC_7(VAR_5, &VAR_7->flags))
   FUNC_2(VAR_7);


  FUNC_1(VAR_7);
  FUNC_4(VAR_7, 0);

  if (FUNC_7(VAR_1, &VAR_7->flags))
   break;

  if (FUNC_7(VAR_5, &VAR_7->flags)) {

   if (FUNC_7(VAR_4, &VAR_7->flags)) {

    FUNC_5(VAR_6,
        "The firmware was reset during a normal power-up sequence");
   } else {

    FUNC_0(VAR_5, &VAR_7->flags);
    FUNC_6(VAR_7, 1);
   }
  } else {

   if (FUNC_7(VAR_4, &VAR_7->flags)) {

   } else {

    FUNC_6(VAR_7, 0);
   }

   FUNC_5(VAR_6,
       "Recovering from a chip reset while the chip was online");
  }

  FUNC_0(VAR_2, &VAR_7->flags);
  FUNC_3(VAR_7);





  FUNC_0(VAR_0, &VAR_7->flags);
 }
}

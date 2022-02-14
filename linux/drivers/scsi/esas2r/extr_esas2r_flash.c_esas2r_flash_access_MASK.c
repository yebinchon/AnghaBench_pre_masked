
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct esas2r_adapter {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct esas2r_adapter*) ;
 int FUNC_1 (struct esas2r_adapter*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct esas2r_adapter*,int ) ;
 int FUNC_4 (struct esas2r_adapter*,int ,int) ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static bool FUNC_9(struct esas2r_adapter *VAR_9, u32 VAR_10)
{
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;


 if (VAR_10 == VAR_3)
  FUNC_0(VAR_9);


 FUNC_4(VAR_9, VAR_4, VAR_10);


 VAR_11 = FUNC_5(VAR_8);

 if (FUNC_8(VAR_0, &VAR_9->flags) ||
     FUNC_8(VAR_1, &VAR_9->flags))
  VAR_12 = 40000;
 else
  VAR_12 = 5000;

 while (1) {
  VAR_13 = FUNC_3(VAR_9, VAR_7);

  if (VAR_13 & VAR_6) {

   VAR_14 =
    FUNC_3(VAR_9, VAR_5);
   FUNC_4(VAR_9, VAR_5,
          VAR_14);
   if (VAR_14 & VAR_10)
    break;
  }

  FUNC_7(FUNC_6(100));

  if ((FUNC_5(VAR_8) - VAR_11) > VAR_12) {






   if (VAR_10 == VAR_3) {
    FUNC_2("flash access timeout");
    FUNC_4(VAR_9, VAR_4,
           VAR_2);
    FUNC_1(VAR_9);
   } else {
    FUNC_2("flash release timeout");
   }

   return 0;
  }
 }


 if (VAR_10 == VAR_2)
  FUNC_1(VAR_9);

 return 1;
}

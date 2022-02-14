
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcpm_port {int dummy; } ;
typedef enum pdo_err { ____Placeholder_pdo_err } pdo_err ;
typedef enum pd_pdo_type { ____Placeholder_pd_pdo_type } pd_pdo_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 scalar_t__ VAR_10 ;
 int FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (int const) ;
 int FUNC_6 (int const) ;
 scalar_t__ FUNC_7 (int const) ;
 int FUNC_8 (struct tcpm_port*,char*) ;

__attribute__((used)) static enum pdo_err FUNC_9(struct tcpm_port *VAR_11, const u32 *VAR_12,
      unsigned int VAR_13)
{
 unsigned int VAR_14;


 if (VAR_13 < 1)
  return VAR_4;


 if (FUNC_7(VAR_12[0]) != 129 ||
     FUNC_1(VAR_12[0]) != VAR_10)
  return VAR_8;

 for (VAR_14 = 1; VAR_14 < VAR_13; VAR_14++) {
  if (FUNC_7(VAR_12[VAR_14]) < FUNC_7(VAR_12[VAR_14 - 1])) {
   return VAR_5;
  } else if (FUNC_7(VAR_12[VAR_14]) == FUNC_7(VAR_12[VAR_14 - 1])) {
   enum pd_pdo_type VAR_15 = FUNC_7(VAR_12[VAR_14]);

   switch (VAR_15) {





   case 129:
    if (FUNC_1(VAR_12[VAR_14]) <=
        FUNC_1(VAR_12[VAR_14 - 1]))
     return VAR_3;
    break;





   case 128:
   case 130:
    if (FUNC_3(VAR_12[VAR_14]) <
        FUNC_3(VAR_12[VAR_14 - 1]))
     return VAR_7;
    else if ((FUNC_3(VAR_12[VAR_14]) ==
       FUNC_3(VAR_12[VAR_14 - 1])) &&
      (FUNC_2(VAR_12[VAR_14]) ==
       FUNC_2(VAR_12[VAR_14 - 1])))
     return VAR_1;
    break;





   case 131:
    if (FUNC_0(VAR_12[VAR_14]) != VAR_0)
     break;

    if (FUNC_5(VAR_12[VAR_14]) <
        FUNC_5(VAR_12[VAR_14 - 1]))
     return VAR_6;
    else if (FUNC_6(VAR_12[VAR_14]) ==
       FUNC_6(VAR_12[VAR_14 - 1]) &&
      FUNC_5(VAR_12[VAR_14]) ==
       FUNC_5(VAR_12[VAR_14 - 1]) &&
      FUNC_4(VAR_12[VAR_14]) ==
       FUNC_4(VAR_12[VAR_14 - 1]))
     return VAR_2;
    break;
   default:
    FUNC_8(VAR_11, " Unknown pdo type");
   }
  }
 }

 return VAR_9;
}

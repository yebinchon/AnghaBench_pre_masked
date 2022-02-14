
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct geni_se {int dummy; } ;
typedef enum geni_se_xfer_mode { ____Placeholder_geni_se_xfer_mode } geni_se_xfer_mode ;





 int FUNC_0 (int) ;
 int FUNC_1 (struct geni_se*) ;
 int FUNC_2 (struct geni_se*) ;

void FUNC_3(struct geni_se *VAR_0, enum geni_se_xfer_mode VAR_1)
{
 FUNC_0(VAR_1 != 129 && VAR_1 != 130);

 switch (VAR_1) {
 case 129:
  FUNC_2(VAR_0);
  break;
 case 130:
  FUNC_1(VAR_0);
  break;
 case 128:
 default:
  break;
 }
}

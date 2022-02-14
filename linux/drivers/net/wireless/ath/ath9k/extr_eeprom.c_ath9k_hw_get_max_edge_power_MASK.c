
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct cal_ctl_edges {scalar_t__ bChannel; int ctl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;

u16 FUNC_3(u16 VAR_2, struct cal_ctl_edges *VAR_3,
    bool VAR_4, int VAR_5)
{
 u16 VAR_6 = VAR_1;
 int VAR_7;

 for (VAR_7 = 0; (VAR_7 < VAR_5) &&
       (VAR_3[VAR_7].bChannel != VAR_0); VAR_7++) {
  if (VAR_2 == FUNC_2(VAR_3[VAR_7].bChannel, VAR_4)) {
   VAR_6 = FUNC_1(VAR_3[VAR_7].ctl);
   break;
  } else if ((VAR_7 > 0) &&
      (VAR_2 < FUNC_2(VAR_3[VAR_7].bChannel,
            VAR_4))) {
   if (FUNC_2(VAR_3[VAR_7 - 1].bChannel,
            VAR_4) < VAR_2 &&
       FUNC_0(VAR_3[VAR_7 - 1].ctl)) {
    VAR_6 =
     FUNC_1(VAR_3[VAR_7 - 1].ctl);
   }
   break;
  }
 }

 return VAR_6;
}

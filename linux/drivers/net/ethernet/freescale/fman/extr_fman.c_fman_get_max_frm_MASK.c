
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

u16 FUNC_1(void)
{
 static bool VAR_4;

 if (!VAR_4) {
  if (VAR_3 > VAR_1 ||
      VAR_3 < VAR_2) {
   FUNC_0("Invalid fsl_fm_max_frm value (%d) in bootargs, valid range is %d-%d. Falling back to the default (%d)\n",
    VAR_3,
    VAR_2,
    VAR_1,
    VAR_0);
   VAR_3 = VAR_0;
  }
  VAR_4 = 1;
 }

 return VAR_3;
}

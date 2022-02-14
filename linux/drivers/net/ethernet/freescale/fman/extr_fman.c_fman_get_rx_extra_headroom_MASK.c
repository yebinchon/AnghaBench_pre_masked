
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

int FUNC_2(void)
{
 static bool VAR_4;

 if (!VAR_4) {
  if (VAR_3 > VAR_1 ||
      VAR_3 < VAR_2) {
   FUNC_1("Invalid fsl_fm_rx_extra_headroom value (%d) in bootargs, valid range is %d-%d. Falling back to the default (%d)\n",
    VAR_3,
    VAR_2,
    VAR_1,
    VAR_0);
   VAR_3 = VAR_0;
  }

  VAR_4 = 1;
  VAR_3 = FUNC_0(VAR_3, 16);
 }

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerclamp_calibration_data {scalar_t__ confidence; int steady_comp; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 struct powerclamp_calibration_data* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (int,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(int VAR_5, unsigned int VAR_6)
{
 int VAR_7;
 struct powerclamp_calibration_data *VAR_8 = &VAR_1[VAR_5];






 if (VAR_8->confidence >= VAR_0 ||
  FUNC_0(&VAR_3) >
  VAR_6 * FUNC_1())
  return;

 VAR_7 = VAR_4 - VAR_2;

 if (VAR_7 >= 0 && VAR_7 <= (1+VAR_5/10)) {
  if (VAR_8->steady_comp)
   VAR_8->steady_comp =
    FUNC_2(VAR_7+VAR_8->steady_comp, 2)/2;
  else
   VAR_8->steady_comp = VAR_7;
  VAR_8->confidence++;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx231xx {int afe_mode; scalar_t__ video_input; } ;
typedef enum AFE_MODE { ____Placeholder_AFE_MODE } AFE_MODE ;







 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cx231xx*) ;
 int FUNC_1 (struct cx231xx*,scalar_t__) ;
 int FUNC_2 (struct cx231xx*) ;

int FUNC_3(struct cx231xx *VAR_1, enum AFE_MODE VAR_2)
{
 int VAR_3 = 0;






 switch (VAR_2) {
 case 129:
  FUNC_0(VAR_1);
  break;
 case 132:
  VAR_3 = FUNC_2(VAR_1);
  break;
 case 131:

  break;
 case 128:

  break;
 case 130:

  break;
 }

 if ((VAR_2 != VAR_1->afe_mode) &&
  (VAR_1->video_input == VAR_0))
  VAR_3 = FUNC_1(VAR_1,
           VAR_0);

 VAR_1->afe_mode = VAR_2;

 return VAR_3;
}

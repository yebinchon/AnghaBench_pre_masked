
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fusb302_chip {int src_current_status; } ;
typedef enum src_current_status { ____Placeholder_src_current_status } src_current_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (struct fusb302_chip*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct fusb302_chip *VAR_5,
       enum src_current_status VAR_6)
{
 int VAR_7 = 0;

 VAR_5->src_current_status = VAR_6;
 switch (VAR_6) {
 case 130:
  VAR_7 = FUNC_0(VAR_5, VAR_0,
          VAR_3,
          VAR_1);
  break;
 case 128:
  VAR_7 = FUNC_0(VAR_5, VAR_0,
          VAR_3,
          VAR_4);
  break;
 case 129:
  VAR_7 = FUNC_0(VAR_5, VAR_0,
          VAR_3,
          VAR_2);
  break;
 default:
  break;
 }

 return VAR_7;
}

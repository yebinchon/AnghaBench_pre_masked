
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rt2x00_dev {int dev; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static char *FUNC_2(struct rt2x00_dev *VAR_4)
{
 u16 VAR_5;
 char *VAR_6;

 FUNC_0(FUNC_1(VAR_4->dev), VAR_3, &VAR_5);
 switch (VAR_5) {
 case 130:
  VAR_6 = VAR_0;
  break;
 case 129:
  VAR_6 = VAR_1;
  break;
 case 128:
  VAR_6 = VAR_2;
  break;
 default:
  VAR_6 = ((void*)0);
  break;
 }

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cosa_data {int name; int num; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;



 unsigned int FUNC_0 (struct cosa_data*) ;
 int FUNC_1 (struct cosa_data*,unsigned int) ;
 int FUNC_2 (struct cosa_data*,unsigned int) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (struct cosa_data*,unsigned int) ;
 int FUNC_5 (struct cosa_data*,unsigned int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_2, void *VAR_3)
{
 unsigned VAR_4;
 int VAR_5 = 0;
 struct cosa_data *VAR_6 = VAR_3;
again:
 VAR_4 = FUNC_0(VAR_6);






 switch (VAR_4 & VAR_1) {
 case 130:
  FUNC_5(VAR_6, VAR_4);
  break;
 case 128:
  FUNC_4(VAR_6, VAR_4);
  break;
 case 129:
  FUNC_2(VAR_6, VAR_4);
  break;
 default:

  if (VAR_5++ < 100) {
   FUNC_6(100);
   goto again;
  }
  FUNC_3("cosa%d: unknown status 0x%02x in IRQ after %d retries\n",
   VAR_6->num, VAR_4 & 0xff, VAR_5);
 }







 return VAR_0;
}

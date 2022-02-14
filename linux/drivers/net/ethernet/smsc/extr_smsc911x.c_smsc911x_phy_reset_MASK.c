
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc911x_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct smsc911x_data*,int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (struct smsc911x_data*,int ) ;
 int FUNC_3 (struct smsc911x_data*,int ,unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct smsc911x_data *VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6 = 100000;

 VAR_5 = FUNC_2(VAR_4, VAR_1);
 FUNC_3(VAR_4, VAR_1, VAR_5 | VAR_2);
 do {
  FUNC_1(1);
  VAR_5 = FUNC_2(VAR_4, VAR_1);
 } while ((VAR_6--) && (VAR_5 & VAR_2));

 if (FUNC_4(VAR_5 & VAR_2)) {
  FUNC_0(VAR_4, VAR_3, "PHY reset failed to complete");
  return -VAR_0;
 }



 FUNC_1(1);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc911x_data {int generation; int idrev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct smsc911x_data*,int ,char*) ;
 int VAR_6 ;
 int FUNC_1 (struct smsc911x_data*) ;
 int FUNC_2 (struct smsc911x_data*) ;
 int FUNC_3 (struct smsc911x_data*) ;
 unsigned int FUNC_4 (struct smsc911x_data*,unsigned int) ;
 int FUNC_5 (struct smsc911x_data*,unsigned int,unsigned int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (unsigned int) ;

__attribute__((used)) static int FUNC_8(struct smsc911x_data *VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;
 int VAR_10;
 unsigned int VAR_11 = VAR_1;
 unsigned int VAR_12 = VAR_2;





 VAR_10 = FUNC_3(VAR_7);
 if (VAR_10) {
  FUNC_0(VAR_7, VAR_6, "Failed to power-up the PHY chip");
  return VAR_10;
 }







 if (VAR_7->generation == 4) {
  VAR_10 = FUNC_1(VAR_7);

  if (VAR_10) {
   FUNC_0(VAR_7, VAR_6, "Failed to wakeup the PHY chip");
   return VAR_10;
  }
 }

 if ((VAR_7->idrev & 0xFFFF0000) == VAR_3) {

  VAR_11 = VAR_4;
  VAR_12 = VAR_5;
 }


 FUNC_5(VAR_7, VAR_11, VAR_12);


 VAR_8 = 10;
 do {
  FUNC_6(10);
  VAR_9 = FUNC_4(VAR_7, VAR_11);
 } while ((--VAR_8) && (VAR_9 & VAR_12));

 if (FUNC_7(VAR_9 & VAR_12)) {
  FUNC_0(VAR_7, VAR_6, "Failed to complete reset");
  return -VAR_0;
 }

 if (VAR_7->generation == 4) {
  VAR_10 = FUNC_2(VAR_7);

  if (VAR_10) {
   FUNC_0(VAR_7, VAR_6, "Failed to wakeup the PHY chip");
   return VAR_10;
  }
 }

 return 0;
}

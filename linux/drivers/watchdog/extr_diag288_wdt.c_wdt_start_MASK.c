
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_3 (unsigned int,int ,int ) ;
 int FUNC_4 (unsigned int,int ,char*,size_t) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;
 size_t FUNC_9 (char*,int ,int ) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_11(struct watchdog_device *VAR_13)
{
 char *VAR_14;
 size_t VAR_15;
 int VAR_16;
 unsigned int VAR_17;

 if (FUNC_10(VAR_0, &VAR_12))
  return -VAR_1;

 VAR_16 = -VAR_2;

 if (VAR_6) {
  VAR_14 = FUNC_7(VAR_7, VAR_4);
  if (!VAR_14) {
   FUNC_5(VAR_0, &VAR_12);
   return -VAR_3;
  }
  VAR_15 = FUNC_9(VAR_14, VAR_11, VAR_7);
  FUNC_0(VAR_14, VAR_7);
  FUNC_1(VAR_14, VAR_7);

  VAR_17 = VAR_10 ? (VAR_9 | VAR_8)
   : VAR_9;
  VAR_16 = FUNC_4(VAR_17, VAR_13->timeout, VAR_14, VAR_15);
  FUNC_2(VAR_16 != 0);
  FUNC_6(VAR_14);
 } else {
  VAR_16 = FUNC_3(VAR_9,
         VAR_13->timeout, VAR_5);
 }

 if (VAR_16) {
  FUNC_8("The watchdog cannot be activated\n");
  FUNC_5(VAR_0, &VAR_12);
  return VAR_16;
 }
 return 0;
}

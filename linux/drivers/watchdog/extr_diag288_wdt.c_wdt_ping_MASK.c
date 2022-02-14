
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (unsigned int,int ,char*,size_t) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;
 size_t FUNC_8 (char*,int ,int ) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_9(struct watchdog_device *VAR_10)
{
 char *VAR_11;
 size_t VAR_12;
 int VAR_13;
 unsigned int VAR_14;

 VAR_13 = -VAR_0;

 if (VAR_3) {
  VAR_11 = FUNC_6(VAR_4, VAR_2);
  if (!VAR_11)
   return -VAR_1;
  VAR_12 = FUNC_8(VAR_11, VAR_9, VAR_4);
  FUNC_0(VAR_11, VAR_4);
  FUNC_1(VAR_11, VAR_4);






  VAR_14 = VAR_8 ? (VAR_7 | VAR_6)
   : VAR_7;

  VAR_13 = FUNC_4(VAR_14, VAR_10->timeout, VAR_11, VAR_12);
  FUNC_2(VAR_13 != 0);
  FUNC_5(VAR_11);
 } else {
  VAR_13 = FUNC_3(VAR_5, VAR_10->timeout, 0);
 }

 if (VAR_13)
  FUNC_7("The watchdog timer cannot be started or reset\n");
 return VAR_13;
}

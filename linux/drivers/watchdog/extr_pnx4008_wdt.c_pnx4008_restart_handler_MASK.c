
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct watchdog_device *VAR_9,
       unsigned long VAR_10, void *VAR_11)
{
 const char *VAR_12 = VAR_11;







 if (VAR_12) {
  if (VAR_12[0] == 'h')
   VAR_10 = VAR_4;
  else if (VAR_12[0] == 's')
   VAR_10 = VAR_5;
 }

 if (VAR_10 == VAR_5) {

  FUNC_4(VAR_0, FUNC_0(VAR_8));

  FUNC_4(VAR_1, FUNC_1(VAR_8));
 } else {

  FUNC_4(13000, FUNC_2(VAR_8));
  FUNC_4(VAR_2 | VAR_6 | VAR_7, FUNC_1(VAR_8));
 }


 FUNC_3(1000);

 return VAR_3;
}

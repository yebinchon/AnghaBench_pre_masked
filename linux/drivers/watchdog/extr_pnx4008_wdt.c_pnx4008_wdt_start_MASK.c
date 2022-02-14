
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_10 ;
 int FUNC_11 (int,int ) ;

__attribute__((used)) static int FUNC_12(struct watchdog_device *VAR_11)
{
 FUNC_9(&VAR_9);


 FUNC_11(VAR_5, FUNC_1(VAR_10));

 while (FUNC_8(FUNC_0(VAR_10)))
  FUNC_7();

 FUNC_11(VAR_4 | VAR_7 | VAR_6, FUNC_5(VAR_10));

 FUNC_11(VAR_3, FUNC_2(VAR_10));

 FUNC_11(VAR_2, FUNC_3(VAR_10));

 FUNC_11(0xFFFF, FUNC_6(VAR_10));
 FUNC_11(VAR_11->timeout * VAR_8, FUNC_4(VAR_10));

 FUNC_11(VAR_0 | VAR_1, FUNC_1(VAR_10));

 FUNC_10(&VAR_9);
 return 0;
}

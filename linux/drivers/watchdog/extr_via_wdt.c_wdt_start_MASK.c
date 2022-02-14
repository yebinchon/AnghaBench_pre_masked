
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,scalar_t__) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct watchdog_device*) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_7)
{
 unsigned int VAR_8 = FUNC_1(VAR_6);

 FUNC_3(VAR_7->timeout, VAR_6 + VAR_0);
 FUNC_3(VAR_8 | VAR_1 | VAR_2, VAR_6);
 FUNC_2(VAR_7);
 FUNC_0(&VAR_5, VAR_4 + VAR_3);
 return 0;
}

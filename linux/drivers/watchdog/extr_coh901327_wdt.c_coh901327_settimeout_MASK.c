
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct watchdog_device *VAR_4,
    unsigned int VAR_5)
{
 VAR_4->timeout = VAR_5;

 FUNC_0(VAR_5 * 100, VAR_3 + VAR_2);

 FUNC_0(VAR_1,
        VAR_3 + VAR_0);
 return 0;
}

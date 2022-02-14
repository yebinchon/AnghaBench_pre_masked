
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;


 int VAR_0 ;
 int FUNC_0 (struct watchdog_device*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1,
    unsigned int VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 FUNC_0(VAR_1, VAR_3);
 VAR_1->timeout = VAR_2;
 return 0;
}

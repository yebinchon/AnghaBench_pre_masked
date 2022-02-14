
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;
struct retu_wdt_dev {int rdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 struct retu_wdt_dev* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1,
    unsigned int VAR_2)
{
 struct retu_wdt_dev *VAR_3 = FUNC_1(VAR_1);

 VAR_1->timeout = VAR_2;
 return FUNC_0(VAR_3->rdev, VAR_0, VAR_1->timeout);
}

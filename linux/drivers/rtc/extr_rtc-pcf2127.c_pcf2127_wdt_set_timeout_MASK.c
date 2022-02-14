
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; int parent; } ;


 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_0,
       unsigned int VAR_1)
{
 FUNC_0(VAR_0->parent, "new watchdog timeout: %is (old: %is)\n",
  VAR_1, VAR_0->timeout);

 VAR_0->timeout = VAR_1;

 return FUNC_1(VAR_0);
}

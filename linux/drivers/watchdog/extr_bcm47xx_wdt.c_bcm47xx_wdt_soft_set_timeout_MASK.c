
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct watchdog_device *VAR_2,
     unsigned int VAR_3)
{
 if (VAR_3 < 1 || VAR_3 > VAR_1) {
  FUNC_0("timeout value must be 1<=x<=%d, using %d\n",
   VAR_1, VAR_3);
  return -VAR_0;
 }

 VAR_2->timeout = VAR_3;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visorhba_devdata {int serverchangingstate; int serverdown; } ;


 int VAR_0 ;
 int FUNC_0 (struct visorhba_devdata*) ;

__attribute__((used)) static int FUNC_1(struct visorhba_devdata *VAR_1)
{
 if (!VAR_1->serverdown && !VAR_1->serverchangingstate) {
  VAR_1->serverchangingstate = 1;
  FUNC_0(VAR_1);
 } else if (VAR_1->serverchangingstate) {
  return -VAR_0;
 }
 return 0;
}

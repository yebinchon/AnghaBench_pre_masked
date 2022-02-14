
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;

void FUNC_3(void)
{
 if (VAR_2 != 0)
  return;

 if (FUNC_0(&VAR_3)) {
  FUNC_2("Couldn't initialize miscdevice /dev/synth.\n");
 } else {
  FUNC_1("initialized device: /dev/synth, node (MAJOR %d, MINOR %d)\n",
   VAR_0, VAR_1);
  VAR_2 = 1;
 }
}

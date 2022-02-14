
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int * VAR_2 ;

int FUNC_2(void)
{
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0)) {
  FUNC_1("failed to create usbip_event\n");
  return -VAR_0;
 }
 return 0;
}

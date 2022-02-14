
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fman_mac {scalar_t__ addr; int event_cb; int exception_cb; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct fman_mac *VAR_1)
{
 if (VAR_1->addr == 0) {
  FUNC_0("Ethernet MAC must have a valid MAC address\n");
  return -VAR_0;
 }
 if (!VAR_1->exception_cb) {
  FUNC_0("Uninitialized exception handler\n");
  return -VAR_0;
 }
 if (!VAR_1->event_cb) {
  FUNC_1("Uninitialize event handler\n");
  return -VAR_0;
 }

 return 0;
}

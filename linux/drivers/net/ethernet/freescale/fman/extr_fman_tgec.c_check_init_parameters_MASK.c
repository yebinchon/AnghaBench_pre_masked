
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fman_mac {scalar_t__ max_speed; scalar_t__ addr; int event_cb; int exception_cb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct fman_mac *VAR_2)
{
 if (VAR_2->max_speed < VAR_1) {
  FUNC_0("10G MAC driver only support 10G speed\n");
  return -VAR_0;
 }
 if (VAR_2->addr == 0) {
  FUNC_0("Ethernet 10G MAC Must have valid MAC Address\n");
  return -VAR_0;
 }
 if (!VAR_2->exception_cb) {
  FUNC_0("uninitialized exception_cb\n");
  return -VAR_0;
 }
 if (!VAR_2->event_cb) {
  FUNC_0("uninitialized event_cb\n");
  return -VAR_0;
 }

 return 0;
}

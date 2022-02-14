
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int priority; } ;



__attribute__((used)) static int FUNC_0(struct sk_buff *VAR_0)
{
 switch (VAR_0->priority) {
 case 6:
 case 7:
  VAR_0->priority = 5;
  return 0;
 case 4:
 case 5:
  VAR_0->priority = 3;
  return 0;
 case 0:
 case 3:
  VAR_0->priority = 1;
  return 0;
 default:
  return -1;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_entry {scalar_t__ pending; scalar_t__ locked; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct filter_entry *VAR_2)
{
 if (VAR_2->locked)
  return -VAR_1;
 if (VAR_2->pending)
  return -VAR_0;

 return 0;
}

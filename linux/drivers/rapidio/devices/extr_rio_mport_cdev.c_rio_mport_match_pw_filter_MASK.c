
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_pw_filter {scalar_t__ mask; scalar_t__ low; scalar_t__ high; } ;



__attribute__((used)) static int FUNC_0(struct rio_pw_filter *VAR_0,
         struct rio_pw_filter *VAR_1)
{
 if ((VAR_0->mask == VAR_1->mask) && (VAR_0->low == VAR_1->low) && (VAR_0->high == VAR_1->high))
  return 1;
 return 0;
}

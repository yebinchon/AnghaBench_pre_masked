
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static char *FUNC_0(const struct sk_buff *VAR_1)
{
 return ((char *) (VAR_1->data + VAR_0));
}

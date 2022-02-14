
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static char *FUNC_0(const struct sk_buff *VAR_2)
{
 return ((char *) (VAR_2->data + VAR_0 +
          VAR_1 * sizeof(u32)));
}

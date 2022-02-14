
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct aspeed_sdhci {TYPE_2__* parent; } ;
typedef int resource_size_t ;
struct TYPE_4__ {TYPE_1__* res; } ;
struct TYPE_3__ {scalar_t__ start; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct resource*) ;

__attribute__((used)) static inline int FUNC_1(struct aspeed_sdhci *VAR_2,
           struct resource *VAR_3)
{
 resource_size_t VAR_4;

 if (!VAR_3 || FUNC_0(VAR_3) != VAR_1)
  return -VAR_0;

 if (VAR_3->start < VAR_2->parent->res->start)
  return -VAR_0;

 VAR_4 = VAR_3->start - VAR_2->parent->res->start;
 if (VAR_4 & (0x100 - 1))
  return -VAR_0;

 return (VAR_4 / 0x100) - 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct arena_info {TYPE_1__* nd_btt; } ;
struct TYPE_2__ {struct device dev; } ;



__attribute__((used)) static struct device *FUNC_0(struct arena_info *VAR_0)
{
 return &VAR_0->nd_btt->dev;
}

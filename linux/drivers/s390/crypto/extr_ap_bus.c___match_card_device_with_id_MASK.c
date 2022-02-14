
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {int id; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 TYPE_1__* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, const void *VAR_1)
{
 return FUNC_0(VAR_0) && FUNC_1(VAR_0)->id == (int)(long)(void *) VAR_1;
}

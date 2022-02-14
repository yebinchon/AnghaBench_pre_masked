
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {int qid; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct device*) ;
 TYPE_1__* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, const void *VAR_1)
{
 return FUNC_1(VAR_0)
  && FUNC_0(FUNC_2(VAR_0)->qid) == (int)(long) VAR_1;
}

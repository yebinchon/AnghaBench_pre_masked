
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmp {scalar_t__ offset; scalar_t__ msgram; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct qmp *VAR_0)
{
 return FUNC_0(VAR_0->msgram + VAR_0->offset) == 0;
}

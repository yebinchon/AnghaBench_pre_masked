
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventpoll {int ovflist; int rdllist; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct eventpoll *VAR_1)
{
 return !FUNC_1(&VAR_1->rdllist) ||
  FUNC_0(VAR_1->ovflist) != VAR_0;
}

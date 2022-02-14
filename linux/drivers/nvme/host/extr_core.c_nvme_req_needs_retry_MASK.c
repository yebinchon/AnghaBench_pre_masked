
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_2__ {int status; scalar_t__ retries; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct request*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_1 (struct request*) ;

__attribute__((used)) static inline bool FUNC_2(struct request *VAR_2)
{
 if (FUNC_0(VAR_2))
  return 0;
 if (FUNC_1(VAR_2)->status & VAR_0)
  return 0;
 if (FUNC_1(VAR_2)->retries >= VAR_1)
  return 0;
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct request {int rq_disk; } ;


 int FUNC_0 (struct request*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline u16 FUNC_2(struct request *VAR_0)
{
 if (!VAR_0->rq_disk)
  return 0;
 return FUNC_1(FUNC_0(VAR_0)) + 1;
}

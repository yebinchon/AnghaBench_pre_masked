
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct qdio_output_q {TYPE_1__* sbal_state; struct qaob** aobs; } ;
struct qaob {scalar_t__ user1; } ;
struct TYPE_2__ {scalar_t__ flags; scalar_t__ user; } ;


 int FUNC_0 (unsigned long) ;
 struct qaob* FUNC_1 () ;
 unsigned long FUNC_2 (struct qaob*) ;

__attribute__((used)) static inline unsigned long FUNC_3(struct qdio_output_q *VAR_0,
     int VAR_1)
{
 unsigned long VAR_2 = 0;

 if (!VAR_0->aobs[VAR_1]) {
  struct qaob *VAR_3 = FUNC_1();
  VAR_0->aobs[VAR_1] = VAR_3;
 }
 if (VAR_0->aobs[VAR_1]) {
  VAR_0->aobs[VAR_1]->user1 = (u64) VAR_0->sbal_state[VAR_1].user;
  VAR_2 = FUNC_2(VAR_0->aobs[VAR_1]);
  FUNC_0(VAR_2 & 0xFF);
 }

 VAR_0->sbal_state[VAR_1].flags = 0;
 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct qaob** aobs; TYPE_1__* sbal_state; } ;
struct TYPE_6__ {TYPE_2__ out; } ;
struct qdio_q {TYPE_3__ u; } ;
struct qaob {int dummy; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (struct qdio_q*,int,unsigned char*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct qdio_q *VAR_2, int VAR_3, int VAR_4)
{
 unsigned char VAR_5 = 0;
 int VAR_6, VAR_7 = VAR_3;

 for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {
  FUNC_0(VAR_2, VAR_7, &VAR_5, 0);
  if (VAR_5 == VAR_1) {
   struct qaob *VAR_8 = VAR_2->u.out.aobs[VAR_7];
   if (VAR_8 == ((void*)0))
    continue;

   VAR_2->u.out.sbal_state[VAR_7].flags |=
    VAR_0;
   VAR_2->u.out.aobs[VAR_7] = ((void*)0);
  }
  VAR_7 = FUNC_1(VAR_7);
 }
}

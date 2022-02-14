
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * state; } ;
struct qman_cgrs {TYPE_1__ q; } ;



__attribute__((used)) static inline void FUNC_0(struct qman_cgrs *VAR_0,
   const struct qman_cgrs *VAR_1, const struct qman_cgrs *VAR_2)
{
 int VAR_3;
 u32 *VAR_4 = VAR_0->q.state;
 const u32 *VAR_5 = VAR_1->q.state;
 const u32 *VAR_6 = VAR_2->q.state;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
  *VAR_4++ = *VAR_5++ ^ *VAR_6++;
}

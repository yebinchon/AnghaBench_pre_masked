
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* state; } ;
struct qman_cgrs {TYPE_1__ q; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct qman_cgrs *VAR_0, u8 VAR_1)
{
 return VAR_0->q.state[FUNC_1(VAR_1)] & FUNC_0(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cw1200_common {TYPE_1__* debug; } ;
struct TYPE_2__ {int ba_cnt; int ba_acc; int ba_cnt_rx; int ba_acc_rx; } ;



__attribute__((used)) static inline void FUNC_0(struct cw1200_common *VAR_0,
       int VAR_1, int VAR_2,
       int VAR_3, int VAR_4)
{
 VAR_0->debug->ba_cnt = VAR_1;
 VAR_0->debug->ba_acc = VAR_2;
 VAR_0->debug->ba_cnt_rx = VAR_3;
 VAR_0->debug->ba_acc_rx = VAR_4;
}

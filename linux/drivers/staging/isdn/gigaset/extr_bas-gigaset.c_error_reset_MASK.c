
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* bas; } ;
struct cardstate {TYPE_1__ hw; int bcs; } ;
struct TYPE_4__ {int interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct cardstate *VAR_3)
{

 FUNC_1(VAR_3->hw.bas, VAR_1, 0);
 if (FUNC_0(VAR_3->bcs, VAR_2, 0, VAR_0))

  FUNC_2(VAR_3->hw.bas->interface);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int send_fifobar; } ;
struct ccb {TYPE_1__ ccb_u1; } ;
struct TYPE_4__ {int reset; } ;


 TYPE_2__* FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct ccb *VAR_0)
{

 FUNC_0(VAR_0->ccb_u1.send_fifobar)->reset = 1;
}

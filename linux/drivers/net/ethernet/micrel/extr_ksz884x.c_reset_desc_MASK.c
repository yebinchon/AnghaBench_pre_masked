
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hw_owned; } ;
union desc_stat {int data; TYPE_1__ rx; } ;
struct ksz_desc {TYPE_3__* phw; } ;
struct TYPE_5__ {int data; } ;
struct TYPE_6__ {TYPE_2__ ctrl; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct ksz_desc *VAR_0, union desc_stat VAR_1)
{
 VAR_1.rx.hw_owned = 0;
 VAR_0->phw->ctrl.data = FUNC_0(VAR_1.data);
}

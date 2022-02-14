
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {int doorbell_ack; } ;
struct bna_ib {scalar_t__ coalescing_timeo; TYPE_1__ door_bell; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct bna_ib *VAR_0, u8 VAR_1)
{
 VAR_0->coalescing_timeo = VAR_1;
 VAR_0->door_bell.doorbell_ack = FUNC_0(
    (u32)VAR_0->coalescing_timeo, 0);
}

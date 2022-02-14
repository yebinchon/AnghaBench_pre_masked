
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mult; scalar_t__ shift; int mask; int read; } ;
struct bnx2x {TYPE_1__ cyclecounter; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_1)
{
 FUNC_1(&VAR_1->cyclecounter, 0, sizeof(VAR_1->cyclecounter));
 VAR_1->cyclecounter.read = VAR_0;
 VAR_1->cyclecounter.mask = FUNC_0(64);
 VAR_1->cyclecounter.shift = 0;
 VAR_1->cyclecounter.mult = 1;
}

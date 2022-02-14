
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ithena; } ;
union cvmx_mixx_intena {int u64; TYPE_1__ s; } ;
struct octeon_mgmt {int lock; scalar_t__ mix; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct octeon_mgmt *VAR_1, int VAR_2)
{
 union cvmx_mixx_intena VAR_3;
 unsigned long VAR_4;

 FUNC_2(&VAR_1->lock, VAR_4);
 VAR_3.u64 = FUNC_0(VAR_1->mix + VAR_0);
 VAR_3.s.ithena = VAR_2 ? 1 : 0;
 FUNC_1(VAR_1->mix + VAR_0, VAR_3.u64);
 FUNC_3(&VAR_1->lock, VAR_4);
}

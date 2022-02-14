
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct perf_peer {int pidx; TYPE_1__* perf; } ;
struct TYPE_2__ {int ntb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *) ;

__attribute__((used)) static inline bool FUNC_2(struct perf_peer *VAR_0)
{
 u64 VAR_1;

 VAR_1 = FUNC_1(VAR_0->perf->ntb, ((void*)0), ((void*)0));
 return !!(VAR_1 & FUNC_0(VAR_0->pidx));
}

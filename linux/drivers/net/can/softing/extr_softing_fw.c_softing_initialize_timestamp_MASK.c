
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct softing {int ts_overflow; TYPE_1__* pdat; int ts_ref; } ;
struct TYPE_2__ {scalar_t__ freq; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct softing *VAR_0)
{
 uint64_t VAR_1;

 VAR_0->ts_ref = FUNC_2();


 VAR_1 = 0x100000000ULL * 16;
 FUNC_0(VAR_1, VAR_0->pdat->freq ?: 16);

 VAR_0->ts_overflow = FUNC_1(0, VAR_1);
}

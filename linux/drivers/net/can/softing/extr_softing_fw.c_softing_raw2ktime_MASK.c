
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u32 ;
struct softing {int ts_overflow; int ts_ref; TYPE_1__* pdat; } ;
typedef int ktime_t ;
struct TYPE_2__ {scalar_t__ freq; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

ktime_t FUNC_8(struct softing *VAR_0, u32 VAR_1)
{
 uint64_t VAR_2;
 ktime_t VAR_3, VAR_4;
 ktime_t VAR_5;
 ktime_t VAR_6;

 VAR_3 = FUNC_3();
 VAR_4 = FUNC_5(FUNC_4(), VAR_3);


 VAR_2 = VAR_1 * 16;
 FUNC_0(VAR_2, VAR_0->pdat->freq ?: 16);
 VAR_5 = FUNC_2(VAR_0->ts_ref, VAR_2);

 VAR_6 = FUNC_1(VAR_5, VAR_0->ts_overflow);
 while (FUNC_7(FUNC_6(VAR_6) > FUNC_6(VAR_3))) {
  VAR_0->ts_ref = FUNC_1(VAR_0->ts_ref, VAR_0->ts_overflow);
  VAR_5 = VAR_6;
  VAR_6 = FUNC_1(VAR_5, VAR_0->ts_overflow);
 }
 return FUNC_1(VAR_5, VAR_4);
}

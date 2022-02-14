
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct request {int write_hint; TYPE_1__* q; } ;
struct nvme_ctrl {int nr_streams; } ;
typedef enum rw_hint { ____Placeholder_rw_hint } rw_hint ;
struct TYPE_2__ {int* write_hints; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct request*) ;

__attribute__((used)) static void FUNC_3(struct nvme_ctrl *VAR_3,
         struct request *VAR_4, u16 *VAR_5,
         u32 *VAR_6)
{
 enum rw_hint VAR_7 = VAR_4->write_hint;

 if (VAR_7 == VAR_2 || VAR_7 == VAR_1)
  VAR_7 = 0;
 else {
  VAR_7--;
  if (FUNC_1(VAR_7 > VAR_3->nr_streams))
   return;

  *VAR_5 |= VAR_0;
  *VAR_6 |= VAR_7 << 16;
 }

 if (VAR_7 < FUNC_0(VAR_4->q->write_hints))
  VAR_4->q->write_hints[VAR_7] += FUNC_2(VAR_4) >> 9;
}

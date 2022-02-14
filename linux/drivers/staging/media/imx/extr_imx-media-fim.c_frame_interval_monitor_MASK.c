
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long long u64 ;
typedef long long u32 ;
struct imx_media_fim {scalar_t__ counter; long long tolerance_max; scalar_t__ num_avg; unsigned long tolerance_min; int last_ts; scalar_t__ sum; TYPE_1__* sd; scalar_t__ nominal; int enabled; } ;
typedef int ktime_t ;
struct TYPE_2__ {int dev; } ;


 unsigned long FUNC_0 (scalar_t__,scalar_t__) ;
 long long VAR_0 ;
 long long VAR_1 ;
 long long FUNC_1 (long long) ;
 int FUNC_2 (int ,char*,unsigned long,...) ;
 int FUNC_3 (int ,int ) ;
 long long FUNC_4 (int ) ;
 int FUNC_5 (struct imx_media_fim*,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct imx_media_fim *VAR_2,
       ktime_t VAR_3)
{
 long long VAR_4, VAR_5;
 unsigned long VAR_6;
 bool VAR_7 = 0;

 if (!VAR_2->enabled || ++VAR_2->counter <= 0)
  goto out_update_ts;


 VAR_4 = FUNC_4(FUNC_3(VAR_3, VAR_2->last_ts));
 VAR_5 = FUNC_1(VAR_4 - VAR_0 * (u64)VAR_2->nominal);
 if (VAR_5 > VAR_1)
  VAR_5 = VAR_1;
 else
  VAR_5 = FUNC_1((u32)VAR_5 / VAR_0);

 if (VAR_2->tolerance_max && VAR_5 >= VAR_2->tolerance_max) {
  FUNC_2(VAR_2->sd->dev,
   "FIM: %llu ignored, out of tolerance bounds\n",
   VAR_5);
  VAR_2->counter--;
  goto out_update_ts;
 }

 VAR_2->sum += VAR_5;

 if (VAR_2->counter == VAR_2->num_avg) {
  VAR_6 = FUNC_0(VAR_2->sum, VAR_2->num_avg);

  if (VAR_6 > VAR_2->tolerance_min)
   VAR_7 = 1;

  FUNC_2(VAR_2->sd->dev, "FIM: error: %lu usec%s\n",
   VAR_6, VAR_7 ? " (!!!)" : "");

  VAR_2->counter = 0;
  VAR_2->sum = 0;
 }

out_update_ts:
 VAR_2->last_ts = VAR_3;
 if (VAR_7)
  FUNC_5(VAR_2, VAR_6);
}

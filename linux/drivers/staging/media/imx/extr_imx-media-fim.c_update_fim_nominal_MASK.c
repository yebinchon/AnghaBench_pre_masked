
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct v4l2_fract {scalar_t__ denominator; scalar_t__ numerator; } ;
struct imx_media_fim {int enabled; int nominal; TYPE_1__* sd; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (unsigned long long,scalar_t__) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static void FUNC_2(struct imx_media_fim *VAR_0,
          const struct v4l2_fract *VAR_1)
{
 if (VAR_1->denominator == 0) {
  FUNC_1(VAR_0->sd->dev, "no frame interval, FIM disabled\n");
  VAR_0->enabled = 0;
  return;
 }

 VAR_0->nominal = FUNC_0(1000000ULL * (u64)VAR_1->numerator,
          VAR_1->denominator);

 FUNC_1(VAR_0->sd->dev, "FI=%lu usec\n", VAR_0->nominal);
}

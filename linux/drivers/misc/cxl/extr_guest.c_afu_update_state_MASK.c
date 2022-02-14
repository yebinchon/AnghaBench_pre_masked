
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cxl_afu {int slice; TYPE_1__* guest; int dev; } ;
struct TYPE_4__ {int (* afu_reset ) (struct cxl_afu*) ;} ;
struct TYPE_3__ {int previous_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (struct cxl_afu*,int*) ;
 int FUNC_1 (struct cxl_afu*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (int *,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct cxl_afu*,int ,int ) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (struct cxl_afu*) ;

__attribute__((used)) static int FUNC_7(struct cxl_afu *VAR_8)
{
 int VAR_9, VAR_10;

 VAR_9 = FUNC_0(VAR_8, &VAR_10);
 if (VAR_9)
  return VAR_9;

 if (VAR_8->guest->previous_state == VAR_10)
  return 0;

 FUNC_4("AFU(%d) update state to %#x\n", VAR_8->slice, VAR_10);

 switch (VAR_10) {
 case 130:
  VAR_8->guest->previous_state = VAR_10;
  break;

 case 131:
  FUNC_3(VAR_8, VAR_0,
    VAR_5);

  FUNC_1(VAR_8);
  if ((VAR_9 = VAR_4->afu_reset(VAR_8)))
   FUNC_4("reset hcall failed %d\n", VAR_9);

  VAR_9 = FUNC_0(VAR_8, &VAR_10);
  if (!VAR_9 && VAR_10 == 130) {
   FUNC_3(VAR_8, VAR_2,
     VAR_6);
   FUNC_3(VAR_8, VAR_1, 0);
  }
  VAR_8->guest->previous_state = 0;
  break;

 case 128:
  VAR_8->guest->previous_state = VAR_10;
  break;

 case 129:
  FUNC_2(&VAR_8->dev, "AFU is in permanent error state\n");
  FUNC_3(VAR_8, VAR_0,
    VAR_7);
  VAR_8->guest->previous_state = VAR_10;
  break;

 default:
  FUNC_5("Unexpected AFU(%d) error state: %#x\n",
         VAR_8->slice, VAR_10);
  return -VAR_3;
 }

 return VAR_9;
}

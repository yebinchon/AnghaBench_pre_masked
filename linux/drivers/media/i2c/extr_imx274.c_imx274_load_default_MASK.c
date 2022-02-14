
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* vflip; TYPE_3__* gain; TYPE_3__* exposure; TYPE_1__* test_pattern; } ;
struct TYPE_8__ {int numerator; int denominator; } ;
struct stimx274 {TYPE_2__ ctrls; TYPE_4__ frame_interval; } ;
struct TYPE_7__ {int val; } ;
struct TYPE_5__ {int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct stimx274*,TYPE_4__) ;
 int FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_2(struct stimx274 *VAR_3)
{
 int VAR_4;


 VAR_3->frame_interval.numerator = 1;
 VAR_3->frame_interval.denominator = VAR_0;
 VAR_3->ctrls.exposure->val = 1000000 / VAR_0;
 VAR_3->ctrls.gain->val = VAR_1;
 VAR_3->ctrls.vflip->val = 0;
 VAR_3->ctrls.test_pattern->val = VAR_2;


 VAR_4 = FUNC_0(VAR_3,
     VAR_3->frame_interval);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_1(VAR_3->ctrls.exposure, VAR_3->ctrls.exposure->val);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_1(VAR_3->ctrls.gain, VAR_3->ctrls.gain->val);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_1(VAR_3->ctrls.vflip, VAR_3->ctrls.vflip->val);
 if (VAR_4)
  return VAR_4;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int member_1; int member_0; } ;
typedef TYPE_3__ u32 ;
struct imx355 {TYPE_2__* hflip; TYPE_1__* vflip; int mutex; } ;
struct TYPE_6__ {size_t val; } ;
struct TYPE_5__ {size_t val; } ;






 int FUNC_0 (int *) ;

__attribute__((used)) static u32 FUNC_1(struct imx355 *VAR_0)
{




 u32 VAR_1;
 static const u32 VAR_2[2][2] = {
  { 128, 129, },
  { 130, 131, },
 };

 FUNC_0(&VAR_0->mutex);
 VAR_1 = VAR_2[VAR_0->vflip->val][VAR_0->hflip->val];

 return VAR_1;
}

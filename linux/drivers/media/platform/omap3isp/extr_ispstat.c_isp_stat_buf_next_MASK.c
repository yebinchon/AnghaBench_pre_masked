
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct ispstat {int active_buf; TYPE_2__ subdev; TYPE_1__* isp; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct ispstat*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ispstat *VAR_0)
{
 if (FUNC_2(VAR_0->active_buf))

  FUNC_0(VAR_0->isp->dev,
   "%s: new buffer requested without queuing active one.\n",
   VAR_0->subdev.name);
 else
  VAR_0->active_buf = FUNC_1(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int mbfc; unsigned long mba; unsigned long mbi; int mme; } ;
struct subchannel {TYPE_2__ config; } ;
struct TYPE_3__ {int parent; } ;
struct ccw_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct subchannel*) ;
 struct subchannel* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ccw_device *VAR_1, u32 VAR_2, int VAR_3,
       unsigned long VAR_4)
{
 struct subchannel *VAR_5 = FUNC_1(VAR_1->dev.parent);
 int VAR_6;

 VAR_5->config.mme = VAR_2;
 VAR_5->config.mbfc = VAR_3;

 if (VAR_3)
  VAR_5->config.mba = VAR_4;
 else
  VAR_5->config.mbi = VAR_4;

 VAR_6 = FUNC_0(VAR_5);
 if (!VAR_2 && VAR_6 == -VAR_0) {




  VAR_6 = 0;
 }
 return VAR_6;
}

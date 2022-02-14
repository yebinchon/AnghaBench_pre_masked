
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; TYPE_1__* v4l2_dev; } ;
struct pvr2_v4l2_dev {TYPE_2__ devbase; } ;
struct TYPE_3__ {int * dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct pvr2_v4l2_dev *VAR_1)
{
 if (!VAR_1) return;
 if (!VAR_1->devbase.v4l2_dev->dev) return;
 VAR_1->devbase.v4l2_dev->dev = ((void*)0);
 FUNC_0(&VAR_1->devbase.dev, ((void*)0), VAR_0);
}

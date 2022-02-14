
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpe_ctx {TYPE_2__* dev; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ v4l2_dev; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct vpe_ctx *VAR_0)
{
 FUNC_0(VAR_0->dev->v4l2_dev.dev,
  "received downsampler error interrupt\n");
}

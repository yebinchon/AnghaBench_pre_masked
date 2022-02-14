
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {int height; int width; } ;
struct TYPE_7__ {TYPE_1__ crop; } ;
struct TYPE_10__ {int height; int width; } ;
struct TYPE_9__ {TYPE_5__ crop; } ;
struct bdisp_ctx {TYPE_3__* bdisp_dev; TYPE_2__ dst; TYPE_4__ src; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct bdisp_ctx *VAR_1, u16 *VAR_2, u16 *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_4 = VAR_1->src.crop.width;
 VAR_5 = VAR_1->src.crop.height;
 VAR_6 = VAR_1->dst.crop.width;
 VAR_7 = VAR_1->dst.crop.height;

 if (FUNC_0(VAR_4, VAR_6, VAR_2) ||
     FUNC_0(VAR_5, VAR_7, VAR_3)) {
  FUNC_1(VAR_1->bdisp_dev->dev,
   "scale factors failed (%dx%d)->(%dx%d)\n",
   VAR_4, VAR_5, VAR_6, VAR_7);
  return -VAR_0;
 }

 return 0;
}

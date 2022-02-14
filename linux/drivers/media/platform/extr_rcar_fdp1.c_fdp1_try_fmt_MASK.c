
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int field; int height; int width; int pixelformat; } ;
struct TYPE_4__ {TYPE_2__ pix_mp; } ;
struct v4l2_format {scalar_t__ type; TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct fdp1_ctx {int fdp1; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,char*,char*,int ,int ,int ,int ) ;
 int FUNC_2 (struct fdp1_ctx*,int *,TYPE_2__*) ;
 int FUNC_3 (struct fdp1_ctx*,int *,TYPE_2__*) ;
 struct fdp1_ctx* FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_1, void *VAR_2, struct v4l2_format *VAR_3)
{
 struct fdp1_ctx *VAR_4 = FUNC_4(VAR_2);

 if (VAR_3->type == VAR_0)
  FUNC_3(VAR_4, ((void*)0), &VAR_3->fmt.pix_mp);
 else
  FUNC_2(VAR_4, ((void*)0), &VAR_3->fmt.pix_mp);

 FUNC_1(VAR_4->fdp1, "Try %s format: %4.4s (0x%08x) %ux%u field %u\n",
  FUNC_0(VAR_3->type) ? "output" : "capture",
  (char *)&VAR_3->fmt.pix_mp.pixelformat, VAR_3->fmt.pix_mp.pixelformat,
  VAR_3->fmt.pix_mp.width, VAR_3->fmt.pix_mp.height, VAR_3->fmt.pix_mp.field);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sizeimage; int height; int width; } ;
struct TYPE_4__ {int height; int width; } ;
struct aspeed_video {int max_compressed_size; TYPE_1__ pix_fmt; TYPE_2__ active_timings; TYPE_2__ detected_timings; } ;


 int FUNC_0 (struct aspeed_video*) ;
 int FUNC_1 (struct aspeed_video*) ;
 int FUNC_2 (struct aspeed_video*) ;
 int FUNC_3 (struct aspeed_video*) ;

__attribute__((used)) static void FUNC_4(struct aspeed_video *VAR_0)
{
 FUNC_2(VAR_0);

 FUNC_1(VAR_0);


 FUNC_0(VAR_0);


 VAR_0->active_timings = VAR_0->detected_timings;
 FUNC_3(VAR_0);

 VAR_0->pix_fmt.width = VAR_0->active_timings.width;
 VAR_0->pix_fmt.height = VAR_0->active_timings.height;
 VAR_0->pix_fmt.sizeimage = VAR_0->max_compressed_size;
}
